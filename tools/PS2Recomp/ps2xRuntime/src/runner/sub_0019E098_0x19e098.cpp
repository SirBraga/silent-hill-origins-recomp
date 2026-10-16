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

// Function: sub_0019E098
// Address: 0x19e098 - 0x19e120
void sub_0019E098_0x19e098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E098_0x19e098");
#endif

    switch (ctx->pc) {
        case 0x19e098u: goto label_19e098;
        case 0x19e09cu: goto label_19e09c;
        case 0x19e0a0u: goto label_19e0a0;
        case 0x19e0a4u: goto label_19e0a4;
        case 0x19e0a8u: goto label_19e0a8;
        case 0x19e0acu: goto label_19e0ac;
        case 0x19e0b0u: goto label_19e0b0;
        case 0x19e0b4u: goto label_19e0b4;
        case 0x19e0b8u: goto label_19e0b8;
        case 0x19e0bcu: goto label_19e0bc;
        case 0x19e0c0u: goto label_19e0c0;
        case 0x19e0c4u: goto label_19e0c4;
        case 0x19e0c8u: goto label_19e0c8;
        case 0x19e0ccu: goto label_19e0cc;
        case 0x19e0d0u: goto label_19e0d0;
        case 0x19e0d4u: goto label_19e0d4;
        case 0x19e0d8u: goto label_19e0d8;
        case 0x19e0dcu: goto label_19e0dc;
        case 0x19e0e0u: goto label_19e0e0;
        case 0x19e0e4u: goto label_19e0e4;
        case 0x19e0e8u: goto label_19e0e8;
        case 0x19e0ecu: goto label_19e0ec;
        case 0x19e0f0u: goto label_19e0f0;
        case 0x19e0f4u: goto label_19e0f4;
        case 0x19e0f8u: goto label_19e0f8;
        case 0x19e0fcu: goto label_19e0fc;
        case 0x19e100u: goto label_19e100;
        case 0x19e104u: goto label_19e104;
        case 0x19e108u: goto label_19e108;
        case 0x19e10cu: goto label_19e10c;
        case 0x19e110u: goto label_19e110;
        case 0x19e114u: goto label_19e114;
        case 0x19e118u: goto label_19e118;
        case 0x19e11cu: goto label_19e11c;
        default: break;
    }

    ctx->pc = 0x19e098u;

label_19e098:
    // 0x19e098: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19e09c:
    // 0x19e09c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_19e0a0:
    // 0x19e0a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19e0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_19e0a4:
    // 0x19e0a4: 0x2442aab8  addiu       $v0, $v0, -0x5548
    ctx->pc = 0x19e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945464));
label_19e0a8:
    // 0x19e0a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19e0ac:
    // 0x19e0ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e0b0:
    // 0x19e0b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19e0b4:
    // 0x19e0b4: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x19e0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
label_19e0b8:
    // 0x19e0b8: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x19e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_19e0bc:
    // 0x19e0bc: 0x8e060038  lw          $a2, 0x38($s0)
    ctx->pc = 0x19e0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_19e0c0:
    // 0x19e0c0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x19e0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19e0c4:
    // 0x19e0c4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x19e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_19e0c8:
    // 0x19e0c8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x19e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_19e0cc:
    // 0x19e0cc: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x19e0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_19e0d0:
    // 0x19e0d0: 0x8ce30160  lw          $v1, 0x160($a3)
    ctx->pc = 0x19e0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
label_19e0d4:
    // 0x19e0d4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19e0d8:
    // 0x19e0d8: 0xace30160  sw          $v1, 0x160($a3)
    ctx->pc = 0x19e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 352), GPR_U32(ctx, 3));
label_19e0dc:
    // 0x19e0dc: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x19e0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19e0e0:
    // 0x19e0e0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_19e0e4:
    if (ctx->pc == 0x19E0E4u) {
        ctx->pc = 0x19E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0E0u;
        // 0x19e0e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E0E8u;
        goto label_19e0e8;
    }
    ctx->pc = 0x19E0E0u;
    {
        const bool branch_taken_0x19e0e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0E0u;
        // 0x19e0e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e0e0) {
            ctx->pc = 0x19E100u;
            goto label_19e100;
        }
    }
    ctx->pc = 0x19E0E8u;
label_19e0e8:
    // 0x19e0e8: 0x8cc20298  lw          $v0, 0x298($a2)
    ctx->pc = 0x19e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 664)));
label_19e0ec:
    // 0x19e0ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x19e0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19e0f0:
    // 0x19e0f0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x19e0f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_19e0f4:
    // 0x19e0f4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x19e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_19e0f8:
    // 0x19e0f8: 0x60f809  jalr        $v1
label_19e0fc:
    if (ctx->pc == 0x19E0FCu) {
        ctx->pc = 0x19E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0F8u;
        // 0x19e0fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E100u;
        goto label_19e100;
    }
    ctx->pc = 0x19E0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19E100u);
        ctx->pc = 0x19E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0F8u;
        // 0x19e0fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E0F8u, 0x19E100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E100u;
label_19e100:
    // 0x19e100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e104:
    // 0x19e104: 0xc080596  jal         func_201658
label_19e108:
    if (ctx->pc == 0x19E108u) {
        ctx->pc = 0x19E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E104u;
        // 0x19e108: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E10Cu;
        goto label_19e10c;
    }
    ctx->pc = 0x19E104u;
    SET_GPR_U32(ctx, 31, 0x19E10Cu);
    ctx->pc = 0x19E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E104u;
    // 0x19e108: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201658u, 0x19E104u, 0x19E10Cu)) {
        return;
    }
    ctx->pc = 0x19E10Cu;
label_19e10c:
    // 0x19e10c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19e10cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19e110:
    // 0x19e110: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19e114:
    // 0x19e114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19e118:
    // 0x19e118: 0x3e00008  jr          $ra
label_19e11c:
    if (ctx->pc == 0x19E11Cu) {
        ctx->pc = 0x19E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E118u;
        // 0x19e11c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E120u;
        goto label_fallthrough_0x19e118;
    }
    ctx->pc = 0x19E118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E118u;
        // 0x19e11c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19e118:
    ctx->pc = 0x19E120u;
}
