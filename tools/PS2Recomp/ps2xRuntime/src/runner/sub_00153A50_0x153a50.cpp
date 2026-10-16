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

// Function: sub_00153A50
// Address: 0x153a50 - 0x153b18
void sub_00153A50_0x153a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153A50_0x153a50");
#endif

    switch (ctx->pc) {
        case 0x153a50u: goto label_153a50;
        case 0x153a54u: goto label_153a54;
        case 0x153a58u: goto label_153a58;
        case 0x153a5cu: goto label_153a5c;
        case 0x153a60u: goto label_153a60;
        case 0x153a64u: goto label_153a64;
        case 0x153a68u: goto label_153a68;
        case 0x153a6cu: goto label_153a6c;
        case 0x153a70u: goto label_153a70;
        case 0x153a74u: goto label_153a74;
        case 0x153a78u: goto label_153a78;
        case 0x153a7cu: goto label_153a7c;
        case 0x153a80u: goto label_153a80;
        case 0x153a84u: goto label_153a84;
        case 0x153a88u: goto label_153a88;
        case 0x153a8cu: goto label_153a8c;
        case 0x153a90u: goto label_153a90;
        case 0x153a94u: goto label_153a94;
        case 0x153a98u: goto label_153a98;
        case 0x153a9cu: goto label_153a9c;
        case 0x153aa0u: goto label_153aa0;
        case 0x153aa4u: goto label_153aa4;
        case 0x153aa8u: goto label_153aa8;
        case 0x153aacu: goto label_153aac;
        case 0x153ab0u: goto label_153ab0;
        case 0x153ab4u: goto label_153ab4;
        case 0x153ab8u: goto label_153ab8;
        case 0x153abcu: goto label_153abc;
        case 0x153ac0u: goto label_153ac0;
        case 0x153ac4u: goto label_153ac4;
        case 0x153ac8u: goto label_153ac8;
        case 0x153accu: goto label_153acc;
        case 0x153ad0u: goto label_153ad0;
        case 0x153ad4u: goto label_153ad4;
        case 0x153ad8u: goto label_153ad8;
        case 0x153adcu: goto label_153adc;
        case 0x153ae0u: goto label_153ae0;
        case 0x153ae4u: goto label_153ae4;
        case 0x153ae8u: goto label_153ae8;
        case 0x153aecu: goto label_153aec;
        case 0x153af0u: goto label_153af0;
        case 0x153af4u: goto label_153af4;
        case 0x153af8u: goto label_153af8;
        case 0x153afcu: goto label_153afc;
        case 0x153b00u: goto label_153b00;
        case 0x153b04u: goto label_153b04;
        case 0x153b08u: goto label_153b08;
        case 0x153b0cu: goto label_153b0c;
        case 0x153b10u: goto label_153b10;
        case 0x153b14u: goto label_153b14;
        default: break;
    }

    ctx->pc = 0x153a50u;

label_153a50:
    // 0x153a50: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x153a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_153a54:
    // 0x153a54: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x153a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_153a58:
    // 0x153a58: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x153a58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_153a5c:
    // 0x153a5c: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x153a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_153a60:
    // 0x153a60: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x153a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_153a64:
    // 0x153a64: 0xc06ccfe  jal         func_1B33F8
label_153a68:
    if (ctx->pc == 0x153A68u) {
        ctx->pc = 0x153A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A64u;
        // 0x153a68: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x153A6Cu;
        goto label_153a6c;
    }
    ctx->pc = 0x153A64u;
    SET_GPR_U32(ctx, 31, 0x153A6Cu);
    ctx->pc = 0x153A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153A64u;
    // 0x153a68: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B33F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B33F8u, 0x153A64u, 0x153A6Cu)) {
        return;
    }
    ctx->pc = 0x153A6Cu;
label_153a6c:
    // 0x153a6c: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x153a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_153a70:
    // 0x153a70: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x153a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_153a74:
    // 0x153a74: 0x346300ff  ori         $v1, $v1, 0xFF
    ctx->pc = 0x153a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
label_153a78:
    // 0x153a78: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x153a78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_153a7c:
    // 0x153a7c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x153a7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_153a80:
    // 0x153a80: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x153a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_153a84:
    // 0x153a84: 0x34c63300  ori         $a2, $a2, 0x3300
    ctx->pc = 0x153a84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13056);
