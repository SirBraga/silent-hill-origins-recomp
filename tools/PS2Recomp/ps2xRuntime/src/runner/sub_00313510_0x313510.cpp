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

// Function: sub_00313510
// Address: 0x313510 - 0x313628
void sub_00313510_0x313510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313510_0x313510");
#endif

    switch (ctx->pc) {
        case 0x313550u: goto label_313550;
        case 0x313590u: goto label_313590;
        case 0x3135a0u: goto label_3135a0;
        case 0x3135b8u: goto label_3135b8;
        case 0x3135e0u: goto label_3135e0;
        default: break;
    }

    ctx->pc = 0x313510u;

    // 0x313510: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x313510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x313514: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x313514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x313518: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x313518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x31351c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x31351cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313520: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x313520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x313524: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x313524u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313528: 0x2d49818  mult        $s3, $s6, $s4
    ctx->pc = 0x313528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x31352c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x31352cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x313530: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x313530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x313534: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x313534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313538: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x313538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x31353c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x31353cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x313540: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x313540u;
    {
        const bool branch_taken_0x313540 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x313544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313540u;
        // 0x313544: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313540) {
            ctx->pc = 0x313568u;
            goto label_313568;
        }
    }
    ctx->pc = 0x313548u;
    // 0x313548: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x313548u;
    {
        const bool branch_taken_0x313548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313548u;
        // 0x31354c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313548) {
            ctx->pc = 0x3135FCu;
            goto label_3135fc;
        }
    }
    ctx->pc = 0x313550u;
label_313550:
    // 0x313550: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x313550u;
    {
        const bool branch_taken_0x313550 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x313550) {
            ctx->pc = 0x313554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313550u;
            // 0x313554: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x313558u;
            goto label_313558;
        }
    }
    ctx->pc = 0x313558u;
label_313558:
    // 0x313558: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x313558u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x31355c: 0x1012  mflo        $v0
    ctx->pc = 0x31355cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x313560: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x313560u;
    {
        const bool branch_taken_0x313560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313560u;
        // 0x313564: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313560) {
            ctx->pc = 0x313600u;
            goto label_313600;
        }
    }
    ctx->pc = 0x313568u;
label_313568:
    // 0x313568: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x313568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31356c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x31356Cu;
    {
        const bool branch_taken_0x31356c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x31356c) {
            ctx->pc = 0x313570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31356Cu;
            // 0x313570: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313574u;
            goto label_313574;
        }
    }
    ctx->pc = 0x313574u;
label_313574:
    // 0x313574: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x313574u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x313578: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x313578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31357c: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x31357cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x313580: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x313580u;
    {
        const bool branch_taken_0x313580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313580u;
        // 0x313584: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313580) {
            ctx->pc = 0x3135D0u;
            goto label_3135d0;
        }
    }
    ctx->pc = 0x313588u;
    // 0x313588: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x313588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31358c: 0x0  nop
    ctx->pc = 0x31358cu;
    // NOP
label_313590:
    // 0x313590: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x313590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313594: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x313594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313598: 0xc0c4d38  jal         func_3134E0
    ctx->pc = 0x313598u;
    SET_GPR_U32(ctx, 31, 0x3135A0u);
    ctx->pc = 0x31359Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313598u;
    // 0x31359c: 0x2709823  subu        $s3, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3134E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3134E0u, 0x313598u, 0x3135A0u)) {
        return;
    }
    ctx->pc = 0x3135A0u;
label_3135a0:
    // 0x3135a0: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x3135a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x3135a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3135a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3135a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3135a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3135ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3135acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3135b0: 0xc0c4f2e  jal         func_313CB8
    ctx->pc = 0x3135B0u;
    SET_GPR_U32(ctx, 31, 0x3135B8u);
    ctx->pc = 0x3135B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3135B0u;
    // 0x3135b4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313CB8u, 0x3135B0u, 0x3135B8u)) {
        return;
    }
    ctx->pc = 0x3135B8u;
label_3135b8:
    // 0x3135b8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x3135B8u;
    {
        const bool branch_taken_0x3135b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3135BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3135B8u;
        // 0x3135bc: 0x2b31023  subu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3135b8) {
            ctx->pc = 0x313550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313550;
        }
    }
    ctx->pc = 0x3135C0u;
    // 0x3135c0: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3135c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3135c4: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x3135c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3135c8: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x3135C8u;
    {
        const bool branch_taken_0x3135c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3135c8) {
            ctx->pc = 0x3135CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3135C8u;
            // 0x3135cc: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313590;
        }
    }
    ctx->pc = 0x3135D0u;
label_3135d0:
    // 0x3135d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3135d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3135d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3135d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3135d8: 0xc0c4d38  jal         func_3134E0
    ctx->pc = 0x3135D8u;
    SET_GPR_U32(ctx, 31, 0x3135E0u);
    ctx->pc = 0x3135DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3135D8u;
    // 0x3135dc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3134E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3134E0u, 0x3135D8u, 0x3135E0u)) {
        return;
    }
    ctx->pc = 0x3135E0u;
label_3135e0:
    // 0x3135e0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3135e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3135e4: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x3135e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3135e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3135e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3135ec: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x3135ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x3135f0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3135f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3135f4: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x3135f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x3135f8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3135f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3135fc:
    // 0x3135fc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3135fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_313600:
    // 0x313600: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x313600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x313604: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x313604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x313608: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x313608u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31360c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x31360cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x313610: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x313610u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313614: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x313614u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31361c: 0x3e00008  jr          $ra
    ctx->pc = 0x31361Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31361Cu;
        // 0x313620: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31361Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313624u;
    // 0x313624: 0x0  nop
    ctx->pc = 0x313624u;
    // NOP
    ctx->pc = 0x313628u;
}
