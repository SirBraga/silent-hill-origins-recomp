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

// Function: sub_0014C510
// Address: 0x14c510 - 0x14c950
void sub_0014C510_0x14c510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C510_0x14c510");
#endif

    switch (ctx->pc) {
        case 0x14c55cu: goto label_14c55c;
        case 0x14c570u: goto label_14c570;
        case 0x14c57cu: goto label_14c57c;
        case 0x14c588u: goto label_14c588;
        case 0x14c62cu: goto label_14c62c;
        case 0x14c644u: goto label_14c644;
        case 0x14c650u: goto label_14c650;
        case 0x14c674u: goto label_14c674;
        case 0x14c68cu: goto label_14c68c;
        case 0x14c694u: goto label_14c694;
        case 0x14c6b8u: goto label_14c6b8;
        case 0x14c73cu: goto label_14c73c;
        case 0x14c748u: goto label_14c748;
        case 0x14c778u: goto label_14c778;
        case 0x14c7a0u: goto label_14c7a0;
        case 0x14c7b8u: goto label_14c7b8;
        case 0x14c7f0u: goto label_14c7f0;
        case 0x14c828u: goto label_14c828;
        case 0x14c8a0u: goto label_14c8a0;
        case 0x14c8b8u: goto label_14c8b8;
        case 0x14c8d0u: goto label_14c8d0;
        case 0x14c920u: goto label_14c920;
        default: break;
    }

    ctx->pc = 0x14c510u;

    // 0x14c510: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x14c510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x14c514: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x14c514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x14c518: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x14c518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x14c51c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x14c51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c520: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x14c520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x14c524: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14c524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c528: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x14c528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x14c52c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x14c52cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c530: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x14c530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x14c534: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14c534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x14c538: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x14c538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x14c53c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x14c53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x14c540: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x14c540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x14c544: 0x120000f6  beqz        $s0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x14C544u;
    {
        const bool branch_taken_0x14c544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C544u;
        // 0x14c548: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c544) {
            ctx->pc = 0x14C920u;
            goto label_14c920;
        }
    }
    ctx->pc = 0x14C54Cu;
    // 0x14c54c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x14c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x14c550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14c550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c554: 0xc0640b8  jal         func_1902E0
    ctx->pc = 0x14C554u;
    SET_GPR_U32(ctx, 31, 0x14C55Cu);
    ctx->pc = 0x14C558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C554u;
    // 0x14c558: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1902E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1902E0u, 0x14C554u, 0x14C55Cu)) {
        return;
    }
    ctx->pc = 0x14C55Cu;
label_14c55c:
    // 0x14c55c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14c55cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c560: 0x524000f0  beql        $s2, $zero, . + 4 + (0xF0 << 2)
    ctx->pc = 0x14C560u;
    {
        const bool branch_taken_0x14c560 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c560) {
            ctx->pc = 0x14C564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C560u;
            // 0x14c564: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C924u;
            goto label_14c924;
        }
    }
    ctx->pc = 0x14C568u;
    // 0x14c568: 0xc06325e  jal         func_18C978
    ctx->pc = 0x14C568u;
    SET_GPR_U32(ctx, 31, 0x14C570u);
    ctx->pc = 0x14C56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C568u;
    // 0x14c56c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18C978u, 0x14C568u, 0x14C570u)) {
        return;
    }
    ctx->pc = 0x14C570u;
label_14c570:
    // 0x14c570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c574: 0xc081be4  jal         func_206F90
    ctx->pc = 0x14C574u;
    SET_GPR_U32(ctx, 31, 0x14C57Cu);
    ctx->pc = 0x14C578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C574u;
    // 0x14c578: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206F90u, 0x14C574u, 0x14C57Cu)) {
        return;
    }
    ctx->pc = 0x14C57Cu;
label_14c57c:
    // 0x14c57c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14c57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c580: 0xc09418e  jal         func_250638
    ctx->pc = 0x14C580u;
    SET_GPR_U32(ctx, 31, 0x14C588u);
    ctx->pc = 0x14C584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C580u;
    // 0x14c584: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250638u, 0x14C580u, 0x14C588u)) {
        return;
    }
    ctx->pc = 0x14C588u;
