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

// Function: sub_0027F558
// Address: 0x27f558 - 0x27f640
void sub_0027F558_0x27f558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F558_0x27f558");
#endif

    switch (ctx->pc) {
        case 0x27f578u: goto label_27f578;
        case 0x27f5c0u: goto label_27f5c0;
        case 0x27f5ecu: goto label_27f5ec;
        case 0x27f624u: goto label_27f624;
        default: break;
    }

    ctx->pc = 0x27f558u;

    // 0x27f558: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27f558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27f55c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27f55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27f560: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x27f560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x27f564: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27f564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f568: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x27f568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x27f56c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27f56cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f574: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x27f574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_27f578:
    // 0x27f578: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27f578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f57c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27f580: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x27f580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x27f584: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x27f584u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x27f588: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x27F588u;
    {
        const bool branch_taken_0x27f588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F588u;
        // 0x27f58c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f588) {
            ctx->pc = 0x27F600u;
            goto label_27f600;
        }
    }
    ctx->pc = 0x27F590u;
    // 0x27f590: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27f590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27f594: 0x2442cc20  addiu       $v0, $v0, -0x33E0
    ctx->pc = 0x27f594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954016));
    // 0x27f598: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27f598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27f59c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27f5a0: 0x800008  jr          $a0
    ctx->pc = 0x27F5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F5A8u: goto label_27f5a8;
            case 0x27F5C8u: goto label_27f5c8;
            case 0x27F5D4u: goto label_27f5d4;
            case 0x27F5F4u: goto label_27f5f4;
            case 0x27F600u: goto label_27f600;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F5A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27F5A8u;
label_27f5a8:
    // 0x27f5a8: 0x2258021  addu        $s0, $s1, $a1
    ctx->pc = 0x27f5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x27f5ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x27f5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27f5b0: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x27F5B0u;
    {
        const bool branch_taken_0x27f5b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f5b0) {
            ctx->pc = 0x27F5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F5B0u;
            // 0x27f5b4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F5DCu;
            goto label_27f5dc;
        }
    }
    ctx->pc = 0x27F5B8u;
    // 0x27f5b8: 0xc08ab74  jal         func_22ADD0
    ctx->pc = 0x27F5B8u;
    SET_GPR_U32(ctx, 31, 0x27F5C0u);
    ctx->pc = 0x22ADD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ADD0u, 0x27F5B8u, 0x27F5C0u)) {
        return;
    }
    ctx->pc = 0x27F5C0u;
label_27f5c0:
    // 0x27f5c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27F5C0u;
    {
        const bool branch_taken_0x27f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5C0u;
        // 0x27f5c4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5c0) {
            ctx->pc = 0x27F5DCu;
            goto label_27f5dc;
        }
    }
    ctx->pc = 0x27F5C8u;
label_27f5c8:
    // 0x27f5c8: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x27f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x27f5cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27F5CCu;
    {
        const bool branch_taken_0x27f5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5CCu;
        // 0x27f5d0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5cc) {
            ctx->pc = 0x27F5DCu;
            goto label_27f5dc;
        }
    }
    ctx->pc = 0x27F5D4u;
label_27f5d4:
    // 0x27f5d4: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x27f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x27f5d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27f5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27f5dc:
    // 0x27f5dc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27F5DCu;
    {
        const bool branch_taken_0x27f5dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5DCu;
        // 0x27f5e0: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5dc) {
            ctx->pc = 0x27F604u;
            goto label_27f604;
        }
    }
    ctx->pc = 0x27F5E4u;
    // 0x27f5e4: 0xc08ab74  jal         func_22ADD0
    ctx->pc = 0x27F5E4u;
    SET_GPR_U32(ctx, 31, 0x27F5ECu);
    ctx->pc = 0x22ADD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ADD0u, 0x27F5E4u, 0x27F5ECu)) {
        return;
    }
    ctx->pc = 0x27F5ECu;
label_27f5ec:
    // 0x27f5ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27F5ECu;
    {
        const bool branch_taken_0x27f5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5ECu;
        // 0x27f5f0: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5ec) {
            ctx->pc = 0x27F604u;
            goto label_27f604;
        }
    }
    ctx->pc = 0x27F5F4u;
label_27f5f4:
    // 0x27f5f4: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x27f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x27f5f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27f5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27f5fc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x27f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_27f600:
    // 0x27f600: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x27f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_27f604:
    // 0x27f604: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x27f604u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27f608: 0x2e430002  sltiu       $v1, $s2, 0x2
    ctx->pc = 0x27f608u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x27f60c: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x27F60Cu;
    {
        const bool branch_taken_0x27f60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F60Cu;
        // 0x27f610: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f60c) {
            ctx->pc = 0x27F578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f578;
        }
    }
    ctx->pc = 0x27F614u;
    // 0x27f614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27f618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f61c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x27F61Cu;
    SET_GPR_U32(ctx, 31, 0x27F624u);
    ctx->pc = 0x27F620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F61Cu;
    // 0x27f620: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x27F61Cu, 0x27F624u)) {
        return;
    }
    ctx->pc = 0x27F624u;
label_27f624:
    // 0x27f624: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27f624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f628: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x27f628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f62c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27f62cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f630: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x27f630u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f638: 0x3e00008  jr          $ra
    ctx->pc = 0x27F638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F638u;
        // 0x27f63c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F640u;
}
