#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011C8A0
// Address: 0x11c8a0 - 0x11c968
void sub_0011C8A0_0x11c8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C8A0_0x11c8a0");
#endif

    switch (ctx->pc) {
        case 0x11c8b8u: goto label_11c8b8;
        case 0x11c8d8u: goto label_11c8d8;
        case 0x11c8e0u: goto label_11c8e0;
        case 0x11c8e8u: goto label_11c8e8;
        case 0x11c8f0u: goto label_11c8f0;
        default: break;
    }

    ctx->pc = 0x11c8a0u;

    // 0x11c8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11c8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11c8a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11c8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c8a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11c8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11c8ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c8b0: 0xc044624  jal         func_111890
    ctx->pc = 0x11C8B0u;
    SET_GPR_U32(ctx, 31, 0x11C8B8u);
    ctx->pc = 0x11C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8B0u;
    // 0x11c8b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111890u, 0x11C8B0u, 0x11C8B8u)) {
        return;
    }
    ctx->pc = 0x11C8B8u;
label_11c8b8:
    // 0x11c8b8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11c8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11c8bc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x11c8c0: 0x2463b2d0  addiu       $v1, $v1, -0x4D30
    ctx->pc = 0x11c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947536));
    // 0x11c8c4: 0x2442b2f0  addiu       $v0, $v0, -0x4D10
    ctx->pc = 0x11c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947568));
    // 0x11c8c8: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x11c8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x11c8cc: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x11c8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x11c8d0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11C8D0u;
    SET_GPR_U32(ctx, 31, 0x11C8D8u);
    ctx->pc = 0x11C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8D0u;
    // 0x11c8d4: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11C8D0u, 0x11C8D8u)) {
        return;
    }
    ctx->pc = 0x11C8D8u;
label_11c8d8:
    // 0x11c8d8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11C8D8u;
    SET_GPR_U32(ctx, 31, 0x11C8E0u);
    ctx->pc = 0x11C8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8D8u;
    // 0x11c8dc: 0x260400d8  addiu       $a0, $s0, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11C8D8u, 0x11C8E0u)) {
        return;
    }
    ctx->pc = 0x11C8E0u;
label_11c8e0:
    // 0x11c8e0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11C8E0u;
    SET_GPR_U32(ctx, 31, 0x11C8E8u);
    ctx->pc = 0x11C8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8E0u;
    // 0x11c8e4: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11C8E0u, 0x11C8E8u)) {
        return;
    }
    ctx->pc = 0x11C8E8u;
label_11c8e8:
    // 0x11c8e8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11C8E8u;
    SET_GPR_U32(ctx, 31, 0x11C8F0u);
    ctx->pc = 0x11C8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8E8u;
    // 0x11c8ec: 0x260400e8  addiu       $a0, $s0, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11C8E8u, 0x11C8F0u)) {
        return;
    }
    ctx->pc = 0x11C8F0u;
label_11c8f0:
    // 0x11c8f0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11c8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11c8f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11c8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11c8f8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x11c8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x11c8fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11c8fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11c900: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x11c900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x11c904: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x11c904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x11c908: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11c908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11c90c: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x11c90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x11c910: 0xe60100f4  swc1        $f1, 0xF4($s0)
    ctx->pc = 0x11c910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x11c914: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x11c914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x11c918: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x11c918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x11c91c: 0xe6030100  swc1        $f3, 0x100($s0)
    ctx->pc = 0x11c91cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x11c920: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x11c920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x11c924: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11c924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x11c928: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x11c928u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x11c92c: 0x2443b3b8  addiu       $v1, $v0, -0x4C48
    ctx->pc = 0x11c92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947768));
    // 0x11c930: 0xc440b3b8  lwc1        $f0, -0x4C48($v0)
    ctx->pc = 0x11c930u;
    { uint32_t bits = FAST_READ32(0x68B3B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c934: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x11c934u;
    { uint32_t bits = FAST_READ32(0x68B3C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11c938: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x11c938u;
    { uint32_t bits = FAST_READ32(0x68B3BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11c93c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x11c93cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x11c940: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x11c940u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x11c944: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x11c944u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11c948: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x11c948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x11c94c: 0xe601010c  swc1        $f1, 0x10C($s0)
    ctx->pc = 0x11c94cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x11c950: 0xe6020108  swc1        $f2, 0x108($s0)
    ctx->pc = 0x11c950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x11c954: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11c954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c958: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11c958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c960: 0x3e00008  jr          $ra
    ctx->pc = 0x11C960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C960u;
        // 0x11c964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C968u;
}
