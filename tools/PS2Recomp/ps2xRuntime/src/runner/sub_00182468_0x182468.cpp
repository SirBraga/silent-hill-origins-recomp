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

// Function: sub_00182468
// Address: 0x182468 - 0x182568
void sub_00182468_0x182468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182468_0x182468");
#endif

    switch (ctx->pc) {
        case 0x1824a4u: goto label_1824a4;
        case 0x1824acu: goto label_1824ac;
        case 0x1824c0u: goto label_1824c0;
        case 0x1824d8u: goto label_1824d8;
        case 0x1824e0u: goto label_1824e0;
        case 0x1824e8u: goto label_1824e8;
        case 0x1824f4u: goto label_1824f4;
        case 0x182500u: goto label_182500;
        case 0x18250cu: goto label_18250c;
        case 0x182518u: goto label_182518;
        case 0x182524u: goto label_182524;
        case 0x182530u: goto label_182530;
        case 0x182538u: goto label_182538;
        default: break;
    }

    ctx->pc = 0x182468u;

    // 0x182468: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x182468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18246c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x18246cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x182470: 0x3c170034  lui         $s7, 0x34
    ctx->pc = 0x182470u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)52 << 16));
    // 0x182474: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x182474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x182478: 0x8ee289fc  lw          $v0, -0x7604($s7)
    ctx->pc = 0x182478u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3389FCu));
    // 0x18247c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x18247cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x182480: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x182480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x182484: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x182484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x182488: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x182488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18248c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x18248cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x182490: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x182490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x182494: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x182494u;
    {
        const bool branch_taken_0x182494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182494u;
        // 0x182498: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182494) {
            ctx->pc = 0x182538u;
            goto label_182538;
        }
    }
    ctx->pc = 0x18249Cu;
    // 0x18249c: 0xc08b848  jal         func_22E120
    ctx->pc = 0x18249Cu;
    SET_GPR_U32(ctx, 31, 0x1824A4u);
    ctx->pc = 0x1824A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18249Cu;
    // 0x1824a0: 0x3c11006c  lui         $s1, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x18249Cu, 0x1824A4u)) {
        return;
    }
    ctx->pc = 0x1824A4u;
label_1824a4:
    // 0x1824a4: 0xc08b848  jal         func_22E120
    ctx->pc = 0x1824A4u;
    SET_GPR_U32(ctx, 31, 0x1824ACu);
    ctx->pc = 0x1824A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1824A4u;
    // 0x1824a8: 0x3c12006c  lui         $s2, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)108 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x1824A4u, 0x1824ACu)) {
        return;
    }
    ctx->pc = 0x1824ACu;
label_1824ac:
    // 0x1824ac: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1824acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1824b0: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x1824b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x1824b4: 0x2484faf8  addiu       $a0, $a0, -0x508
    ctx->pc = 0x1824b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966008));
    // 0x1824b8: 0xc06054c  jal         func_181530
    ctx->pc = 0x1824B8u;
    SET_GPR_U32(ctx, 31, 0x1824C0u);
    ctx->pc = 0x1824BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1824B8u;
    // 0x1824bc: 0x3c14006c  lui         $s4, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181530u, 0x1824B8u, 0x1824C0u)) {
        return;
    }
    ctx->pc = 0x1824C0u;
label_1824c0:
    // 0x1824c0: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x1824c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x1824c4: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x1824c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x1824c8: 0x3c16006c  lui         $s6, 0x6C
    ctx->pc = 0x1824c8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    // 0x1824cc: 0x2610faa8  addiu       $s0, $s0, -0x558
    ctx->pc = 0x1824ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965928));
    // 0x1824d0: 0xc0be632  jal         func_2F98C8
    ctx->pc = 0x1824D0u;
    SET_GPR_U32(ctx, 31, 0x1824D8u);
    ctx->pc = 0x1824D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1824D0u;
    // 0x1824d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F98C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F98C8u, 0x1824D0u, 0x1824D8u)) {
        return;
    }
    ctx->pc = 0x1824D8u;
label_1824d8:
    // 0x1824d8: 0xc0be61a  jal         func_2F9868
    ctx->pc = 0x1824D8u;
    SET_GPR_U32(ctx, 31, 0x1824E0u);
    ctx->pc = 0x1824DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1824D8u;
    // 0x1824dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9868u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9868u, 0x1824D8u, 0x1824E0u)) {
        return;
    }
    ctx->pc = 0x1824E0u;
