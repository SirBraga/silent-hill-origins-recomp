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

// Function: sub_0012C028
// Address: 0x12c028 - 0x12c0c0
void sub_0012C028_0x12c028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C028_0x12c028");
#endif

    switch (ctx->pc) {
        case 0x12c028u: goto label_12c028;
        case 0x12c02cu: goto label_12c02c;
        case 0x12c030u: goto label_12c030;
        case 0x12c034u: goto label_12c034;
        case 0x12c038u: goto label_12c038;
        case 0x12c03cu: goto label_12c03c;
        case 0x12c040u: goto label_12c040;
        case 0x12c044u: goto label_12c044;
        case 0x12c048u: goto label_12c048;
        case 0x12c04cu: goto label_12c04c;
        case 0x12c050u: goto label_12c050;
        case 0x12c054u: goto label_12c054;
        case 0x12c058u: goto label_12c058;
        case 0x12c05cu: goto label_12c05c;
        case 0x12c060u: goto label_12c060;
        case 0x12c064u: goto label_12c064;
        case 0x12c068u: goto label_12c068;
        case 0x12c06cu: goto label_12c06c;
        case 0x12c070u: goto label_12c070;
        case 0x12c074u: goto label_12c074;
        case 0x12c078u: goto label_12c078;
        case 0x12c07cu: goto label_12c07c;
        case 0x12c080u: goto label_12c080;
        case 0x12c084u: goto label_12c084;
        case 0x12c088u: goto label_12c088;
        case 0x12c08cu: goto label_12c08c;
        case 0x12c090u: goto label_12c090;
        case 0x12c094u: goto label_12c094;
        case 0x12c098u: goto label_12c098;
        case 0x12c09cu: goto label_12c09c;
        case 0x12c0a0u: goto label_12c0a0;
        case 0x12c0a4u: goto label_12c0a4;
        case 0x12c0a8u: goto label_12c0a8;
        case 0x12c0acu: goto label_12c0ac;
        case 0x12c0b0u: goto label_12c0b0;
        case 0x12c0b4u: goto label_12c0b4;
        case 0x12c0b8u: goto label_12c0b8;
        case 0x12c0bcu: goto label_12c0bc;
        default: break;
    }

    ctx->pc = 0x12c028u;

label_12c028:
    // 0x12c028: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12c028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_12c02c:
    // 0x12c02c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x12c02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_12c030:
    // 0x12c030: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x12c030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_12c034:
    // 0x12c034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12c038:
    // 0x12c038: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12c038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_12c03c:
    // 0x12c03c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x12c03cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_12c040:
    // 0x12c040: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x12c040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_12c044:
    // 0x12c044: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x12c044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12c048:
    // 0x12c048: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x12c048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_12c04c:
    // 0x12c04c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12c04cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12c050:
    // 0x12c050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12c050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12c054:
    // 0x12c054: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12c054u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12c058:
    // 0x12c058: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x12c058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_12c05c:
    // 0x12c05c: 0x26050084  addiu       $a1, $s0, 0x84
    ctx->pc = 0x12c05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_12c060:
    // 0x12c060: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x12c060u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_12c064:
    // 0x12c064: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x12c064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_12c068:
    // 0x12c068: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x12c068u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_12c06c:
    // 0x12c06c: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x12c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_12c070:
    // 0x12c070: 0x40f809  jalr        $v0
label_12c074:
    if (ctx->pc == 0x12C074u) {
        ctx->pc = 0x12C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C070u;
        // 0x12c074: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C078u;
        goto label_12c078;
    }
    ctx->pc = 0x12C070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12C078u);
        ctx->pc = 0x12C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C070u;
        // 0x12c074: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C070u, 0x12C078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12C078u;
label_12c078:
    // 0x12c078: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x12c078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c07c:
    // 0x12c07c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x12c07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_12c080:
    // 0x12c080: 0x222400a  movz        $t0, $s1, $v0
    ctx->pc = 0x12c080u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17));
label_12c084:
    // 0x12c084: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12c084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12c088:
    // 0x12c088: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12c088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12c08c:
    // 0x12c08c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12c08cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_12c090:
    // 0x12c090: 0xc048fc0  jal         func_123F00
label_12c094:
    if (ctx->pc == 0x12C094u) {
        ctx->pc = 0x12C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C090u;
        // 0x12c094: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C098u;
        goto label_12c098;
    }
    ctx->pc = 0x12C090u;
    SET_GPR_U32(ctx, 31, 0x12C098u);
    ctx->pc = 0x12C094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C090u;
    // 0x12c094: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123F00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x123F00u, 0x12C090u, 0x12C098u)) {
        return;
    }
    ctx->pc = 0x12C098u;
label_12c098:
    // 0x12c098: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x12c098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12c09c:
    // 0x12c09c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x12c09cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12c0a0:
    // 0x12c0a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12c0a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12c0a4:
    // 0x12c0a4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x12c0a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12c0a8:
    // 0x12c0a8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x12c0a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12c0ac:
    // 0x12c0ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12c0b0:
    // 0x12c0b0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x12c0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12c0b4:
    // 0x12c0b4: 0x3e00008  jr          $ra
label_12c0b8:
    if (ctx->pc == 0x12C0B8u) {
        ctx->pc = 0x12C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0B4u;
        // 0x12c0b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12C0BCu;
        goto label_12c0bc;
    }
    ctx->pc = 0x12C0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0B4u;
        // 0x12c0b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C0BCu;
label_12c0bc:
    // 0x12c0bc: 0x0  nop
    ctx->pc = 0x12c0bcu;
    // NOP
    ctx->pc = 0x12c0c0u;
}
