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

// Function: sub_001FB858
// Address: 0x1fb858 - 0x1fb908
void sub_001FB858_0x1fb858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB858_0x1fb858");
#endif

    switch (ctx->pc) {
        case 0x1fb858u: goto label_1fb858;
        case 0x1fb85cu: goto label_1fb85c;
        case 0x1fb860u: goto label_1fb860;
        case 0x1fb864u: goto label_1fb864;
        case 0x1fb868u: goto label_1fb868;
        case 0x1fb86cu: goto label_1fb86c;
        case 0x1fb870u: goto label_1fb870;
        case 0x1fb874u: goto label_1fb874;
        case 0x1fb878u: goto label_1fb878;
        case 0x1fb87cu: goto label_1fb87c;
        case 0x1fb880u: goto label_1fb880;
        case 0x1fb884u: goto label_1fb884;
        case 0x1fb888u: goto label_1fb888;
        case 0x1fb88cu: goto label_1fb88c;
        case 0x1fb890u: goto label_1fb890;
        case 0x1fb894u: goto label_1fb894;
        case 0x1fb898u: goto label_1fb898;
        case 0x1fb89cu: goto label_1fb89c;
        case 0x1fb8a0u: goto label_1fb8a0;
        case 0x1fb8a4u: goto label_1fb8a4;
        case 0x1fb8a8u: goto label_1fb8a8;
        case 0x1fb8acu: goto label_1fb8ac;
        case 0x1fb8b0u: goto label_1fb8b0;
        case 0x1fb8b4u: goto label_1fb8b4;
        case 0x1fb8b8u: goto label_1fb8b8;
        case 0x1fb8bcu: goto label_1fb8bc;
        case 0x1fb8c0u: goto label_1fb8c0;
        case 0x1fb8c4u: goto label_1fb8c4;
        case 0x1fb8c8u: goto label_1fb8c8;
        case 0x1fb8ccu: goto label_1fb8cc;
        case 0x1fb8d0u: goto label_1fb8d0;
        case 0x1fb8d4u: goto label_1fb8d4;
        case 0x1fb8d8u: goto label_1fb8d8;
        case 0x1fb8dcu: goto label_1fb8dc;
        case 0x1fb8e0u: goto label_1fb8e0;
        case 0x1fb8e4u: goto label_1fb8e4;
        case 0x1fb8e8u: goto label_1fb8e8;
        case 0x1fb8ecu: goto label_1fb8ec;
        case 0x1fb8f0u: goto label_1fb8f0;
        case 0x1fb8f4u: goto label_1fb8f4;
        case 0x1fb8f8u: goto label_1fb8f8;
        case 0x1fb8fcu: goto label_1fb8fc;
        case 0x1fb900u: goto label_1fb900;
        case 0x1fb904u: goto label_1fb904;
        default: break;
    }

    ctx->pc = 0x1fb858u;

label_1fb858:
    // 0x1fb858: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1fb858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1fb85c:
    // 0x1fb85c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1fb85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_1fb860:
    // 0x1fb860: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1fb860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1fb864:
    // 0x1fb864: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1fb864u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1fb868:
    // 0x1fb868: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1fb868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1fb86c:
    // 0x1fb86c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1fb86cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fb870:
    // 0x1fb870: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1fb870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1fb874:
    // 0x1fb874: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1fb874u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fb878:
    // 0x1fb878: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1fb878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1fb87c:
    // 0x1fb87c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1fb87cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fb880:
    // 0x1fb880: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fb880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1fb884:
    // 0x1fb884: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fb884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1fb888:
    // 0x1fb888: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fb88c:
    // 0x1fb88c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1fb88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1fb890:
    // 0x1fb890: 0x80f809  jalr        $a0
label_1fb894:
    if (ctx->pc == 0x1FB894u) {
        ctx->pc = 0x1FB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB890u;
        // 0x1fb894: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB898u;
        goto label_1fb898;
    }
    ctx->pc = 0x1FB890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x1FB898u);
        ctx->pc = 0x1FB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB890u;
        // 0x1fb894: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB890u, 0x1FB898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB898u;
label_1fb898:
    // 0x1fb898: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fb898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fb89c:
    // 0x1fb89c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1fb89cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fb8a0:
    // 0x1fb8a0: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x1fb8a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_1fb8a4:
    // 0x1fb8a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1fb8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1fb8a8:
    // 0x1fb8a8: 0x280f809  jalr        $s4
label_1fb8ac:
    if (ctx->pc == 0x1FB8ACu) {
        ctx->pc = 0x1FB8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8A8u;
        // 0x1fb8ac: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB8B0u;
        goto label_1fb8b0;
    }
    ctx->pc = 0x1FB8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x1FB8B0u);
        ctx->pc = 0x1FB8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8A8u;
        // 0x1fb8ac: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB8A8u, 0x1FB8B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB8B0u;
label_1fb8b0:
    // 0x1fb8b0: 0x260f809  jalr        $s3
label_1fb8b4:
    if (ctx->pc == 0x1FB8B4u) {
        ctx->pc = 0x1FB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8B0u;
        // 0x1fb8b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB8B8u;
        goto label_1fb8b8;
    }
    ctx->pc = 0x1FB8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x1FB8B8u);
        ctx->pc = 0x1FB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8B0u;
        // 0x1fb8b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB8B0u, 0x1FB8B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB8B8u;
label_1fb8b8:
    // 0x1fb8b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fb8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fb8bc:
    // 0x1fb8bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb8c0:
    // 0x1fb8c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fb8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fb8c4:
    // 0x1fb8c4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1fb8c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fb8c8:
    // 0x1fb8c8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1fb8c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1fb8cc:
    // 0x1fb8cc: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1fb8ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1fb8d0:
    // 0x1fb8d0: 0x60f809  jalr        $v1
label_1fb8d4:
    if (ctx->pc == 0x1FB8D4u) {
        ctx->pc = 0x1FB8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8D0u;
        // 0x1fb8d4: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB8D8u;
        goto label_1fb8d8;
    }
    ctx->pc = 0x1FB8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FB8D8u);
        ctx->pc = 0x1FB8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8D0u;
        // 0x1fb8d4: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB8D0u, 0x1FB8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB8D8u;
label_1fb8d8:
    // 0x1fb8d8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1fb8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1fb8dc:
    // 0x1fb8dc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1fb8dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1fb8e0:
    // 0x1fb8e0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1fb8e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1fb8e4:
    // 0x1fb8e4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1fb8e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb8e8:
    // 0x1fb8e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1fb8e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1fb8ec:
    // 0x1fb8ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1fb8ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb8f0:
    // 0x1fb8f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fb8f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb8f4:
    // 0x1fb8f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fb8f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb8f8:
    // 0x1fb8f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb8f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb8fc:
    // 0x1fb8fc: 0x3e00008  jr          $ra
label_1fb900:
    if (ctx->pc == 0x1FB900u) {
        ctx->pc = 0x1FB900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8FCu;
        // 0x1fb900: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB904u;
        goto label_1fb904;
    }
    ctx->pc = 0x1FB8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8FCu;
        // 0x1fb900: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB904u;
label_1fb904:
    // 0x1fb904: 0x0  nop
    ctx->pc = 0x1fb904u;
    // NOP
    ctx->pc = 0x1fb908u;
}