label_14c588:
    // 0x14c588: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x14c588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x14c58c: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x14c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x14c590: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x14c590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x14c594: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14C594u;
    {
        const bool branch_taken_0x14c594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C594u;
        // 0x14c598: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c594) {
            ctx->pc = 0x14C620u;
            goto label_14c620;
        }
    }
    ctx->pc = 0x14C59Cu;
    // 0x14c59c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c5a0: 0x24421e20  addiu       $v0, $v0, 0x1E20
    ctx->pc = 0x14c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7712));
    // 0x14c5a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14c5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14c5a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14c5ac: 0x800008  jr          $a0
    ctx->pc = 0x14C5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C5B4u: goto label_14c5b4;
            case 0x14C5C0u: goto label_14c5c0;
            case 0x14C5CCu: goto label_14c5cc;
            case 0x14C5D8u: goto label_14c5d8;
            case 0x14C5E4u: goto label_14c5e4;
            case 0x14C5F0u: goto label_14c5f0;
            case 0x14C5FCu: goto label_14c5fc;
            case 0x14C608u: goto label_14c608;
            case 0x14C614u: goto label_14c614;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C5ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14C5B4u;
label_14c5b4:
    // 0x14c5b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c5b8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x14C5B8u;
    {
        const bool branch_taken_0x14c5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5B8u;
        // 0x14c5bc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c5b8) {
            ctx->pc = 0x14C624u;
            goto label_14c624;
        }
    }
    ctx->pc = 0x14C5C0u;
label_14c5c0:
    // 0x14c5c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c5c4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14C5C4u;
    {
        const bool branch_taken_0x14c5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5C4u;
        // 0x14c5c8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c5c4) {
            ctx->pc = 0x14C624u;
            goto label_14c624;
        }
    }
    ctx->pc = 0x14C5CCu;
label_14c5cc:
    // 0x14c5cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14c5d0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14C5D0u;
    {
        const bool branch_taken_0x14c5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5D0u;
        // 0x14c5d4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c5d0) {
            ctx->pc = 0x14C624u;
            goto label_14c624;
        }
    }
    ctx->pc = 0x14C5D8u;
label_14c5d8:
    // 0x14c5d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14c5dc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14C5DCu;
    {
        const bool branch_taken_0x14c5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5DCu;
        // 0x14c5e0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c5dc) {
            ctx->pc = 0x14C624u;
            goto label_14c624;
        }
    }
    ctx->pc = 0x14C5E4u;
label_14c5e4:
    // 0x14c5e4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14c5e8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14C5E8u;
    {
        const bool branch_taken_0x14c5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5E8u;
        // 0x14c5ec: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c5e8) {
            ctx->pc = 0x14C624u;
            goto label_14c624;
        }
    }
    ctx->pc = 0x14C5F0u;
label_14c5f0:
    // 0x14c5f0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14c5f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14C5F4u;
    {
        const bool branch_taken_0x14c5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C5F4u;
        // 0x14c5f8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c5f4) {
            ctx->pc = 0x14C624u;
            goto label_14c624;
        }
    }
    ctx->pc = 0x14C5FCu;
label_14c5fc:
    // 0x14c5fc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x14c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14c600: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14C600u;
    {
        const bool branch_taken_0x14c600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C600u;
        // 0x14c604: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c600) {
            ctx->pc = 0x14C624u;
            goto label_14c624;
        }
    }
    ctx->pc = 0x14C608u;
label_14c608:
    // 0x14c608: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x14c608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14c60c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14C60Cu;
    {
        const bool branch_taken_0x14c60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C60Cu;
        // 0x14c610: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c60c) {
            ctx->pc = 0x14C624u;
            goto label_14c624;
        }
    }
    ctx->pc = 0x14C614u;
label_14c614:
    // 0x14c614: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x14c614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x14c618: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14C618u;
    {
        const bool branch_taken_0x14c618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C618u;
        // 0x14c61c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c618) {
            ctx->pc = 0x14C624u;
            goto label_14c624;
        }
    }
    ctx->pc = 0x14C620u;
label_14c620:
    // 0x14c620: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x14c620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_14c624:
    // 0x14c624: 0xc049c04  jal         func_127010
    ctx->pc = 0x14C624u;
    SET_GPR_U32(ctx, 31, 0x14C62Cu);
    ctx->pc = 0x14C628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C624u;
    // 0x14c628: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x127010u, 0x14C624u, 0x14C62Cu)) {
        return;
    }
    ctx->pc = 0x14C62Cu;
