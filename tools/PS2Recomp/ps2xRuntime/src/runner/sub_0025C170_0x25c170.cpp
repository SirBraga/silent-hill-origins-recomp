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

// Function: sub_0025C170
// Address: 0x25c170 - 0x25c1f8
void sub_0025C170_0x25c170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C170_0x25c170");
#endif

    switch (ctx->pc) {
        case 0x25c170u: goto label_25c170;
        case 0x25c174u: goto label_25c174;
        case 0x25c178u: goto label_25c178;
        case 0x25c17cu: goto label_25c17c;
        case 0x25c180u: goto label_25c180;
        case 0x25c184u: goto label_25c184;
        case 0x25c188u: goto label_25c188;
        case 0x25c18cu: goto label_25c18c;
        case 0x25c190u: goto label_25c190;
        case 0x25c194u: goto label_25c194;
        case 0x25c198u: goto label_25c198;
        case 0x25c19cu: goto label_25c19c;
        case 0x25c1a0u: goto label_25c1a0;
        case 0x25c1a4u: goto label_25c1a4;
        case 0x25c1a8u: goto label_25c1a8;
        case 0x25c1acu: goto label_25c1ac;
        case 0x25c1b0u: goto label_25c1b0;
        case 0x25c1b4u: goto label_25c1b4;
        case 0x25c1b8u: goto label_25c1b8;
        case 0x25c1bcu: goto label_25c1bc;
        case 0x25c1c0u: goto label_25c1c0;
        case 0x25c1c4u: goto label_25c1c4;
        case 0x25c1c8u: goto label_25c1c8;
        case 0x25c1ccu: goto label_25c1cc;
        case 0x25c1d0u: goto label_25c1d0;
        case 0x25c1d4u: goto label_25c1d4;
        case 0x25c1d8u: goto label_25c1d8;
        case 0x25c1dcu: goto label_25c1dc;
        case 0x25c1e0u: goto label_25c1e0;
        case 0x25c1e4u: goto label_25c1e4;
        case 0x25c1e8u: goto label_25c1e8;
        case 0x25c1ecu: goto label_25c1ec;
        case 0x25c1f0u: goto label_25c1f0;
        case 0x25c1f4u: goto label_25c1f4;
        default: break;
    }

    ctx->pc = 0x25c170u;

label_25c170:
    // 0x25c170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25c170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25c174:
    // 0x25c174: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25c174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_25c178:
    // 0x25c178: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25c178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_25c17c:
    // 0x25c17c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25c17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25c180:
    // 0x25c180: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x25c180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_25c184:
    // 0x25c184: 0x26320040  addiu       $s2, $s1, 0x40
    ctx->pc = 0x25c184u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_25c188:
    // 0x25c188: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x25c188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_25c18c:
    // 0x25c18c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25c18cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_25c190:
    // 0x25c190: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x25c190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_25c194:
    // 0x25c194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25c198:
    // 0x25c198: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x25c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_25c19c:
    // 0x25c19c: 0x1052000b  beq         $v0, $s2, . + 4 + (0xB << 2)
label_25c1a0:
    if (ctx->pc == 0x25C1A0u) {
        ctx->pc = 0x25C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C19Cu;
        // 0x25c1a0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C1A4u;
        goto label_25c1a4;
    }
    ctx->pc = 0x25C19Cu;
    {
        const bool branch_taken_0x25c19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x25C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C19Cu;
        // 0x25c1a0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c19c) {
            ctx->pc = 0x25C1CCu;
            goto label_25c1cc;
        }
    }
    ctx->pc = 0x25C1A4u;
label_25c1a4:
    // 0x25c1a4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x25c1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25c1a8:
    // 0x25c1a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_25c1ac:
    if (ctx->pc == 0x25C1ACu) {
        ctx->pc = 0x25C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1A8u;
        // 0x25c1ac: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C1B0u;
        goto label_25c1b0;
    }
    ctx->pc = 0x25C1A8u;
    {
        const bool branch_taken_0x25c1a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1A8u;
        // 0x25c1ac: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c1a8) {
            ctx->pc = 0x25C1C0u;
            goto label_25c1c0;
        }
    }
    ctx->pc = 0x25C1B0u;
label_25c1b0:
    // 0x25c1b0: 0x280f809  jalr        $s4
label_25c1b4:
    if (ctx->pc == 0x25C1B4u) {
        ctx->pc = 0x25C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1B0u;
        // 0x25c1b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C1B8u;
        goto label_25c1b8;
    }
    ctx->pc = 0x25C1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x25C1B8u);
        ctx->pc = 0x25C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1B0u;
        // 0x25c1b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C1B0u, 0x25C1B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C1B8u;
label_25c1b8:
    // 0x25c1b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25c1bc:
    if (ctx->pc == 0x25C1BCu) {
        ctx->pc = 0x25C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1B8u;
        // 0x25c1bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C1C0u;
        goto label_25c1c0;
    }
    ctx->pc = 0x25C1B8u;
    {
        const bool branch_taken_0x25c1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1B8u;
        // 0x25c1bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c1b8) {
            ctx->pc = 0x25C1D0u;
            goto label_25c1d0;
        }
    }
    ctx->pc = 0x25C1C0u;
label_25c1c0:
    // 0x25c1c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25c1c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c1c4:
    // 0x25c1c4: 0x5452fff8  bnel        $v0, $s2, . + 4 + (-0x8 << 2)
label_25c1c8:
    if (ctx->pc == 0x25C1C8u) {
        ctx->pc = 0x25C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1C4u;
        // 0x25c1c8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C1CCu;
        goto label_25c1cc;
    }
    ctx->pc = 0x25C1C4u;
    {
        const bool branch_taken_0x25c1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x25c1c4) {
            ctx->pc = 0x25C1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C1C4u;
            // 0x25c1c8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c1a8;
        }
    }
    ctx->pc = 0x25C1CCu;
label_25c1cc:
    // 0x25c1cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25c1ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25c1d0:
    // 0x25c1d0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x25c1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25c1d4:
    // 0x25c1d4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25c1d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25c1d8:
    // 0x25c1d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25c1d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25c1dc:
    // 0x25c1dc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x25c1dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25c1e0:
    // 0x25c1e0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x25c1e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25c1e4:
    // 0x25c1e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25c1e8:
    // 0x25c1e8: 0x3e00008  jr          $ra
label_25c1ec:
    if (ctx->pc == 0x25C1ECu) {
        ctx->pc = 0x25C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1E8u;
        // 0x25c1ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C1F0u;
        goto label_25c1f0;
    }
    ctx->pc = 0x25C1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1E8u;
        // 0x25c1ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C1F0u;
label_25c1f0:
    // 0x25c1f0: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x25c1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_25c1f4:
    // 0x25c1f4: 0x0  nop
    ctx->pc = 0x25c1f4u;
    // NOP
    ctx->pc = 0x25c1f8u;
}
