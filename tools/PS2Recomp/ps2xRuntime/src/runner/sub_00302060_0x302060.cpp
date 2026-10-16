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

// Function: sub_00302060
// Address: 0x302060 - 0x3021a8
void sub_00302060_0x302060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302060_0x302060");
#endif

    switch (ctx->pc) {
        case 0x30207cu: goto label_30207c;
        case 0x30208cu: goto label_30208c;
        case 0x30209cu: goto label_30209c;
        case 0x3020b8u: goto label_3020b8;
        case 0x3020c8u: goto label_3020c8;
        case 0x3020e4u: goto label_3020e4;
        case 0x3020f4u: goto label_3020f4;
        case 0x302100u: goto label_302100;
        case 0x302108u: goto label_302108;
        case 0x302114u: goto label_302114;
        case 0x302124u: goto label_302124;
        default: break;
    }

    ctx->pc = 0x302060u;

    // 0x302060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x302064: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x302064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x302068: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x302068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30206c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x30206cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x302070: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x302074: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302074u;
    SET_GPR_U32(ctx, 31, 0x30207Cu);
    ctx->pc = 0x302078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302074u;
    // 0x302078: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302074u, 0x30207Cu)) {
        return;
    }
    ctx->pc = 0x30207Cu;
label_30207c:
    // 0x30207c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30207cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302084: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302084u;
    SET_GPR_U32(ctx, 31, 0x30208Cu);
    ctx->pc = 0x302088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302084u;
    // 0x302088: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302084u, 0x30208Cu)) {
        return;
    }
    ctx->pc = 0x30208Cu;
label_30208c:
    // 0x30208c: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x30208cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x302090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302094: 0xc0c0122  jal         func_300488
    ctx->pc = 0x302094u;
    SET_GPR_U32(ctx, 31, 0x30209Cu);
    ctx->pc = 0x302098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302094u;
    // 0x302098: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x302094u, 0x30209Cu)) {
        return;
    }
    ctx->pc = 0x30209Cu;
label_30209c:
    // 0x30209c: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x30209cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x3020a0: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x3020a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x3020a4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3020a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3020a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3020A8u;
    {
        const bool branch_taken_0x3020a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3020ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020A8u;
        // 0x3020ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020a8) {
            ctx->pc = 0x3020D0u;
            goto label_3020d0;
        }
    }
    ctx->pc = 0x3020B0u;
    // 0x3020b0: 0xc0c0122  jal         func_300488
    ctx->pc = 0x3020B0u;
    SET_GPR_U32(ctx, 31, 0x3020B8u);
    ctx->pc = 0x3020B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3020B0u;
    // 0x3020b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3020B0u, 0x3020B8u)) {
        return;
    }
    ctx->pc = 0x3020B8u;
label_3020b8:
    // 0x3020b8: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x3020b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x3020bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3020bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3020c0: 0xc0c0122  jal         func_300488
    ctx->pc = 0x3020C0u;
    SET_GPR_U32(ctx, 31, 0x3020C8u);
    ctx->pc = 0x3020C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3020C0u;
    // 0x3020c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3020C0u, 0x3020C8u)) {
        return;
    }
    ctx->pc = 0x3020C8u;
label_3020c8:
    // 0x3020c8: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x3020c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x3020cc: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x3020ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_3020d0:
    // 0x3020d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3020d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3020d4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3020D4u;
    {
        const bool branch_taken_0x3020d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3020D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020D4u;
        // 0x3020d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020d4) {
            ctx->pc = 0x30210Cu;
            goto label_30210c;
        }
    }
    ctx->pc = 0x3020DCu;
    // 0x3020dc: 0xc0c0122  jal         func_300488
    ctx->pc = 0x3020DCu;
    SET_GPR_U32(ctx, 31, 0x3020E4u);
    ctx->pc = 0x3020E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3020DCu;
    // 0x3020e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3020DCu, 0x3020E4u)) {
        return;
    }
    ctx->pc = 0x3020E4u;
label_3020e4:
    // 0x3020e4: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x3020e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
    // 0x3020e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3020e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3020ec: 0xc0c0122  jal         func_300488
    ctx->pc = 0x3020ECu;
    SET_GPR_U32(ctx, 31, 0x3020F4u);
    ctx->pc = 0x3020F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3020ECu;
    // 0x3020f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x3020ECu, 0x3020F4u)) {
        return;
    }
    ctx->pc = 0x3020F4u;