label_14c62c:
    // 0x14c62c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14c62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14c630: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14c630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c634: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x14c634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x14c638: 0x463004  sllv        $a2, $a2, $v0
    ctx->pc = 0x14c638u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x14c63c: 0xc09545a  jal         func_255168
    ctx->pc = 0x14C63Cu;
    SET_GPR_U32(ctx, 31, 0x14C644u);
    ctx->pc = 0x14C640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C63Cu;
    // 0x14c640: 0x24a5d390  addiu       $a1, $a1, -0x2C70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x14C63Cu, 0x14C644u)) {
        return;
    }
    ctx->pc = 0x14C644u;
label_14c644:
    // 0x14c644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c648: 0xc081b56  jal         func_206D58
    ctx->pc = 0x14C648u;
    SET_GPR_U32(ctx, 31, 0x14C650u);
    ctx->pc = 0x14C64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C648u;
    // 0x14c64c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x14C648u, 0x14C650u)) {
        return;
    }
    ctx->pc = 0x14C650u;
label_14c650:
    // 0x14c650: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x14c650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x14c654: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14c654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c658: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x14c658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x14c65c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x14c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x14c660: 0x544300a3  bnel        $v0, $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x14C660u;
    {
        const bool branch_taken_0x14c660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14c660) {
            ctx->pc = 0x14C664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C660u;
            // 0x14c664: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C8F0u;
            goto label_14c8f0;
        }
    }
    ctx->pc = 0x14C668u;
    // 0x14c668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14c668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c66c: 0xc063274  jal         func_18C9D0
    ctx->pc = 0x14C66Cu;
    SET_GPR_U32(ctx, 31, 0x14C674u);
    ctx->pc = 0x14C670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C66Cu;
    // 0x14c670: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18C9D0u, 0x14C66Cu, 0x14C674u)) {
        return;
    }
    ctx->pc = 0x14C674u;
label_14c674:
    // 0x14c674: 0x26630004  addiu       $v1, $s3, 0x4
    ctx->pc = 0x14c674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x14c678: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14c678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c67c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x14c67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x14c680: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14c680u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c684: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x14C684u;
    SET_GPR_U32(ctx, 31, 0x14C68Cu);
    ctx->pc = 0x14C688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C684u;
    // 0x14c688: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x14C684u, 0x14C68Cu)) {
        return;
    }
    ctx->pc = 0x14C68Cu;
label_14c68c:
    // 0x14c68c: 0xc04155a  jal         func_105568
    ctx->pc = 0x14C68Cu;
    SET_GPR_U32(ctx, 31, 0x14C694u);
    ctx->pc = 0x14C690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C68Cu;
    // 0x14c690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105568u, 0x14C68Cu, 0x14C694u)) {
        return;
    }
    ctx->pc = 0x14C694u;
label_14c694:
    // 0x14c694: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x14c694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x14c698: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x14c698u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x14c69c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x14c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14c6a0: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14C6A0u;
    {
        const bool branch_taken_0x14c6a0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x14C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6A0u;
        // 0x14c6a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6a0) {
            ctx->pc = 0x14C6D4u;
            goto label_14c6d4;
        }
    }
    ctx->pc = 0x14C6A8u;
    // 0x14c6a8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x14c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x14c6ac: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x14c6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c6b0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x14c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x14c6b4: 0x0  nop
    ctx->pc = 0x14c6b4u;
    // NOP
label_14c6b8:
    // 0x14c6b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14c6bc: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C6BCu;
    {
        const bool branch_taken_0x14c6bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x14C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6BCu;
        // 0x14c6c0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6bc) {
            ctx->pc = 0x14C6CCu;
            goto label_14c6cc;
        }
    }
    ctx->pc = 0x14C6C4u;
    // 0x14c6c4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x14c6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c6c8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x14c6c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_14c6cc:
    // 0x14c6cc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14C6CCu;
    {
        const bool branch_taken_0x14c6cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6CCu;
        // 0x14c6d0: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6cc) {
            ctx->pc = 0x14C6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c6b8;
        }
    }
    ctx->pc = 0x14C6D4u;