label_153a88:
    // 0x153a88: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x153a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_153a8c:
    // 0x153a8c: 0xac460050  sw          $a2, 0x50($v0)
    ctx->pc = 0x153a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 6));
label_153a90:
    // 0x153a90: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x153a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_153a94:
    // 0x153a94: 0x40f809  jalr        $v0
label_153a98:
    if (ctx->pc == 0x153A98u) {
        ctx->pc = 0x153A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A94u;
        // 0x153a98: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153A9Cu;
        goto label_153a9c;
    }
    ctx->pc = 0x153A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x153A9Cu);
        ctx->pc = 0x153A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153A94u;
        // 0x153a98: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153A94u, 0x153A9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x153A9Cu;
label_153a9c:
    // 0x153a9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x153a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_153aa0:
    // 0x153aa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_153aa4:
    // 0x153aa4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x153aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_153aa8:
    // 0x153aa8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x153aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_153aac:
    // 0x153aac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x153aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_153ab0:
    // 0x153ab0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x153ab0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
label_153ab4:
    // 0x153ab4: 0xc6100008  lwc1        $f16, 0x8($s0)
    ctx->pc = 0x153ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_153ab8:
    // 0x153ab8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x153ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_153abc:
    // 0x153abc: 0x3c0143cc  lui         $at, 0x43CC
    ctx->pc = 0x153abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17356 << 16));
label_153ac0:
    // 0x153ac0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x153ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_153ac4:
    // 0x153ac4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x153ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153ac8:
    // 0x153ac8: 0x3c0143d2  lui         $at, 0x43D2
    ctx->pc = 0x153ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17362 << 16));
label_153acc:
    // 0x153acc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x153accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_153ad0:
    // 0x153ad0: 0x24a585e8  addiu       $a1, $a1, -0x7A18
    ctx->pc = 0x153ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936040));
label_153ad4:
    // 0x153ad4: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x153ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
label_153ad8:
    // 0x153ad8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x153ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_153adc:
    // 0x153adc: 0x460004c6  mov.s       $f19, $f0
    ctx->pc = 0x153adcu;
    ctx->f[19] = FPU_MOV_S(ctx->f[0]);
label_153ae0:
    // 0x153ae0: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x153ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_153ae4:
    // 0x153ae4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x153ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_153ae8:
    // 0x153ae8: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x153ae8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_153aec:
    // 0x153aec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x153aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_153af0:
    // 0x153af0: 0xc06ce2a  jal         func_1B38A8
label_153af4:
    if (ctx->pc == 0x153AF4u) {
        ctx->pc = 0x153AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153AF0u;
        // 0x153af4: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x153AF8u;
        goto label_153af8;
    }
    ctx->pc = 0x153AF0u;
    SET_GPR_U32(ctx, 31, 0x153AF8u);
    ctx->pc = 0x153AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153AF0u;
    // 0x153af4: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x153AF0u, 0x153AF8u)) {
        return;
    }
    ctx->pc = 0x153AF8u;
label_153af8:
    // 0x153af8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x153af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_153afc:
    // 0x153afc: 0xc06cff8  jal         func_1B3FE0
label_153b00:
    if (ctx->pc == 0x153B00u) {
        ctx->pc = 0x153B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153AFCu;
        // 0x153b00: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153B04u;
        goto label_153b04;
    }
    ctx->pc = 0x153AFCu;
    SET_GPR_U32(ctx, 31, 0x153B04u);
    ctx->pc = 0x153B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153AFCu;
    // 0x153b00: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x153AFCu, 0x153B04u)) {
        return;
    }
    ctx->pc = 0x153B04u;
label_153b04:
    // 0x153b04: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x153b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_153b08:
    // 0x153b08: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x153b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_153b0c:
    // 0x153b0c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x153b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_153b10:
    // 0x153b10: 0x3e00008  jr          $ra
label_153b14:
    if (ctx->pc == 0x153B14u) {
        ctx->pc = 0x153B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B10u;
        // 0x153b14: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153B18u;
        goto label_fallthrough_0x153b10;
    }
    ctx->pc = 0x153B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B10u;
        // 0x153b14: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x153b10:
    ctx->pc = 0x153B18u;
}
