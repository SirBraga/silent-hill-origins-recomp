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

// Function: sub_00238AE0
// Address: 0x238ae0 - 0x238bd0
void sub_00238AE0_0x238ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238AE0_0x238ae0");
#endif

    switch (ctx->pc) {
        case 0x238af4u: goto label_238af4;
        case 0x238afcu: goto label_238afc;
        case 0x238b0cu: goto label_238b0c;
        case 0x238b20u: goto label_238b20;
        case 0x238b30u: goto label_238b30;
        case 0x238b54u: goto label_238b54;
        default: break;
    }

    ctx->pc = 0x238ae0u;

    // 0x238ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238ae4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x238ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x238ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238aec: 0xc091242  jal         func_244908
    ctx->pc = 0x238AECu;
    SET_GPR_U32(ctx, 31, 0x238AF4u);
    ctx->pc = 0x238AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AECu;
    // 0x238af0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x244908u, 0x238AECu, 0x238AF4u)) {
        return;
    }
    ctx->pc = 0x238AF4u;
label_238af4:
    // 0x238af4: 0xc08ed24  jal         func_23B490
    ctx->pc = 0x238AF4u;
    SET_GPR_U32(ctx, 31, 0x238AFCu);
    ctx->pc = 0x23B490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23B490u, 0x238AF4u, 0x238AFCu)) {
        return;
    }
    ctx->pc = 0x238AFCu;
label_238afc:
    // 0x238afc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238AFCu;
    {
        const bool branch_taken_0x238afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238afc) {
            ctx->pc = 0x238B10u;
            goto label_238b10;
        }
    }
    ctx->pc = 0x238B04u;
    // 0x238b04: 0xc08ea7e  jal         func_23A9F8
    ctx->pc = 0x238B04u;
    SET_GPR_U32(ctx, 31, 0x238B0Cu);
    ctx->pc = 0x23A9F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23A9F8u, 0x238B04u, 0x238B0Cu)) {
        return;
    }
    ctx->pc = 0x238B0Cu;
label_238b0c:
    // 0x238b0c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x238b0cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_238b10:
    // 0x238b10: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238B10u;
    {
        const bool branch_taken_0x238b10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x238B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B10u;
        // 0x238b14: 0x3c040024  lui         $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b10) {
            ctx->pc = 0x238B28u;
            goto label_238b28;
        }
    }
    ctx->pc = 0x238B18u;
    // 0x238b18: 0xc091256  jal         func_244958
    ctx->pc = 0x238B18u;
    SET_GPR_U32(ctx, 31, 0x238B20u);
    ctx->pc = 0x244958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x244958u, 0x238B18u, 0x238B20u)) {
        return;
    }
    ctx->pc = 0x238B20u;
label_238b20:
    // 0x238b20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x238B20u;
    {
        const bool branch_taken_0x238b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B20u;
        // 0x238b24: 0x3c050073  lui         $a1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b20) {
            ctx->pc = 0x238B58u;
            goto label_238b58;
        }
    }
    ctx->pc = 0x238B28u;
label_238b28:
    // 0x238b28: 0xc092c2e  jal         func_24B0B8
    ctx->pc = 0x238B28u;
    SET_GPR_U32(ctx, 31, 0x238B30u);
    ctx->pc = 0x238B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B28u;
    // 0x238b2c: 0x2484b248  addiu       $a0, $a0, -0x4DB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B0B8u, 0x238B28u, 0x238B30u)) {
        return;
    }
    ctx->pc = 0x238B30u;
label_238b30:
    // 0x238b30: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x238b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x238b34: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x238b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x238b38: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x238b38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x238b3c: 0x3c070024  lui         $a3, 0x24
    ctx->pc = 0x238b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)36 << 16));
    // 0x238b40: 0x2484b2c0  addiu       $a0, $a0, -0x4D40
    ctx->pc = 0x238b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947520));
    // 0x238b44: 0x24a5b320  addiu       $a1, $a1, -0x4CE0
    ctx->pc = 0x238b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947616));
    // 0x238b48: 0x24c6b3b0  addiu       $a2, $a2, -0x4C50
    ctx->pc = 0x238b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947760));
    // 0x238b4c: 0xc093a50  jal         func_24E940
    ctx->pc = 0x238B4Cu;
    SET_GPR_U32(ctx, 31, 0x238B54u);
    ctx->pc = 0x238B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238B4Cu;
    // 0x238b50: 0x24e7b408  addiu       $a3, $a3, -0x4BF8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E940u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E940u, 0x238B4Cu, 0x238B54u)) {
        return;
    }
    ctx->pc = 0x238B54u;
label_238b54:
    // 0x238b54: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x238b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
label_238b58:
    // 0x238b58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238b5c: 0x24a25580  addiu       $v0, $a1, 0x5580
    ctx->pc = 0x238b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 21888));
    // 0x238b60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238b64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x238b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x238b68: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x238b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x238b6c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x238b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x238b70: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x238b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x238b74: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x238b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x238b78: 0xe4a15580  swc1        $f1, 0x5580($a1)
    ctx->pc = 0x238b78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 21888), bits); }
    // 0x238b7c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x238b7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x238b80: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x238b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x238b84: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x238b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x238b88: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x238b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x238b8c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x238b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x238b90: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x238b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x238b94: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x238b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x238b98: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x238b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x238b9c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x238b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x238ba0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x238ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x238ba4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x238ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x238ba8: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x238ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x238bac: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x238bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x238bb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x238bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238bb4: 0x3463dead  ori         $v1, $v1, 0xDEAD
    ctx->pc = 0x238bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57005);
    // 0x238bb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x238bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238bbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238bc0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x238bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x238bc4: 0xac234174  sw          $v1, 0x4174($at)
    ctx->pc = 0x238bc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B4174u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4174u, _value); } while (0);
    // 0x238bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x238BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BC8u;
        // 0x238bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238BD0u;
}