label_14c6d4:
    // 0x14c6d4: 0x24e6ef60  addiu       $a2, $a3, -0x10A0
    ctx->pc = 0x14c6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963040));
    // 0x14c6d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14c6d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c6dc: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x14c6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x14c6e0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x14c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x14c6e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14c6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14c6e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14c6e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14c6ec: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x14c6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x14c6f0: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x14c6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x14c6f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14c6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14c6f8: 0xe4e1ef60  swc1        $f1, -0x10A0($a3)
    ctx->pc = 0x14c6f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294963040), bits); }
    // 0x14c6fc: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x14c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x14c700: 0xe4c10028  swc1        $f1, 0x28($a2)
    ctx->pc = 0x14c700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x14c704: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x14c704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x14c708: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x14c708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x14c70c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x14c70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x14c710: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x14c710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x14c714: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x14c714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x14c718: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x14c718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x14c71c: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x14c71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x14c720: 0xe4c00038  swc1        $f0, 0x38($a2)
    ctx->pc = 0x14c720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x14c724: 0xe4c00034  swc1        $f0, 0x34($a2)
    ctx->pc = 0x14c724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x14c728: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x14c728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14c72c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14c72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c730: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x14c730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c734: 0xc041562  jal         func_105588
    ctx->pc = 0x14C734u;
    SET_GPR_U32(ctx, 31, 0x14C73Cu);
    ctx->pc = 0x14C738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C734u;
    // 0x14c738: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105588u, 0x14C734u, 0x14C73Cu)) {
        return;
    }
    ctx->pc = 0x14C73Cu;
label_14c73c:
    // 0x14c73c: 0x1aa00062  blez        $s5, . + 4 + (0x62 << 2)
    ctx->pc = 0x14C73Cu;
    {
        const bool branch_taken_0x14c73c = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x14C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C73Cu;
        // 0x14c740: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c73c) {
            ctx->pc = 0x14C8C8u;
            goto label_14c8c8;
        }
    }
    ctx->pc = 0x14C744u;
    // 0x14c744: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x14c744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_14c748:
    // 0x14c748: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x14c748u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x14c74c: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x14c74cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14c750: 0x24770001  addiu       $s7, $v1, 0x1
    ctx->pc = 0x14c750u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14c754: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x14c754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x14c758: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14c758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c75c: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x14c75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x14c760: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14C760u;
    {
        const bool branch_taken_0x14c760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C760u;
        // 0x14c764: 0x8c660008  lw          $a2, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c760) {
            ctx->pc = 0x14C790u;
            goto label_14c790;
        }
    }
    ctx->pc = 0x14C768u;
    // 0x14c768: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x14c768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x14c76c: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x14c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x14c770: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14c770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14c774: 0x0  nop
    ctx->pc = 0x14c774u;
    // NOP
label_14c778:
    // 0x14c778: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x14c778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x14c77c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C77Cu;
    {
        const bool branch_taken_0x14c77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C77Cu;
        // 0x14c780: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c77c) {
            ctx->pc = 0x14C790u;
            goto label_14c790;
        }
    }
    ctx->pc = 0x14C784u;
    // 0x14c784: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14c784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14c788: 0x5046fffb  beql        $v0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14C788u;
    {
        const bool branch_taken_0x14c788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x14c788) {
            ctx->pc = 0x14C78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C788u;
            // 0x14c78c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c778;
        }
    }
    ctx->pc = 0x14C790u;
label_14c790:
    // 0x14c790: 0xb09023  subu        $s2, $a1, $s0
    ctx->pc = 0x14c790u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x14c794: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x14c794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14c798: 0xc04157c  jal         func_1055F0
    ctx->pc = 0x14C798u;
    SET_GPR_U32(ctx, 31, 0x14C7A0u);
    ctx->pc = 0x14C79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C798u;
    // 0x14c79c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1055F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1055F0u, 0x14C798u, 0x14C7A0u)) {
        return;
    }
    ctx->pc = 0x14C7A0u;
label_14c7a0:
    // 0x14c7a0: 0x1a400043  blez        $s2, . + 4 + (0x43 << 2)
    ctx->pc = 0x14C7A0u;
    {
        const bool branch_taken_0x14c7a0 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x14C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7A0u;
        // 0x14c7a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c7a0) {
            ctx->pc = 0x14C8B0u;
            goto label_14c8b0;
        }
    }
    ctx->pc = 0x14C7A8u;
    // 0x14c7a8: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x14c7a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14c7ac: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x14c7acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c7b0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x14c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x14c7b4: 0x0  nop
    ctx->pc = 0x14c7b4u;
    // NOP
