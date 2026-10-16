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

// Function: sub_003021A8
// Address: 0x3021a8 - 0x3022e8
void sub_003021A8_0x3021a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003021A8_0x3021a8");
#endif

    switch (ctx->pc) {
        case 0x3021f8u: goto label_3021f8;
        case 0x302234u: goto label_302234;
        case 0x302250u: goto label_302250;
        case 0x30227cu: goto label_30227c;
        default: break;
    }

    ctx->pc = 0x3021a8u;

    // 0x3021a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3021a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3021ac: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3021acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3021b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3021b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3021b4: 0x34c62010  ori         $a2, $a2, 0x2010
    ctx->pc = 0x3021b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8208);
    // 0x3021b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3021b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3021bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3021bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3021c0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3021c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3021c4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3021c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3021c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3021c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3021cc: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x3021ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x3021d0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3021d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3021d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3021d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3021d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3021d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3021dc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3021dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3021e0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3021e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3021e4: 0xae300858  sw          $s0, 0x858($s1)
    ctx->pc = 0x3021e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2136), GPR_U32(ctx, 16));
    // 0x3021e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3021e8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x3021ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3021ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3021f0: 0xc0c0122  jal         func_300488
    ctx->pc = 0x3021F0u;
    SET_GPR_U32(ctx, 31, 0x3021F8u);
    ctx->pc = 0x3021F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3021F0u;
    // 0x3021f4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3021F0u, 0x3021F8u)) {
        return;
    }
    ctx->pc = 0x3021F8u;
label_3021f8:
    // 0x3021f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3021f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3021fc: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x3021fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x302200: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x302200u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x302204: 0x30750fff  andi        $s5, $v1, 0xFFF
    ctx->pc = 0x302204u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x302208: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x302208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x30220c: 0x122342  srl         $a0, $s2, 13
    ctx->pc = 0x30220cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 13));
    // 0x302210: 0x121bc2  srl         $v1, $s2, 15
    ctx->pc = 0x302210u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 15));
    // 0x302214: 0x30940003  andi        $s4, $a0, 0x3
    ctx->pc = 0x302214u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x302218: 0x30730003  andi        $s3, $v1, 0x3
    ctx->pc = 0x302218u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x30221c: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30221Cu;
    {
        const bool branch_taken_0x30221c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x302220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30221Cu;
        // 0x302220: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30221c) {
            ctx->pc = 0x302234u;
            goto label_302234;
        }
    }
    ctx->pc = 0x302224u;
    // 0x302224: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x302224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x302228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30222c: 0xc0bf75c  jal         func_2FDD70
    ctx->pc = 0x30222Cu;
    SET_GPR_U32(ctx, 31, 0x302234u);
    ctx->pc = 0x302230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30222Cu;
    // 0x302230: 0x24a50980  addiu       $a1, $a1, 0x980 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x30222Cu, 0x302234u)) {
        return;
    }
    ctx->pc = 0x302234u;
label_302234:
    // 0x302234: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x302234u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
    // 0x302238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30223c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30223cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x302240: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x302240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x302244: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x302244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
    // 0x302248: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302248u;
    SET_GPR_U32(ctx, 31, 0x302250u);
    ctx->pc = 0x30224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302248u;
    // 0x30224c: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302248u, 0x302250u)) {
        return;
    }
    ctx->pc = 0x302250u;
label_302250:
    // 0x302250: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x302250u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x302254: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x302254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x302258: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x302258u;
    {
        const bool branch_taken_0x302258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302258u;
        // 0x30225c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302258) {
            ctx->pc = 0x30227Cu;
            goto label_30227c;
        }
    }
    ctx->pc = 0x302260u;
    // 0x302260: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x302260u;
    {
        const bool branch_taken_0x302260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x302264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302260u;
        // 0x302264: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302260) {
            ctx->pc = 0x30227Cu;
            goto label_30227c;
        }
    }
    ctx->pc = 0x302268u;
    // 0x302268: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x302268u;
    {
        const bool branch_taken_0x302268 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302268u;
        // 0x30226c: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302268) {
            ctx->pc = 0x30227Cu;
            goto label_30227c;
        }
    }
    ctx->pc = 0x302270u;
    // 0x302270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302274: 0xc0bf75c  jal         func_2FDD70
    ctx->pc = 0x302274u;
    SET_GPR_U32(ctx, 31, 0x30227Cu);
    ctx->pc = 0x302278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302274u;
    // 0x302278: 0x24a509a8  addiu       $a1, $a1, 0x9A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x302274u, 0x30227Cu)) {
        return;
    }
    ctx->pc = 0x30227Cu;
label_30227c:
    // 0x30227c: 0x8e240134  lw          $a0, 0x134($s1)
    ctx->pc = 0x30227cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x302280: 0x154480  sll         $t0, $s5, 18
    ctx->pc = 0x302280u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 18));
    // 0x302284: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x302284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x302288: 0x124a80  sll         $t1, $s2, 10
    ctx->pc = 0x302288u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x30228c: 0x8e260144  lw          $a2, 0x144($s1)
    ctx->pc = 0x30228cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x302290: 0x133b00  sll         $a3, $s3, 12
    ctx->pc = 0x302290u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x302294: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x302294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x302298: 0x142b00  sll         $a1, $s4, 12
    ctx->pc = 0x302298u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
    // 0x30229c: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x30229cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x3022a0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3022a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3022a4: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x3022a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x3022a8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3022a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3022ac: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x3022acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3022b0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3022b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3022b4: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x3022b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x3022b8: 0xae270134  sw          $a3, 0x134($s1)
    ctx->pc = 0x3022b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 7));
    // 0x3022bc: 0xae250138  sw          $a1, 0x138($s1)
    ctx->pc = 0x3022bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 5));
    // 0x3022c0: 0xae260144  sw          $a2, 0x144($s1)
    ctx->pc = 0x3022c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 6));
    // 0x3022c4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3022c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3022c8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3022c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3022cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3022ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3022d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3022d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3022d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3022d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3022d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3022d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3022dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3022dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3022e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3022E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3022E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3022E0u;
        // 0x3022e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3022E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3022E8u;
}
