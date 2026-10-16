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

// Function: sub_002EF8B0
// Address: 0x2ef8b0 - 0x2ef9b8
void sub_002EF8B0_0x2ef8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF8B0_0x2ef8b0");
#endif

    switch (ctx->pc) {
        case 0x2ef8ecu: goto label_2ef8ec;
        case 0x2ef904u: goto label_2ef904;
        case 0x2ef910u: goto label_2ef910;
        case 0x2ef924u: goto label_2ef924;
        case 0x2ef92cu: goto label_2ef92c;
        case 0x2ef940u: goto label_2ef940;
        case 0x2ef948u: goto label_2ef948;
        case 0x2ef95cu: goto label_2ef95c;
        case 0x2ef964u: goto label_2ef964;
        case 0x2ef978u: goto label_2ef978;
        case 0x2ef980u: goto label_2ef980;
        default: break;
    }

    ctx->pc = 0x2ef8b0u;

    // 0x2ef8b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ef8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ef8b4: 0x8f8290a8  lw          $v0, -0x6F58($gp)
    ctx->pc = 0x2ef8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938792)));
    // 0x2ef8b8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2ef8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2ef8bc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2ef8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2ef8c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ef8c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef8c4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2ef8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2ef8c8: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x2ef8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ef8cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ef8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ef8d0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2ef8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2ef8d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ef8d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ef8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ef8dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF8DCu;
    {
        const bool branch_taken_0x2ef8dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8DCu;
        // 0x2ef8e0: 0x26110008  addiu       $s1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef8dc) {
            ctx->pc = 0x2EF8F0u;
            goto label_2ef8f0;
        }
    }
    ctx->pc = 0x2EF8E4u;
    // 0x2ef8e4: 0xc092fe4  jal         func_24BF90
    ctx->pc = 0x2EF8E4u;
    SET_GPR_U32(ctx, 31, 0x2EF8ECu);
    ctx->pc = 0x24BF90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BF90u, 0x2EF8E4u, 0x2EF8ECu)) {
        return;
    }
    ctx->pc = 0x2EF8ECu;
label_2ef8ec:
    // 0x2ef8ec: 0x0  nop
    ctx->pc = 0x2ef8ecu;
    // NOP
label_2ef8f0:
    // 0x2ef8f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ef8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ef8f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF8F4u;
    {
        const bool branch_taken_0x2ef8f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8F4u;
        // 0x2ef8f8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef8f4) {
            ctx->pc = 0x2EF904u;
            goto label_2ef904;
        }
    }
    ctx->pc = 0x2EF8FCu;
    // 0x2ef8fc: 0xc092fe4  jal         func_24BF90
    ctx->pc = 0x2EF8FCu;
    SET_GPR_U32(ctx, 31, 0x2EF904u);
    ctx->pc = 0x24BF90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BF90u, 0x2EF8FCu, 0x2EF904u)) {
        return;
    }
    ctx->pc = 0x2EF904u;
label_2ef904:
    // 0x2ef904: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ef904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2ef908: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2ef908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef90c: 0x26130028  addiu       $s3, $s0, 0x28
    ctx->pc = 0x2ef90cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_2ef910:
    // 0x2ef910: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2ef910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ef914: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF914u;
    {
        const bool branch_taken_0x2ef914 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef914) {
            ctx->pc = 0x2EF918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF914u;
            // 0x2ef918: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF930u;
            goto label_2ef930;
        }
    }
    ctx->pc = 0x2EF91Cu;
    // 0x2ef91c: 0xc0bbd9e  jal         func_2EF678
    ctx->pc = 0x2EF91Cu;
    SET_GPR_U32(ctx, 31, 0x2EF924u);
    ctx->pc = 0x2EF920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF91Cu;
    // 0x2ef920: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF678u, 0x2EF91Cu, 0x2EF924u)) {
        return;
    }
    ctx->pc = 0x2EF924u;
label_2ef924:
    // 0x2ef924: 0xc09d90a  jal         func_276428
    ctx->pc = 0x2EF924u;
    SET_GPR_U32(ctx, 31, 0x2EF92Cu);
    ctx->pc = 0x2EF928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF924u;
    // 0x2ef928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x2EF924u, 0x2EF92Cu)) {
        return;
    }
    ctx->pc = 0x2EF92Cu;
