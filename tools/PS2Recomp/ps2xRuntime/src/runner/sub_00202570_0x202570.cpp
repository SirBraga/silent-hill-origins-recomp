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

// Function: sub_00202570
// Address: 0x202570 - 0x202630
void sub_00202570_0x202570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202570_0x202570");
#endif

    switch (ctx->pc) {
        case 0x2025a4u: goto label_2025a4;
        case 0x2025d0u: goto label_2025d0;
        case 0x2025e4u: goto label_2025e4;
        case 0x2025ecu: goto label_2025ec;
        case 0x2025f4u: goto label_2025f4;
        case 0x202618u: goto label_202618;
        default: break;
    }

    ctx->pc = 0x202570u;

    // 0x202570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x202574: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x202574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x202578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20257c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20257cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202580: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x202580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x202584: 0x8c440270  lw          $a0, 0x270($v0)
    ctx->pc = 0x202584u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C0270u));
    // 0x202588: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x202588u;
    {
        const bool branch_taken_0x202588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202588u;
        // 0x20258c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202588) {
            ctx->pc = 0x2025B0u;
            goto label_2025b0;
        }
    }
    ctx->pc = 0x202590u;
    // 0x202590: 0x2e220041  sltiu       $v0, $s1, 0x41
    ctx->pc = 0x202590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x202594: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x202594u;
    {
        const bool branch_taken_0x202594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202594u;
        // 0x202598: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202594) {
            ctx->pc = 0x2025B4u;
            goto label_2025b4;
        }
    }
    ctx->pc = 0x20259Cu;
    // 0x20259c: 0xc080aac  jal         func_202AB0
    ctx->pc = 0x20259Cu;
    SET_GPR_U32(ctx, 31, 0x2025A4u);
    ctx->pc = 0x2025A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20259Cu;
    // 0x2025a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202AB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202AB0u, 0x20259Cu, 0x2025A4u)) {
        return;
    }
    ctx->pc = 0x2025A4u;
label_2025a4:
    // 0x2025a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2025a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2025a8: 0x1600001c  bnez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2025A8u;
    {
        const bool branch_taken_0x2025a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2025ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025A8u;
        // 0x2025ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025a8) {
            ctx->pc = 0x20261Cu;
            goto label_20261c;
        }
    }
    ctx->pc = 0x2025B0u;
label_2025b0:
    // 0x2025b0: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2025b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_2025b4:
    // 0x2025b4: 0x8c440274  lw          $a0, 0x274($v0)
    ctx->pc = 0x2025b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x2025b8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2025B8u;
    {
        const bool branch_taken_0x2025b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025B8u;
        // 0x2025bc: 0x2e220401  sltiu       $v0, $s1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025b8) {
            ctx->pc = 0x2025DCu;
            goto label_2025dc;
        }
    }
    ctx->pc = 0x2025C0u;
    // 0x2025c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2025C0u;
    {
        const bool branch_taken_0x2025c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2025c0) {
            ctx->pc = 0x2025DCu;
            goto label_2025dc;
        }
    }
    ctx->pc = 0x2025C8u;
    // 0x2025c8: 0xc080b60  jal         func_202D80
    ctx->pc = 0x2025C8u;
    SET_GPR_U32(ctx, 31, 0x2025D0u);
    ctx->pc = 0x2025CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2025C8u;
    // 0x2025cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202D80u, 0x2025C8u, 0x2025D0u)) {
        return;
    }
    ctx->pc = 0x2025D0u;
label_2025d0:
    // 0x2025d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2025d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2025d4: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2025D4u;
    {
        const bool branch_taken_0x2025d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2025D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025D4u;
        // 0x2025d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025d4) {
            ctx->pc = 0x20261Cu;
            goto label_20261c;
        }
    }
    ctx->pc = 0x2025DCu;
label_2025dc:
    // 0x2025dc: 0xc0807e4  jal         func_201F90
    ctx->pc = 0x2025DCu;
    SET_GPR_U32(ctx, 31, 0x2025E4u);
    ctx->pc = 0x201F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201F90u, 0x2025DCu, 0x2025E4u)) {
        return;
    }
    ctx->pc = 0x2025E4u;
label_2025e4:
    // 0x2025e4: 0xc08083a  jal         func_2020E8
    ctx->pc = 0x2025E4u;
    SET_GPR_U32(ctx, 31, 0x2025ECu);
    ctx->pc = 0x2020E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2020E8u, 0x2025E4u, 0x2025ECu)) {
        return;
    }
    ctx->pc = 0x2025ECu;
label_2025ec:
    // 0x2025ec: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x2025ECu;
    SET_GPR_U32(ctx, 31, 0x2025F4u);
    ctx->pc = 0x2025F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2025ECu;
    // 0x2025f0: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x2025ECu, 0x2025F4u)) {
        return;
    }
    ctx->pc = 0x2025F4u;
label_2025f4:
    // 0x2025f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2025f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2025f8: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2025F8u;
    {
        const bool branch_taken_0x2025f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2025FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025F8u;
        // 0x2025fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025f8) {
            ctx->pc = 0x20261Cu;
            goto label_20261c;
        }
    }
    ctx->pc = 0x202600u;
    // 0x202600: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x202600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x202604: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202608: 0x24843c18  addiu       $a0, $a0, 0x3C18
    ctx->pc = 0x202608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15384));
    // 0x20260c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x20260cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x202610: 0xc0c4f0a  jal         func_313C28
    ctx->pc = 0x202610u;
    SET_GPR_U32(ctx, 31, 0x202618u);
    ctx->pc = 0x202614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202610u;
    // 0x202614: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313C28u, 0x202610u, 0x202618u)) {
        return;
    }
    ctx->pc = 0x202618u;
label_202618:
    // 0x202618: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x202618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20261c:
    // 0x20261c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20261cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202620: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x202620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202628: 0x3e00008  jr          $ra
    ctx->pc = 0x202628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202628u;
        // 0x20262c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202630u;
}
