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

// Function: sub_00300488
// Address: 0x300488 - 0x300570
void sub_00300488_0x300488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300488_0x300488");
#endif

    switch (ctx->pc) {
        case 0x3004a4u: goto label_3004a4;
        case 0x3004dcu: goto label_3004dc;
        case 0x30054cu: goto label_30054c;
        default: break;
    }

    ctx->pc = 0x300488u;

    // 0x300488: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x300488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30048c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30048cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x300490: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x300490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x300494: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x300494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300498: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x300498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30049c: 0xc0c01a6  jal         func_300698
    ctx->pc = 0x30049Cu;
    SET_GPR_U32(ctx, 31, 0x3004A4u);
    ctx->pc = 0x3004A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30049Cu;
    // 0x3004a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300698u, 0x30049Cu, 0x3004A4u)) {
        return;
    }
    ctx->pc = 0x3004A4u;
label_3004a4:
    // 0x3004a4: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x3004a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x3004a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3004A8u;
    {
        const bool branch_taken_0x3004a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3004ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004A8u;
        // 0x3004ac: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3004a8) {
            ctx->pc = 0x3004C0u;
            goto label_3004c0;
        }
    }
    ctx->pc = 0x3004B0u;
    // 0x3004b0: 0x8e02084c  lw          $v0, 0x84C($s0)
    ctx->pc = 0x3004b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    // 0x3004b4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x3004b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3004b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3004B8u;
    {
        const bool branch_taken_0x3004b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3004BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004B8u;
        // 0x3004bc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3004b8) {
            ctx->pc = 0x3004E8u;
            goto label_3004e8;
        }
    }
    ctx->pc = 0x3004C0u;
label_3004c0:
    // 0x3004c0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3004c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3004c4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3004c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3004c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3004c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3004cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3004ccu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x3004d0: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x3004d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x3004d4: 0xc0c00c2  jal         func_300308
    ctx->pc = 0x3004D4u;
    SET_GPR_U32(ctx, 31, 0x3004DCu);
    ctx->pc = 0x3004D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3004D4u;
    // 0x3004d8: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300308u, 0x3004D4u, 0x3004DCu)) {
        return;
    }
    ctx->pc = 0x3004DCu;
label_3004dc:
    // 0x3004dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3004dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3004e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3004e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3004e4: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x3004e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
label_3004e8:
    // 0x3004e8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3004e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3004ec: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x3004ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x3004f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3004f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3004f4: 0x2282825  or          $a1, $s1, $t0
    ctx->pc = 0x3004f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 8));
    // 0x3004f8: 0xae04084c  sw          $a0, 0x84C($s0)
    ctx->pc = 0x3004f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 4));
    // 0x3004fc: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x3004fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x300500: 0x8e060848  lw          $a2, 0x848($s0)
    ctx->pc = 0x300500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x300504: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x300504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x300508: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x300508u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x30050c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x30050cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x300510: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x300510u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x300514: 0xae07082c  sw          $a3, 0x82C($s0)
    ctx->pc = 0x300514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 7));
    // 0x300518: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x300518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x30051c: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30051Cu;
    {
        const bool branch_taken_0x30051c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x300520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30051Cu;
        // 0x300520: 0x868806  srlv        $s1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30051c) {
            ctx->pc = 0x300538u;
            goto label_300538;
        }
    }
    ctx->pc = 0x300524u;
    // 0x300524: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x300524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x300528: 0x50e20006  beql        $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x300528u;
    {
        const bool branch_taken_0x300528 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x300528) {
            ctx->pc = 0x30052Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300528u;
            // 0x30052c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300544u;
            goto label_300544;
        }
    }
    ctx->pc = 0x300530u;
    // 0x300530: 0x14e80003  bne         $a3, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300530u;
    {
        const bool branch_taken_0x300530 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x300534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300530u;
        // 0x300534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300530) {
            ctx->pc = 0x300540u;
            goto label_300540;
        }
    }
    ctx->pc = 0x300538u;
label_300538:
    // 0x300538: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x300538u;
    {
        const bool branch_taken_0x300538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300538u;
        // 0x30053c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300538) {
            ctx->pc = 0x300544u;
            goto label_300544;
        }
    }
    ctx->pc = 0x300540u;
label_300540:
    // 0x300540: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x300540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_300544:
    // 0x300544: 0xc0c00c2  jal         func_300308
    ctx->pc = 0x300544u;
    SET_GPR_U32(ctx, 31, 0x30054Cu);
    ctx->pc = 0x300548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300544u;
    // 0x300548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300308u, 0x300544u, 0x30054Cu)) {
        return;
    }
    ctx->pc = 0x30054Cu;
label_30054c:
    // 0x30054c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30054cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300550: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x300550u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x300554: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x300554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x300558: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x300558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
    // 0x30055c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30055cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300560: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x300560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300564: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x300564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300568: 0x3e00008  jr          $ra
    ctx->pc = 0x300568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300568u;
        // 0x30056c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300570u;
}
