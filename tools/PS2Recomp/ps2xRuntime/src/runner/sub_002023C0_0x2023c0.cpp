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

// Function: sub_002023C0
// Address: 0x2023c0 - 0x202490
void sub_002023C0_0x2023c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002023C0_0x2023c0");
#endif

    switch (ctx->pc) {
        case 0x2023fcu: goto label_2023fc;
        case 0x202428u: goto label_202428;
        case 0x20243cu: goto label_20243c;
        case 0x202444u: goto label_202444;
        case 0x20244cu: goto label_20244c;
        case 0x202470u: goto label_202470;
        default: break;
    }

    ctx->pc = 0x2023c0u;

    // 0x2023c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2023c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2023c4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2023c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x2023c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2023c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2023cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2023ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2023d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2023d4: 0x8c440270  lw          $a0, 0x270($v0)
    ctx->pc = 0x2023d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5C0270u));
    // 0x2023d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2023d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2023dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2023e0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2023E0u;
    {
        const bool branch_taken_0x2023e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2023E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023E0u;
        // 0x2023e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023e0) {
            ctx->pc = 0x202408u;
            goto label_202408;
        }
    }
    ctx->pc = 0x2023E8u;
    // 0x2023e8: 0x2e220041  sltiu       $v0, $s1, 0x41
    ctx->pc = 0x2023e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x2023ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2023ECu;
    {
        const bool branch_taken_0x2023ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2023F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023ECu;
        // 0x2023f0: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023ec) {
            ctx->pc = 0x20240Cu;
            goto label_20240c;
        }
    }
    ctx->pc = 0x2023F4u;
    // 0x2023f4: 0xc080aac  jal         func_202AB0
    ctx->pc = 0x2023F4u;
    SET_GPR_U32(ctx, 31, 0x2023FCu);
    ctx->pc = 0x2023F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2023F4u;
    // 0x2023f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202AB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202AB0u, 0x2023F4u, 0x2023FCu)) {
        return;
    }
    ctx->pc = 0x2023FCu;
label_2023fc:
    // 0x2023fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2023fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202400: 0x1600001c  bnez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x202400u;
    {
        const bool branch_taken_0x202400 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x202404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202400u;
        // 0x202404: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202400) {
            ctx->pc = 0x202474u;
            goto label_202474;
        }
    }
    ctx->pc = 0x202408u;
label_202408:
    // 0x202408: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x202408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_20240c:
    // 0x20240c: 0x8c440274  lw          $a0, 0x274($v0)
    ctx->pc = 0x20240cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x202410: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x202410u;
    {
        const bool branch_taken_0x202410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x202414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202410u;
        // 0x202414: 0x2e220401  sltiu       $v0, $s1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202410) {
            ctx->pc = 0x202434u;
            goto label_202434;
        }
    }
    ctx->pc = 0x202418u;
    // 0x202418: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202418u;
    {
        const bool branch_taken_0x202418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202418) {
            ctx->pc = 0x202434u;
            goto label_202434;
        }
    }
    ctx->pc = 0x202420u;
    // 0x202420: 0xc080b60  jal         func_202D80
    ctx->pc = 0x202420u;
    SET_GPR_U32(ctx, 31, 0x202428u);
    ctx->pc = 0x202424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202420u;
    // 0x202424: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202D80u, 0x202420u, 0x202428u)) {
        return;
    }
    ctx->pc = 0x202428u;
label_202428:
    // 0x202428: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x202428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20242c: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20242Cu;
    {
        const bool branch_taken_0x20242c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x202430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20242Cu;
        // 0x202430: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20242c) {
            ctx->pc = 0x202474u;
            goto label_202474;
        }
    }
    ctx->pc = 0x202434u;
label_202434:
    // 0x202434: 0xc0807e4  jal         func_201F90
    ctx->pc = 0x202434u;
    SET_GPR_U32(ctx, 31, 0x20243Cu);
    ctx->pc = 0x201F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201F90u, 0x202434u, 0x20243Cu)) {
        return;
    }
    ctx->pc = 0x20243Cu;
label_20243c:
    // 0x20243c: 0xc08083a  jal         func_2020E8
    ctx->pc = 0x20243Cu;
    SET_GPR_U32(ctx, 31, 0x202444u);
    ctx->pc = 0x2020E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2020E8u, 0x20243Cu, 0x202444u)) {
        return;
    }
    ctx->pc = 0x202444u;
label_202444:
    // 0x202444: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x202444u;
    SET_GPR_U32(ctx, 31, 0x20244Cu);
    ctx->pc = 0x202448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202444u;
    // 0x202448: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x202444u, 0x20244Cu)) {
        return;
    }
    ctx->pc = 0x20244Cu;
label_20244c:
    // 0x20244c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20244cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202450: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x202450u;
    {
        const bool branch_taken_0x202450 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x202454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202450u;
        // 0x202454: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202450) {
            ctx->pc = 0x202474u;
            goto label_202474;
        }
    }
    ctx->pc = 0x202458u;
    // 0x202458: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x202458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x20245c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20245cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202460: 0x24843c18  addiu       $a0, $a0, 0x3C18
    ctx->pc = 0x202460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15384));
    // 0x202464: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x202464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202468: 0xc0c4f0a  jal         func_313C28
    ctx->pc = 0x202468u;
    SET_GPR_U32(ctx, 31, 0x202470u);
    ctx->pc = 0x20246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202468u;
    // 0x20246c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313C28u, 0x202468u, 0x202470u)) {
        return;
    }
    ctx->pc = 0x202470u;
label_202470:
    // 0x202470: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x202470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_202474:
    // 0x202474: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x202474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202478: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x202478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20247c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20247cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202484: 0x3e00008  jr          $ra
    ctx->pc = 0x202484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202484u;
        // 0x202488: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20248Cu;
    // 0x20248c: 0x0  nop
    ctx->pc = 0x20248cu;
    // NOP
    ctx->pc = 0x202490u;
}