label_14c7b8:
    // 0x14c7b8: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x14c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x14c7bc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x14c7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14c7c0: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x14c7c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14c7c8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x14c7c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7cc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14c7d0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x14c7d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c7d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14c7d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14c7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14c7dc: 0x24b30001  addiu       $s3, $a1, 0x1
    ctx->pc = 0x14c7dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14c7e0: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14C7E0u;
    {
        const bool branch_taken_0x14c7e0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x14C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7E0u;
        // 0x14c7e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c7e0) {
            ctx->pc = 0x14C80Cu;
            goto label_14c80c;
        }
    }
    ctx->pc = 0x14C7E8u;
    // 0x14c7e8: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x14c7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x14c7ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14c7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c7f0:
    // 0x14c7f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14c7f4: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C7F4u;
    {
        const bool branch_taken_0x14c7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x14C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C7F4u;
        // 0x14c7f8: 0x1491021  addu        $v0, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c7f4) {
            ctx->pc = 0x14C814u;
            goto label_14c814;
        }
    }
    ctx->pc = 0x14C7FCu;
    // 0x14c7fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x14c7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14c800: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x14c800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x14c804: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14C804u;
    {
        const bool branch_taken_0x14c804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C804u;
        // 0x14c808: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c804) {
            ctx->pc = 0x14C7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c7f0;
        }
    }
    ctx->pc = 0x14C80Cu;
label_14c80c:
    // 0x14c80c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x14c80cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14c810: 0x1491021  addu        $v0, $t2, $t1
    ctx->pc = 0x14c810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_14c814:
    // 0x14c814: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x14c814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x14c818: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x14c818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14c81c: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x14C81Cu;
    {
        const bool branch_taken_0x14c81c = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x14C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C81Cu;
        // 0x14c820: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c81c) {
            ctx->pc = 0x14C848u;
            goto label_14c848;
        }
    }
    ctx->pc = 0x14C824u;
    // 0x14c824: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x14c824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_14c828:
    // 0x14c828: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14c828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14c82c: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C82Cu;
    {
        const bool branch_taken_0x14c82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x14c82c) {
            ctx->pc = 0x14C830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C82Cu;
            // 0x14c830: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C83Cu;
            goto label_14c83c;
        }
    }
    ctx->pc = 0x14C834u;
    // 0x14c834: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14C834u;
    {
        const bool branch_taken_0x14c834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C834u;
        // 0x14c838: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c834) {
            ctx->pc = 0x14C84Cu;
            goto label_14c84c;
        }
    }
    ctx->pc = 0x14C83Cu;
label_14c83c:
    // 0x14c83c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x14c83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x14c840: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14C840u;
    {
        const bool branch_taken_0x14c840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C840u;
        // 0x14c844: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c840) {
            ctx->pc = 0x14C828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c828;
        }
    }
    ctx->pc = 0x14C848u;
label_14c848:
    // 0x14c848: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14c848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14c84c:
    // 0x14c84c: 0x2c8102a  slt         $v0, $s6, $t0
    ctx->pc = 0x14c84cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x14c850: 0x2c5182a  slt         $v1, $s6, $a1
    ctx->pc = 0x14c850u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x14c854: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x14c854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x14c858: 0x3c3280a  movz        $a1, $fp, $v1
    ctx->pc = 0x14c858u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30));
    // 0x14c85c: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x14c85cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0));
    // 0x14c860: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x14c860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x14c864: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x14c864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x14c868: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14c868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14c86c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14c870: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x14c870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x14c874: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x14c874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14c878: 0x25270014  addiu       $a3, $t1, 0x14
    ctx->pc = 0x14c878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
    // 0x14c87c: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x14c87cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x14c880: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x14c880u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14c884: 0xc52c000c  lwc1        $f12, 0xC($t1)
    ctx->pc = 0x14c884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14c888: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x14c888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x14c88c: 0xc52d0010  lwc1        $f13, 0x10($t1)
    ctx->pc = 0x14c88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14c890: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x14c890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x14c894: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x14c894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14c898: 0xc041594  jal         func_105650
    ctx->pc = 0x14C898u;
    SET_GPR_U32(ctx, 31, 0x14C8A0u);
    ctx->pc = 0x14C89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C898u;
    // 0x14c89c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105650u, 0x14C898u, 0x14C8A0u)) {
        return;
    }
    ctx->pc = 0x14C8A0u;
