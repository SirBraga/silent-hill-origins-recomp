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

// Function: sub_00326FF0
// Address: 0x326ff0 - 0x3270f0
void sub_00326FF0_0x326ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326FF0_0x326ff0");
#endif

    switch (ctx->pc) {
        case 0x327030u: goto label_327030;
        case 0x32703cu: goto label_32703c;
        case 0x32704cu: goto label_32704c;
        case 0x327060u: goto label_327060;
        case 0x327078u: goto label_327078;
        case 0x32708cu: goto label_32708c;
        case 0x3270a8u: goto label_3270a8;
        default: break;
    }

    ctx->pc = 0x326ff0u;

    // 0x326ff0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x326ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x326ff4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x326ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x326ff8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x326ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x326ffc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x326ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x327000: 0x3c150032  lui         $s5, 0x32
    ctx->pc = 0x327000u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)50 << 16));
    // 0x327004: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x327004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x327008: 0x3c140032  lui         $s4, 0x32
    ctx->pc = 0x327008u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)50 << 16));
    // 0x32700c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x32700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x327010: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x327010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x327014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327018: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x327018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x32701c: 0x24507608  addiu       $s0, $v0, 0x7608
    ctx->pc = 0x32701cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30216));
    // 0x327020: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x327020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x327024: 0x8c447608  lw          $a0, 0x7608($v0)
    ctx->pc = 0x327024u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x687608u));
    // 0x327028: 0xc0c9c3c  jal         func_3270F0
    ctx->pc = 0x327028u;
    SET_GPR_U32(ctx, 31, 0x327030u);
    ctx->pc = 0x32702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327028u;
    // 0x32702c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3270F0u, 0x327028u, 0x327030u)) {
        return;
    }
    ctx->pc = 0x327030u;
label_327030:
    // 0x327030: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x327030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x327034: 0xc0c9c3c  jal         func_3270F0
    ctx->pc = 0x327034u;
    SET_GPR_U32(ctx, 31, 0x32703Cu);
    ctx->pc = 0x327038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327034u;
    // 0x327038: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3270F0u, 0x327034u, 0x32703Cu)) {
        return;
    }
    ctx->pc = 0x32703Cu;
label_32703c:
    // 0x32703c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x32703cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x327040: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x327040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x327044: 0xc0c9bf6  jal         func_326FD8
    ctx->pc = 0x327044u;
    SET_GPR_U32(ctx, 31, 0x32704Cu);
    ctx->pc = 0x327048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327044u;
    // 0x327048: 0x26a66f98  addiu       $a2, $s5, 0x6F98 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 28568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326FD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326FD8u, 0x327044u, 0x32704Cu)) {
        return;
    }
    ctx->pc = 0x32704Cu;
label_32704c:
    // 0x32704c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32704cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327050: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x327050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x327054: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x327054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x327058: 0xc0c9bf6  jal         func_326FD8
    ctx->pc = 0x327058u;
    SET_GPR_U32(ctx, 31, 0x327060u);
    ctx->pc = 0x32705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327058u;
    // 0x32705c: 0x26866f60  addiu       $a2, $s4, 0x6F60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 28512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326FD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326FD8u, 0x327058u, 0x327060u)) {
        return;
    }
    ctx->pc = 0x327060u;
label_327060:
    // 0x327060: 0x2671fdf4  addiu       $s1, $s3, -0x20C
    ctx->pc = 0x327060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
    // 0x327064: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x327064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327068: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x327068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    // 0x32706c: 0x12300014  beq         $s1, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x32706Cu;
    {
        const bool branch_taken_0x32706c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x327070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32706Cu;
        // 0x327070: 0x3c160068  lui         $s6, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32706c) {
            ctx->pc = 0x3270C0u;
            goto label_3270c0;
        }
    }
    ctx->pc = 0x327074u;
    // 0x327074: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x327074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_327078:
    // 0x327078: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x327078u;
    {
        const bool branch_taken_0x327078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327078u;
        // 0x32707c: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327078) {
            ctx->pc = 0x327098u;
            goto label_327098;
        }
    }
    ctx->pc = 0x327080u;
    // 0x327080: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x327080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x327084: 0xc0c9bf6  jal         func_326FD8
    ctx->pc = 0x327084u;
    SET_GPR_U32(ctx, 31, 0x32708Cu);
    ctx->pc = 0x327088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327084u;
    // 0x327088: 0x26a66f98  addiu       $a2, $s5, 0x6F98 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 28568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326FD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326FD8u, 0x327084u, 0x32708Cu)) {
        return;
    }
    ctx->pc = 0x32708Cu;
label_32708c:
    // 0x32708c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32708cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327090: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x327090u;
    {
        const bool branch_taken_0x327090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327090u;
        // 0x327094: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327090) {
            ctx->pc = 0x3270B0u;
            goto label_3270b0;
        }
    }
    ctx->pc = 0x327098u;
label_327098:
    // 0x327098: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x327098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x32709c: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x32709cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x3270a0: 0xc0c9bf6  jal         func_326FD8
    ctx->pc = 0x3270A0u;
    SET_GPR_U32(ctx, 31, 0x3270A8u);
    ctx->pc = 0x3270A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3270A0u;
    // 0x3270a4: 0x26866f60  addiu       $a2, $s4, 0x6F60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 28512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326FD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326FD8u, 0x3270A0u, 0x3270A8u)) {
        return;
    }
    ctx->pc = 0x3270A8u;
label_3270a8:
    // 0x3270a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3270a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3270ac: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x3270acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
label_3270b0:
    // 0x3270b0: 0x1630fff1  bne         $s1, $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3270B0u;
    {
        const bool branch_taken_0x3270b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x3270B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270B0u;
        // 0x3270b4: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3270b0) {
            ctx->pc = 0x327078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327078;
        }
    }
    ctx->pc = 0x3270B8u;
    // 0x3270b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3270B8u;
    {
        const bool branch_taken_0x3270b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3270BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270B8u;
        // 0x3270bc: 0xaed17600  sw          $s1, 0x7600($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 30208), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3270b8) {
            ctx->pc = 0x3270C4u;
            goto label_3270c4;
        }
    }
    ctx->pc = 0x3270C0u;
label_3270c0:
    // 0x3270c0: 0xaed17600  sw          $s1, 0x7600($s6)
    ctx->pc = 0x3270c0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 30208), GPR_U32(ctx, 17));
label_3270c4:
    // 0x3270c4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3270c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3270c8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3270c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3270cc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3270ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3270d0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3270d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3270d4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3270d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3270d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3270d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3270dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3270dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3270e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3270e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3270e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3270E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3270E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270E4u;
        // 0x3270e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3270E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3270ECu;
    // 0x3270ec: 0x0  nop
    ctx->pc = 0x3270ecu;
    // NOP
    ctx->pc = 0x3270f0u;
}
