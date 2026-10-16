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

// Function: sub_001B6E38
// Address: 0x1b6e38 - 0x1b6f20
void sub_001B6E38_0x1b6e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6E38_0x1b6e38");
#endif

    switch (ctx->pc) {
        case 0x1b6e74u: goto label_1b6e74;
        case 0x1b6e98u: goto label_1b6e98;
        case 0x1b6edcu: goto label_1b6edc;
        case 0x1b6ee8u: goto label_1b6ee8;
        default: break;
    }

    ctx->pc = 0x1b6e38u;

    // 0x1b6e38: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1b6e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1b6e3c: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1b6e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x1b6e40: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1b6e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x1b6e44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b6e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e48: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x1b6e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x1b6e4c: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x1b6e4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1b6e50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b6e50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e54: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x1b6e54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x1b6e58: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x1b6e58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1b6e5c: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1b6e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1b6e60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b6e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6e64: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b6e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1b6e68: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1b6e68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1b6e6c: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1B6E6Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E74u);
    ctx->pc = 0x1B6E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E6Cu;
    // 0x1b6e70: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1B6E6Cu, 0x1B6E74u)) {
        return;
    }
    ctx->pc = 0x1B6E74u;
label_1b6e74:
    // 0x1b6e74: 0xc6140080  lwc1        $f20, 0x80($s0)
    ctx->pc = 0x1b6e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b6e78: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1b6e78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b6e7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e84: 0x0  nop
    ctx->pc = 0x1b6e84u;
    // NOP
    // 0x1b6e88: 0x0  nop
    ctx->pc = 0x1b6e88u;
    // NOP
    // 0x1b6e8c: 0x4614ad03  div.s       $f20, $f21, $f20
    ctx->pc = 0x1b6e8cu;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[20]);
    // 0x1b6e90: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B6E90u;
    SET_GPR_U32(ctx, 31, 0x1B6E98u);
    ctx->pc = 0x1B6E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E90u;
    // 0x1b6e94: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B6E90u, 0x1B6E98u)) {
        return;
    }
    ctx->pc = 0x1B6E98u;
label_1b6e98:
    // 0x1b6e98: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1b6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1b6e9c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1b6e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x1b6ea0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1b6ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b6ea4: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x1b6ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b6ea8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b6ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b6eac: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x1b6eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b6eb0: 0x4600b486  mov.s       $f18, $f22
    ctx->pc = 0x1b6eb0u;
    ctx->f[18] = FPU_MOV_S(ctx->f[22]);
    // 0x1b6eb4: 0xc4500fe0  lwc1        $f16, 0xFE0($v0)
    ctx->pc = 0x1b6eb4u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1b6eb8: 0x4600b4c6  mov.s       $f19, $f22
    ctx->pc = 0x1b6eb8u;
    ctx->f[19] = FPU_MOV_S(ctx->f[22]);
    // 0x1b6ebc: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1b6ebcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1b6ec0: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x1b6ec0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x1b6ec4: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x1b6ec4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b6ec8: 0x24a5cb88  addiu       $a1, $a1, -0x3478
    ctx->pc = 0x1b6ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953864));
    // 0x1b6ecc: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1b6eccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b6ed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ed4: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1B6ED4u;
    SET_GPR_U32(ctx, 31, 0x1B6EDCu);
    ctx->pc = 0x1B6ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6ED4u;
    // 0x1b6ed8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1B6ED4u, 0x1B6EDCu)) {
        return;
    }
    ctx->pc = 0x1B6EDCu;
label_1b6edc:
    // 0x1b6edc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ee0: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1B6EE0u;
    SET_GPR_U32(ctx, 31, 0x1B6EE8u);
    ctx->pc = 0x1B6EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6EE0u;
    // 0x1b6ee4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1B6EE0u, 0x1B6EE8u)) {
        return;
    }
    ctx->pc = 0x1B6EE8u;
label_1b6ee8:
    // 0x1b6ee8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1b6ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1b6eec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6EECu;
    {
        const bool branch_taken_0x1b6eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6eec) {
            ctx->pc = 0x1B6EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6EECu;
            // 0x1b6ef0: 0xe6560014  swc1        $f22, 0x14($s2) (Delay Slot)
            { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6EF4u;
            goto label_1b6ef4;
        }
    }
    ctx->pc = 0x1B6EF4u;
label_1b6ef4:
    // 0x1b6ef4: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x1b6ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x1b6ef8: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1b6ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b6efc: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1b6efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b6f00: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x1b6f00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b6f04: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1b6f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b6f08: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x1b6f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b6f0c: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x1b6f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b6f10: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x1b6f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b6f14: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F14u;
        // 0x1b6f18: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6F1Cu;
    // 0x1b6f1c: 0x0  nop
    ctx->pc = 0x1b6f1cu;
    // NOP
    ctx->pc = 0x1b6f20u;
}