label_1824e0:
    // 0x1824e0: 0xc0c99e6  jal         func_326798
    ctx->pc = 0x1824E0u;
    SET_GPR_U32(ctx, 31, 0x1824E8u);
    ctx->pc = 0x1824E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1824E0u;
    // 0x1824e4: 0x8e24fa9c  lw          $a0, -0x564($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965916)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326798u, 0x1824E0u, 0x1824E8u)) {
        return;
    }
    ctx->pc = 0x1824E8u;
label_1824e8:
    // 0x1824e8: 0x8e44fa98  lw          $a0, -0x568($s2)
    ctx->pc = 0x1824e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294965912)));
    // 0x1824ec: 0xc0c5486  jal         func_315218
    ctx->pc = 0x1824ECu;
    SET_GPR_U32(ctx, 31, 0x1824F4u);
    ctx->pc = 0x1824F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1824ECu;
    // 0x1824f0: 0xae20fa9c  sw          $zero, -0x564($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965916), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x1824ECu, 0x1824F4u)) {
        return;
    }
    ctx->pc = 0x1824F4u;
label_1824f4:
    // 0x1824f4: 0x8e64fa90  lw          $a0, -0x570($s3)
    ctx->pc = 0x1824f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294965904)));
    // 0x1824f8: 0xc0c99e6  jal         func_326798
    ctx->pc = 0x1824F8u;
    SET_GPR_U32(ctx, 31, 0x182500u);
    ctx->pc = 0x1824FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1824F8u;
    // 0x1824fc: 0xae40fa98  sw          $zero, -0x568($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294965912), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326798u, 0x1824F8u, 0x182500u)) {
        return;
    }
    ctx->pc = 0x182500u;
label_182500:
    // 0x182500: 0x8e84fa94  lw          $a0, -0x56C($s4)
    ctx->pc = 0x182500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965908)));
    // 0x182504: 0xc0c5486  jal         func_315218
    ctx->pc = 0x182504u;
    SET_GPR_U32(ctx, 31, 0x18250Cu);
    ctx->pc = 0x182508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182504u;
    // 0x182508: 0xae60fa90  sw          $zero, -0x570($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294965904), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x182504u, 0x18250Cu)) {
        return;
    }
    ctx->pc = 0x18250Cu;
label_18250c:
    // 0x18250c: 0x8ea4fa80  lw          $a0, -0x580($s5)
    ctx->pc = 0x18250cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965888)));
    // 0x182510: 0xc0c5486  jal         func_315218
    ctx->pc = 0x182510u;
    SET_GPR_U32(ctx, 31, 0x182518u);
    ctx->pc = 0x182514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182510u;
    // 0x182514: 0xae80fa94  sw          $zero, -0x56C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294965908), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x182510u, 0x182518u)) {
        return;
    }
    ctx->pc = 0x182518u;
label_182518:
    // 0x182518: 0x8ec4faa0  lw          $a0, -0x560($s6)
    ctx->pc = 0x182518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294965920)));
    // 0x18251c: 0xc0c5486  jal         func_315218
    ctx->pc = 0x18251Cu;
    SET_GPR_U32(ctx, 31, 0x182524u);
    ctx->pc = 0x182520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18251Cu;
    // 0x182520: 0xaea0fa80  sw          $zero, -0x580($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965888), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x18251Cu, 0x182524u)) {
        return;
    }
    ctx->pc = 0x182524u;
label_182524:
    // 0x182524: 0x8ee489fc  lw          $a0, -0x7604($s7)
    ctx->pc = 0x182524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294937084)));
    // 0x182528: 0xc0c5486  jal         func_315218
    ctx->pc = 0x182528u;
    SET_GPR_U32(ctx, 31, 0x182530u);
    ctx->pc = 0x18252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182528u;
    // 0x18252c: 0xaec0faa0  sw          $zero, -0x560($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294965920), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x182528u, 0x182530u)) {
        return;
    }
    ctx->pc = 0x182530u;
label_182530:
    // 0x182530: 0xc060ba0  jal         func_182E80
    ctx->pc = 0x182530u;
    SET_GPR_U32(ctx, 31, 0x182538u);
    ctx->pc = 0x182534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182530u;
    // 0x182534: 0xaee089fc  sw          $zero, -0x7604($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294937084), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182E80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182E80u, 0x182530u, 0x182538u)) {
        return;
    }
    ctx->pc = 0x182538u;
label_182538:
    // 0x182538: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x182538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18253c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x18253cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x182540: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x182540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x182544: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x182544u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182548: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x182548u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18254c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x18254cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182550: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x182550u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182554: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x182554u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18255c: 0x3e00008  jr          $ra
    ctx->pc = 0x18255Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18255Cu;
        // 0x182560: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18255Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182564u;
    // 0x182564: 0x0  nop
    ctx->pc = 0x182564u;
    // NOP
    ctx->pc = 0x182568u;
}
