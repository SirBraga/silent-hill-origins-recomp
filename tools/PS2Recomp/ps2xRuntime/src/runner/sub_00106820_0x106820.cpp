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

// Function: sub_00106820
// Address: 0x106820 - 0x106928
void sub_00106820_0x106820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106820_0x106820");
#endif

    switch (ctx->pc) {
        case 0x10685cu: goto label_10685c;
        case 0x106890u: goto label_106890;
        case 0x1068a8u: goto label_1068a8;
        case 0x1068d8u: goto label_1068d8;
        case 0x1068f8u: goto label_1068f8;
        default: break;
    }

    ctx->pc = 0x106820u;

    // 0x106820: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x106820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x106824: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x106824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x106828: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x106828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x10682c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10682cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106830: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x106830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x106834: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x106834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x106838: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x106838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x10683c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x10683cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x106840: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x106840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x106844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106848: 0x8e2204b8  lw          $v0, 0x4B8($s1)
    ctx->pc = 0x106848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1208)));
    // 0x10684c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10684Cu;
    {
        const bool branch_taken_0x10684c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10684Cu;
        // 0x106850: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10684c) {
            ctx->pc = 0x10685Cu;
            goto label_10685c;
        }
    }
    ctx->pc = 0x106854u;
    // 0x106854: 0xc041a6e  jal         func_1069B8
    ctx->pc = 0x106854u;
    SET_GPR_U32(ctx, 31, 0x10685Cu);
    ctx->pc = 0x1069B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1069B8u, 0x106854u, 0x10685Cu)) {
        return;
    }
    ctx->pc = 0x10685Cu;
label_10685c:
    // 0x10685c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x10685cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x106860: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x106860u;
    {
        const bool branch_taken_0x106860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106860u;
        // 0x106864: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106860) {
            ctx->pc = 0x1068E8u;
            goto label_1068e8;
        }
    }
    ctx->pc = 0x106868u;
    // 0x106868: 0x8e2204b8  lw          $v0, 0x4B8($s1)
    ctx->pc = 0x106868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1208)));
    // 0x10686c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x10686Cu;
    {
        const bool branch_taken_0x10686c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10686c) {
            ctx->pc = 0x1068E8u;
            goto label_1068e8;
        }
    }
    ctx->pc = 0x106874u;
    // 0x106874: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x106874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x106878: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x106878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10687c: 0x1280001a  beqz        $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x10687Cu;
    {
        const bool branch_taken_0x10687c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x106880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10687Cu;
        // 0x106880: 0xae2204bc  sw          $v0, 0x4BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10687c) {
            ctx->pc = 0x1068E8u;
            goto label_1068e8;
        }
    }
    ctx->pc = 0x106884u;
    // 0x106884: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x106884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106888: 0xc065c40  jal         func_197100
    ctx->pc = 0x106888u;
    SET_GPR_U32(ctx, 31, 0x106890u);
    ctx->pc = 0x10688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106888u;
    // 0x10688c: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x106888u, 0x106890u)) {
        return;
    }
    ctx->pc = 0x106890u;
label_106890:
    // 0x106890: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x106890u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106894: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x106894u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106898: 0x26320038  addiu       $s2, $s1, 0x38
    ctx->pc = 0x106898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x10689c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10689Cu;
    {
        const bool branch_taken_0x10689c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1068A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10689Cu;
        // 0x1068a0: 0x26300004  addiu       $s0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10689c) {
            ctx->pc = 0x1068B0u;
            goto label_1068b0;
        }
    }
    ctx->pc = 0x1068A4u;
    // 0x1068a4: 0x0  nop
    ctx->pc = 0x1068a4u;
    // NOP
label_1068a8:
    // 0x1068a8: 0x26100078  addiu       $s0, $s0, 0x78
    ctx->pc = 0x1068a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x1068ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1068acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1068b0:
    // 0x1068b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1068b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1068b4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1068b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1068b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1068B8u;
    {
        const bool branch_taken_0x1068b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1068b8) {
            ctx->pc = 0x1068E8u;
            goto label_1068e8;
        }
    }
    ctx->pc = 0x1068C0u;
    // 0x1068c0: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1068c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1068c4: 0x5455fff8  bnel        $v0, $s5, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1068C4u;
    {
        const bool branch_taken_0x1068c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1068c4) {
            ctx->pc = 0x1068C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1068C4u;
            // 0x1068c8: 0x26520078  addiu       $s2, $s2, 0x78 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1068A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1068a8;
        }
    }
    ctx->pc = 0x1068CCu;
    // 0x1068cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1068ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1068d0: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x1068D0u;
    SET_GPR_U32(ctx, 31, 0x1068D8u);
    ctx->pc = 0x1068D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1068D0u;
    // 0x1068d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x1068D0u, 0x1068D8u)) {
        return;
    }
    ctx->pc = 0x1068D8u;
label_1068d8:
    // 0x1068d8: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1068D8u;
    {
        const bool branch_taken_0x1068d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1068DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068D8u;
        // 0x1068dc: 0x26520078  addiu       $s2, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068d8) {
            ctx->pc = 0x1068A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1068a8;
        }
    }
    ctx->pc = 0x1068E0u;
    // 0x1068e0: 0xae3304bc  sw          $s3, 0x4BC($s1)
    ctx->pc = 0x1068e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1212), GPR_U32(ctx, 19));
    // 0x1068e4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1068e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1068e8:
    // 0x1068e8: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1068E8u;
    {
        const bool branch_taken_0x1068e8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1068ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068E8u;
        // 0x1068ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068e8) {
            ctx->pc = 0x1068FCu;
            goto label_1068fc;
        }
    }
    ctx->pc = 0x1068F0u;
    // 0x1068f0: 0xc041a4c  jal         func_106930
    ctx->pc = 0x1068F0u;
    SET_GPR_U32(ctx, 31, 0x1068F8u);
    ctx->pc = 0x1068F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1068F0u;
    // 0x1068f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x106930u, 0x1068F0u, 0x1068F8u)) {
        return;
    }
    ctx->pc = 0x1068F8u;
label_1068f8:
    // 0x1068f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1068f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1068fc:
    // 0x1068fc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1068fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x106900: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x106900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106904: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x106904u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106908: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x106908u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10690c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x10690cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106910: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x106910u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106914: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x106914u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10691c: 0x3e00008  jr          $ra
    ctx->pc = 0x10691Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10691Cu;
        // 0x106920: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10691Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106924u;
    // 0x106924: 0x0  nop
    ctx->pc = 0x106924u;
    // NOP
    ctx->pc = 0x106928u;
}
