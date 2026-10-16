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

// Function: sub_00153B18
// Address: 0x153b18 - 0x153c30
void sub_00153B18_0x153b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153B18_0x153b18");
#endif

    switch (ctx->pc) {
        case 0x153b6cu: goto label_153b6c;
        case 0x153b80u: goto label_153b80;
        case 0x153bd8u: goto label_153bd8;
        case 0x153c00u: goto label_153c00;
        default: break;
    }

    ctx->pc = 0x153b18u;

    // 0x153b18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x153b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x153b1c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x153b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x153b20: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x153b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x153b24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x153b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153b28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x153b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x153b2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153b30: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x153b30u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x153b34: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x153b34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x153b38: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x153b38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x153b3c: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x153b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x153b40: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x153B40u;
    {
        const bool branch_taken_0x153b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B40u;
        // 0x153b44: 0x3c120034  lui         $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b40) {
            ctx->pc = 0x153C00u;
            goto label_153c00;
        }
    }
    ctx->pc = 0x153B48u;
    // 0x153b48: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x153b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x153b4c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x153b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x153b50: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x153b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x153b54: 0x8e4585ec  lw          $a1, -0x7A14($s2)
    ctx->pc = 0x153b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936044)));
    // 0x153b58: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x153b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x153b5c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x153b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x153b60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x153b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x153b64: 0xc085d2a  jal         func_2174A8
    ctx->pc = 0x153B64u;
    SET_GPR_U32(ctx, 31, 0x153B6Cu);
    ctx->pc = 0x153B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153B64u;
    // 0x153b68: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2174A8u, 0x153B64u, 0x153B6Cu)) {
        return;
    }
    ctx->pc = 0x153B6Cu;
label_153b6c:
    // 0x153b6c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x153b6cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x153b70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x153b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153b74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153b78: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x153B78u;
    SET_GPR_U32(ctx, 31, 0x153B80u);
    ctx->pc = 0x153B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153B78u;
    // 0x153b7c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x153B78u, 0x153B80u)) {
        return;
    }
    ctx->pc = 0x153B80u;
label_153b80:
    // 0x153b80: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x153b80u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x153b84: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x153b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x153b88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153b8c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x153b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x153b90: 0x3c0143d3  lui         $at, 0x43D3
    ctx->pc = 0x153b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17363 << 16));
    // 0x153b94: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x153b94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x153b98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x153b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153b9c: 0x245185e0  addiu       $s1, $v0, -0x7A20
    ctx->pc = 0x153b9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936032));
    // 0x153ba0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x153ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x153ba4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x153ba4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x153ba8: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x153ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x153bac: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x153bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x153bb0: 0x246785d8  addiu       $a3, $v1, -0x7A28
    ctx->pc = 0x153bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936024));
    // 0x153bb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153BB4u;
    {
        const bool branch_taken_0x153bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153BB4u;
        // 0x153bb8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153bb4) {
            ctx->pc = 0x153BC4u;
            goto label_153bc4;
        }
    }
    ctx->pc = 0x153BBCu;
    // 0x153bbc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x153bbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153bc0: 0x247185d8  addiu       $s1, $v1, -0x7A28
    ctx->pc = 0x153bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936024));
label_153bc4:
    // 0x153bc4: 0x8e4585ec  lw          $a1, -0x7A14($s2)
    ctx->pc = 0x153bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936044)));
    // 0x153bc8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x153bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153bcc: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x153bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x153bd0: 0xc085cac  jal         func_2172B0
    ctx->pc = 0x153BD0u;
    SET_GPR_U32(ctx, 31, 0x153BD8u);
    ctx->pc = 0x153BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153BD0u;
    // 0x153bd4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2172B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2172B0u, 0x153BD0u, 0x153BD8u)) {
        return;
    }
    ctx->pc = 0x153BD8u;
label_153bd8:
    // 0x153bd8: 0x3c01438f  lui         $at, 0x438F
    ctx->pc = 0x153bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17295 << 16));
    // 0x153bdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153be0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x153be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x153be4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x153be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x153be8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x153be8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x153bec: 0x8c4585f0  lw          $a1, -0x7A10($v0)
    ctx->pc = 0x153becu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3385F0u));
    // 0x153bf0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x153bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153bf4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x153bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x153bf8: 0xc085cac  jal         func_2172B0
    ctx->pc = 0x153BF8u;
    SET_GPR_U32(ctx, 31, 0x153C00u);
    ctx->pc = 0x153BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153BF8u;
    // 0x153bfc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2172B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2172B0u, 0x153BF8u, 0x153C00u)) {
        return;
    }
    ctx->pc = 0x153C00u;
label_153c00:
    // 0x153c00: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x153c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153c04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x153c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153c08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x153c08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153c0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153c10: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x153c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x153c14: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x153c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x153c18: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x153c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x153c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x153C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C1Cu;
        // 0x153c20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153C24u;
    // 0x153c24: 0x0  nop
    ctx->pc = 0x153c24u;
    // NOP
    // 0x153c28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x153c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x153c2c: 0x0  nop
    ctx->pc = 0x153c2cu;
    // NOP
    ctx->pc = 0x153c30u;
}