label_14c8a0:
    // 0x14c8a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14c8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8a4: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x14c8a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x14c8a8: 0x5440ffc3  bnel        $v0, $zero, . + 4 + (-0x3D << 2)
    ctx->pc = 0x14C8A8u;
    {
        const bool branch_taken_0x14c8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c8a8) {
            ctx->pc = 0x14C8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C8A8u;
            // 0x14c8ac: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c7b8;
        }
    }
    ctx->pc = 0x14C8B0u;
label_14c8b0:
    // 0x14c8b0: 0xc041608  jal         func_105820
    ctx->pc = 0x14C8B0u;
    SET_GPR_U32(ctx, 31, 0x14C8B8u);
    ctx->pc = 0x14C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C8B0u;
    // 0x14c8b4: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105820u, 0x14C8B0u, 0x14C8B8u)) {
        return;
    }
    ctx->pc = 0x14C8B8u;
label_14c8b8:
    // 0x14c8b8: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x14c8b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c8bc: 0x75102a  slt         $v0, $v1, $s5
    ctx->pc = 0x14c8bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x14c8c0: 0x5440ffa1  bnel        $v0, $zero, . + 4 + (-0x5F << 2)
    ctx->pc = 0x14C8C0u;
    {
        const bool branch_taken_0x14c8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c8c0) {
            ctx->pc = 0x14C8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C8C0u;
            // 0x14c8c4: 0x8e870004  lw          $a3, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c748;
        }
    }
    ctx->pc = 0x14C8C8u;
label_14c8c8:
    // 0x14c8c8: 0xc04160e  jal         func_105838
    ctx->pc = 0x14C8C8u;
    SET_GPR_U32(ctx, 31, 0x14C8D0u);
    ctx->pc = 0x14C8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C8C8u;
    // 0x14c8cc: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105838u, 0x14C8C8u, 0x14C8D0u)) {
        return;
    }
    ctx->pc = 0x14C8D0u;
label_14c8d0:
    // 0x14c8d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14c8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c8d4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x14c8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14c8d8: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x14c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x14c8dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14C8DCu;
    {
        const bool branch_taken_0x14c8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C8DCu;
        // 0x14c8e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c8dc) {
            ctx->pc = 0x14C8E8u;
            goto label_14c8e8;
        }
    }
    ctx->pc = 0x14C8E4u;
    // 0x14c8e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14c8e8:
    // 0x14c8e8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14c8ec: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x14c8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_14c8f0:
    // 0x14c8f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x14c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x14c8f4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x14c8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x14c8f8: 0x8c434768  lw          $v1, 0x4768($v0)
    ctx->pc = 0x14c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4768u));
    // 0x14c8fc: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x14c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x14c900: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C900u;
    {
        const bool branch_taken_0x14c900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C900u;
        // 0x14c904: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c900) {
            ctx->pc = 0x14C920u;
            goto label_14c920;
        }
    }
    ctx->pc = 0x14C908u;
    // 0x14c908: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14c908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14c90c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C90Cu;
    {
        const bool branch_taken_0x14c90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C90Cu;
        // 0x14c910: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c90c) {
            ctx->pc = 0x14C920u;
            goto label_14c920;
        }
    }
    ctx->pc = 0x14C914u;
    // 0x14c914: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x14c914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x14c918: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14C918u;
    SET_GPR_U32(ctx, 31, 0x14C920u);
    ctx->pc = 0x14C91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C918u;
    // 0x14c91c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14C918u, 0x14C920u)) {
        return;
    }
    ctx->pc = 0x14C920u;
label_14c920:
    // 0x14c920: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x14c920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_14c924:
    // 0x14c924: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x14c924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14c928: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x14c928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14c92c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x14c92cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14c930: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x14c930u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14c934: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x14c934u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14c938: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x14c938u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14c93c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x14c93cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14c940: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x14c940u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14c944: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14c944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c948: 0x3e00008  jr          $ra
    ctx->pc = 0x14C948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C948u;
        // 0x14c94c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C950u;
}