label_2ef92c:
    // 0x2ef92c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x2ef92cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2ef930:
    // 0x2ef930: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF930u;
    {
        const bool branch_taken_0x2ef930 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef930) {
            ctx->pc = 0x2EF934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF930u;
            // 0x2ef934: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF94Cu;
            goto label_2ef94c;
        }
    }
    ctx->pc = 0x2EF938u;
    // 0x2ef938: 0xc0bbd9e  jal         func_2EF678
    ctx->pc = 0x2EF938u;
    SET_GPR_U32(ctx, 31, 0x2EF940u);
    ctx->pc = 0x2EF93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF938u;
    // 0x2ef93c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF678u, 0x2EF938u, 0x2EF940u)) {
        return;
    }
    ctx->pc = 0x2EF940u;
label_2ef940:
    // 0x2ef940: 0xc09d90a  jal         func_276428
    ctx->pc = 0x2EF940u;
    SET_GPR_U32(ctx, 31, 0x2EF948u);
    ctx->pc = 0x2EF944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF940u;
    // 0x2ef944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x2EF940u, 0x2EF948u)) {
        return;
    }
    ctx->pc = 0x2EF948u;
label_2ef948:
    // 0x2ef948: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x2ef948u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2ef94c:
    // 0x2ef94c: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF94Cu;
    {
        const bool branch_taken_0x2ef94c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef94c) {
            ctx->pc = 0x2EF950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF94Cu;
            // 0x2ef950: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF968u;
            goto label_2ef968;
        }
    }
    ctx->pc = 0x2EF954u;
    // 0x2ef954: 0xc0bbd9e  jal         func_2EF678
    ctx->pc = 0x2EF954u;
    SET_GPR_U32(ctx, 31, 0x2EF95Cu);
    ctx->pc = 0x2EF958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF954u;
    // 0x2ef958: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF678u, 0x2EF954u, 0x2EF95Cu)) {
        return;
    }
    ctx->pc = 0x2EF95Cu;
label_2ef95c:
    // 0x2ef95c: 0xc09d90a  jal         func_276428
    ctx->pc = 0x2EF95Cu;
    SET_GPR_U32(ctx, 31, 0x2EF964u);
    ctx->pc = 0x2EF960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF95Cu;
    // 0x2ef960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x2EF95Cu, 0x2EF964u)) {
        return;
    }
    ctx->pc = 0x2EF964u;
label_2ef964:
    // 0x2ef964: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x2ef964u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2ef968:
    // 0x2ef968: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF968u;
    {
        const bool branch_taken_0x2ef968 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef968) {
            ctx->pc = 0x2EF96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF968u;
            // 0x2ef96c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF984u;
            goto label_2ef984;
        }
    }
    ctx->pc = 0x2EF970u;
    // 0x2ef970: 0xc0bbd9e  jal         func_2EF678
    ctx->pc = 0x2EF970u;
    SET_GPR_U32(ctx, 31, 0x2EF978u);
    ctx->pc = 0x2EF974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF970u;
    // 0x2ef974: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF678u, 0x2EF970u, 0x2EF978u)) {
        return;
    }
    ctx->pc = 0x2EF978u;
label_2ef978:
    // 0x2ef978: 0xc09d90a  jal         func_276428
    ctx->pc = 0x2EF978u;
    SET_GPR_U32(ctx, 31, 0x2EF980u);
    ctx->pc = 0x2EF97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF978u;
    // 0x2ef97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x2EF978u, 0x2EF980u)) {
        return;
    }
    ctx->pc = 0x2EF980u;
label_2ef980:
    // 0x2ef980: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2ef980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2ef984:
    // 0x2ef984: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x2ef984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2ef988: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2EF988u;
    {
        const bool branch_taken_0x2ef988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF988u;
        // 0x2ef98c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef988) {
            ctx->pc = 0x2EF910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef910;
        }
    }
    ctx->pc = 0x2EF990u;
    // 0x2ef990: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2ef990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef994: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2ef994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ef998: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2ef998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ef99c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ef99cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef9a0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2ef9a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef9a4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2ef9a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef9a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF9ACu;
        // 0x2ef9b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF9B4u;
    // 0x2ef9b4: 0x0  nop
    ctx->pc = 0x2ef9b4u;
    // NOP
    ctx->pc = 0x2ef9b8u;
}
