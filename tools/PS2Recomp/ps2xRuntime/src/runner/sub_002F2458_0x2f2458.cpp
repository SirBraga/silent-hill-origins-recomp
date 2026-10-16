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

// Function: sub_002F2458
// Address: 0x2f2458 - 0x2f2570
void sub_002F2458_0x2f2458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2458_0x2f2458");
#endif

    switch (ctx->pc) {
        case 0x2f24acu: goto label_2f24ac;
        case 0x2f24e8u: goto label_2f24e8;
        case 0x2f2504u: goto label_2f2504;
        default: break;
    }

    ctx->pc = 0x2f2458u;

    // 0x2f2458: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2f2458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f245c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f245cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f2460: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f2460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f2464: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x2f2464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2f2468: 0x24e300ff  addiu       $v1, $a3, 0xFF
    ctx->pc = 0x2f2468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 255));
    // 0x2f246c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f246cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f2470: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x2f2470u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7));
    // 0x2f2474: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f2474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f2478: 0x39203  sra         $s2, $v1, 8
    ctx->pc = 0x2f2478u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2f247c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f247cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f2480: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f2480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2484: 0x121200  sll         $v0, $s2, 8
    ctx->pc = 0x2f2484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x2f2488: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f2488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f248c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f248cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f2490: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2f2490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2f2494: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2f2494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2f2498: 0xe29023  subu        $s2, $a3, $v0
    ctx->pc = 0x2f2498u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2f249c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2f249cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2f24a0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2f24a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f24a4: 0xc0bc8aa  jal         func_2F22A8
    ctx->pc = 0x2F24A4u;
    SET_GPR_U32(ctx, 31, 0x2F24ACu);
    ctx->pc = 0x2F24A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F24A4u;
    // 0x2f24a8: 0xffb40040  sd          $s4, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F22A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F22A8u, 0x2F24A4u, 0x2F24ACu)) {
        return;
    }
    ctx->pc = 0x2F24ACu;
label_2f24ac:
    // 0x2f24ac: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2f24acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f24b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f24b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f24b4: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2F24B4u;
    {
        const bool branch_taken_0x2f24b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F24B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24B4u;
        // 0x2f24b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f24b4) {
            ctx->pc = 0x2F2544u;
            goto label_2f2544;
        }
    }
    ctx->pc = 0x2F24BCu;
    // 0x2f24bc: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x2f24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x2f24c0: 0x3c170072  lui         $s7, 0x72
    ctx->pc = 0x2f24c0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)114 << 16));
    // 0x2f24c4: 0x222a018  mult        $s4, $s1, $v0
    ctx->pc = 0x2f24c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x2f24c8: 0x26f6b748  addiu       $s6, $s7, -0x48B8
    ctx->pc = 0x2f24c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948680));
    // 0x2f24cc: 0x26c20800  addiu       $v0, $s6, 0x800
    ctx->pc = 0x2f24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2048));
    // 0x2f24d0: 0x282a821  addu        $s5, $s4, $v0
    ctx->pc = 0x2f24d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2f24d4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2f24d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f24d8: 0x10700012  beq         $v1, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F24D8u;
    {
        const bool branch_taken_0x2f24d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24D8u;
        // 0x2f24dc: 0x24030898  addiu       $v1, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f24d8) {
            ctx->pc = 0x2F2524u;
            goto label_2f2524;
        }
    }
    ctx->pc = 0x2F24E0u;
    // 0x2f24e0: 0xc0bc8f2  jal         func_2F23C8
    ctx->pc = 0x2F24E0u;
    SET_GPR_U32(ctx, 31, 0x2F24E8u);
    ctx->pc = 0x2F24E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F24E0u;
    // 0x2f24e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F23C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F23C8u, 0x2F24E0u, 0x2F24E8u)) {
        return;
    }
    ctx->pc = 0x2F24E8u;
label_2f24e8:
    // 0x2f24e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F24E8u;
    {
        const bool branch_taken_0x2f24e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F24E8u;
        // 0x2f24ec: 0x26c50400  addiu       $a1, $s6, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f24e8) {
            ctx->pc = 0x2F250Cu;
            goto label_2f250c;
        }
    }
    ctx->pc = 0x2F24F0u;
    // 0x2f24f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f24f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f24f4: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x2f24f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2f24f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f24f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f24fc: 0xc0bd9ec  jal         func_2F67B0
    ctx->pc = 0x2F24FCu;
    SET_GPR_U32(ctx, 31, 0x2F2504u);
    ctx->pc = 0x2F2500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F24FCu;
    // 0x2f2500: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F67B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F67B0u, 0x2F24FCu, 0x2F2504u)) {
        return;
    }
    ctx->pc = 0x2F2504u;
label_2f2504:
    // 0x2f2504: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2504u;
    {
        const bool branch_taken_0x2f2504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2504) {
            ctx->pc = 0x2F2508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2504u;
            // 0x2f2508: 0xaeb00000  sw          $s0, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2520u;
            goto label_2f2520;
        }
    }
    ctx->pc = 0x2F250Cu;
label_2f250c:
    // 0x2f250c: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f250cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f2510: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f2510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2514: 0x3463006f  ori         $v1, $v1, 0x6F
    ctx->pc = 0x2f2514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)111);
    // 0x2f2518: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F2518u;
    {
        const bool branch_taken_0x2f2518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2518u;
        // 0x2f251c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2518) {
            ctx->pc = 0x2F2544u;
            goto label_2f2544;
        }
    }
    ctx->pc = 0x2F2520u;
label_2f2520:
    // 0x2f2520: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x2f2520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
label_2f2524:
    // 0x2f2524: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x2f2524u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2f2528: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x2f2528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f252c: 0x26e2b748  addiu       $v0, $s7, -0x48B8
    ctx->pc = 0x2f252cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948680));
    // 0x2f2530: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2f2530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f2534: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f2534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f2538: 0x8c500400  lw          $s0, 0x400($v0)
    ctx->pc = 0x2f2538u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1024)));
    // 0x2f253c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2f253cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2f2540: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f2540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f2544:
    // 0x2f2544: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2f2544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f2548: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2f2548u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f254c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2f254cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f2550: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2f2550u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2554: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f2554u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2558: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f2558u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f255c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f255cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2560: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f2560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f2564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2568: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2568u;
        // 0x2f256c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2570u;
}