label_3020f4:
    // 0x3020f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3020F4u;
    {
        const bool branch_taken_0x3020f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3020F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020F4u;
        // 0x3020f8: 0xae020170  sw          $v0, 0x170($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020f4) {
            ctx->pc = 0x302108u;
            goto label_302108;
        }
    }
    ctx->pc = 0x3020FCu;
    // 0x3020fc: 0x0  nop
    ctx->pc = 0x3020fcu;
    // NOP
label_302100:
    // 0x302100: 0xc0c0a00  jal         func_302800
    ctx->pc = 0x302100u;
    SET_GPR_U32(ctx, 31, 0x302108u);
    ctx->pc = 0x302104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302100u;
    // 0x302104: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302800u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x302800u, 0x302100u, 0x302108u)) {
        return;
    }
    ctx->pc = 0x302108u;
label_302108:
    // 0x302108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30210c:
    // 0x30210c: 0xc0c0122  jal         func_300488
    ctx->pc = 0x30210Cu;
    SET_GPR_U32(ctx, 31, 0x302114u);
    ctx->pc = 0x302110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30210Cu;
    // 0x302110: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x30210Cu, 0x302114u)) {
        return;
    }
    ctx->pc = 0x302114u;
label_302114:
    // 0x302114: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x302114u;
    {
        const bool branch_taken_0x302114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302114u;
        // 0x302118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302114) {
            ctx->pc = 0x302100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_302100;
        }
    }
    ctx->pc = 0x30211Cu;
    // 0x30211c: 0xc0c097e  jal         func_3025F8
    ctx->pc = 0x30211Cu;
    SET_GPR_U32(ctx, 31, 0x302124u);
    ctx->pc = 0x302120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30211Cu;
    // 0x302120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3025F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3025F8u, 0x30211Cu, 0x302124u)) {
        return;
    }
    ctx->pc = 0x302124u;
label_302124:
    // 0x302124: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x302124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x302128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x302128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30212c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x302130: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x302130u;
    {
        const bool branch_taken_0x302130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x302134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302130u;
        // 0x302134: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302130) {
            ctx->pc = 0x302158u;
            goto label_302158;
        }
    }
    ctx->pc = 0x302138u;
    // 0x302138: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x302138u;
    {
        const bool branch_taken_0x302138 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x302138) {
            ctx->pc = 0x30213Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302138u;
            // 0x30213c: 0x8e02085c  lw          $v0, 0x85C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30215Cu;
            goto label_30215c;
        }
    }
    ctx->pc = 0x302140u;
    // 0x302140: 0x6230004  bgezl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x302140u;
    {
        const bool branch_taken_0x302140 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x302140) {
            ctx->pc = 0x302144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302140u;
            // 0x302144: 0xae000864  sw          $zero, 0x864($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302154u;
            goto label_302154;
        }
    }
    ctx->pc = 0x302148u;
    // 0x302148: 0x8e020864  lw          $v0, 0x864($s0)
    ctx->pc = 0x302148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2148)));
    // 0x30214c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x30214cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x302150: 0xae000864  sw          $zero, 0x864($s0)
    ctx->pc = 0x302150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
label_302154:
    // 0x302154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_302158:
    // 0x302158: 0x8e02085c  lw          $v0, 0x85C($s0)
    ctx->pc = 0x302158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
label_30215c:
    // 0x30215c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x30215cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x302160: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x302160u;
    {
        const bool branch_taken_0x302160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x302164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302160u;
        // 0x302164: 0xae0301bc  sw          $v1, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302160) {
            ctx->pc = 0x30217Cu;
            goto label_30217c;
        }
    }
    ctx->pc = 0x302168u;
    // 0x302168: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x302168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x30216c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x30216Cu;
    {
        const bool branch_taken_0x30216c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30216c) {
            ctx->pc = 0x302170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30216Cu;
            // 0x302170: 0x8e020860  lw          $v0, 0x860($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302180u;
            goto label_302180;
        }
    }
    ctx->pc = 0x302174u;
    // 0x302174: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x302174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x302178: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x302178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_30217c:
    // 0x30217c: 0x8e020860  lw          $v0, 0x860($s0)
    ctx->pc = 0x30217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
label_302180:
    // 0x302180: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x302180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x302184: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302188: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x302188u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x30218c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x30218cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302190: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x302190u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x302194: 0xae020860  sw          $v0, 0x860($s0)
    ctx->pc = 0x302194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2144), GPR_U32(ctx, 2));
    // 0x302198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x302198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30219c: 0x3e00008  jr          $ra
    ctx->pc = 0x30219Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3021A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30219Cu;
        // 0x3021a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30219Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3021A4u;
    // 0x3021a4: 0x0  nop
    ctx->pc = 0x3021a4u;
    // NOP
    ctx->pc = 0x3021a8u;
}
