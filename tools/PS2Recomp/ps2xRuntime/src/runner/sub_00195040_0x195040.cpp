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

// Function: sub_00195040
// Address: 0x195040 - 0x195160
void sub_00195040_0x195040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195040_0x195040");
#endif

    switch (ctx->pc) {
        case 0x195098u: goto label_195098;
        case 0x1950a8u: goto label_1950a8;
        case 0x1950acu: goto label_1950ac;
        case 0x1950c4u: goto label_1950c4;
        case 0x1950d0u: goto label_1950d0;
        case 0x1950dcu: goto label_1950dc;
        case 0x1950f4u: goto label_1950f4;
        case 0x195104u: goto label_195104;
        default: break;
    }

    ctx->pc = 0x195040u;

    // 0x195040: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x195040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x195044: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x195044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x195048: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x195048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x19504c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x19504cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195050: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x195050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x195054: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x195054u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195058: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x195058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x19505c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x19505cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x195060: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x195060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x195064: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x195064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x195068: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x195068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x19506c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x19506cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x195070: 0x1280002d  beqz        $s4, . + 4 + (0x2D << 2)
    ctx->pc = 0x195070u;
    {
        const bool branch_taken_0x195070 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x195074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195070u;
        // 0x195074: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195070) {
            ctx->pc = 0x195128u;
            goto label_195128;
        }
    }
    ctx->pc = 0x195078u;
    // 0x195078: 0x12a0002c  beqz        $s5, . + 4 + (0x2C << 2)
    ctx->pc = 0x195078u;
    {
        const bool branch_taken_0x195078 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x19507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195078u;
        // 0x19507c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195078) {
            ctx->pc = 0x19512Cu;
            goto label_19512c;
        }
    }
    ctx->pc = 0x195080u;
    // 0x195080: 0x8e930018  lw          $s3, 0x18($s4)
    ctx->pc = 0x195080u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x195084: 0x12600022  beqz        $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x195084u;
    {
        const bool branch_taken_0x195084 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x195088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195084u;
        // 0x195088: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195084) {
            ctx->pc = 0x195110u;
            goto label_195110;
        }
    }
    ctx->pc = 0x19508Cu;
    // 0x19508c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19508cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195090: 0xc0a1b62  jal         func_286D88
    ctx->pc = 0x195090u;
    SET_GPR_U32(ctx, 31, 0x195098u);
    ctx->pc = 0x195094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195090u;
    // 0x195094: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286D88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x286D88u, 0x195090u, 0x195098u)) {
        return;
    }
    ctx->pc = 0x195098u;
label_195098:
    // 0x195098: 0x3c1e006a  lui         $fp, 0x6A
    ctx->pc = 0x195098u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)106 << 16));
    // 0x19509c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19509Cu;
    {
        const bool branch_taken_0x19509c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1950A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19509Cu;
        // 0x1950a0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19509c) {
            ctx->pc = 0x1950ACu;
            goto label_1950ac;
        }
    }
    ctx->pc = 0x1950A4u;
    // 0x1950a4: 0x0  nop
    ctx->pc = 0x1950a4u;
    // NOP
label_1950a8:
    // 0x1950a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1950a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1950ac:
    // 0x1950ac: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x1950acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1950b0: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1950B0u;
    {
        const bool branch_taken_0x1950b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1950b0) {
            ctx->pc = 0x1950B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1950B0u;
            // 0x1950b4: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195114u;
            goto label_195114;
        }
    }
    ctx->pc = 0x1950B8u;
    // 0x1950b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1950b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1950bc: 0xc0a1b56  jal         func_286D58
    ctx->pc = 0x1950BCu;
    SET_GPR_U32(ctx, 31, 0x1950C4u);
    ctx->pc = 0x1950C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1950BCu;
    // 0x1950c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x286D58u, 0x1950BCu, 0x1950C4u)) {
        return;
    }
    ctx->pc = 0x1950C4u;
label_1950c4:
    // 0x1950c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1950c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1950c8: 0xc0a1c22  jal         func_287088
    ctx->pc = 0x1950C8u;
    SET_GPR_U32(ctx, 31, 0x1950D0u);
    ctx->pc = 0x1950CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1950C8u;
    // 0x1950cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287088u, 0x1950C8u, 0x1950D0u)) {
        return;
    }
    ctx->pc = 0x1950D0u;
label_1950d0:
    // 0x1950d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1950d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1950d4: 0xc0a1c20  jal         func_287080
    ctx->pc = 0x1950D4u;
    SET_GPR_U32(ctx, 31, 0x1950DCu);
    ctx->pc = 0x1950D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1950D4u;
    // 0x1950d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287080u, 0x1950D4u, 0x1950DCu)) {
        return;
    }
    ctx->pc = 0x1950DCu;
label_1950dc:
    // 0x1950dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1950dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1950e0: 0x5603fff2  bnel        $s0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1950E0u;
    {
        const bool branch_taken_0x1950e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1950e0) {
            ctx->pc = 0x1950E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1950E0u;
            // 0x1950e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1950ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1950ac;
        }
    }
    ctx->pc = 0x1950E8u;
    // 0x1950e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1950e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1950ec: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x1950ECu;
    SET_GPR_U32(ctx, 31, 0x1950F4u);
    ctx->pc = 0x1950F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1950ECu;
    // 0x1950f0: 0x27c59ad0  addiu       $a1, $fp, -0x6530 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x1950ECu, 0x1950F4u)) {
        return;
    }
    ctx->pc = 0x1950F4u;
label_1950f4:
    // 0x1950f4: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1950F4u;
    {
        const bool branch_taken_0x1950f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1950F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950F4u;
        // 0x1950f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950f4) {
            ctx->pc = 0x1950A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1950a8;
        }
    }
    ctx->pc = 0x1950FCu;
    // 0x1950fc: 0xc0a1c24  jal         func_287090
    ctx->pc = 0x1950FCu;
    SET_GPR_U32(ctx, 31, 0x195104u);
    ctx->pc = 0x195100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1950FCu;
    // 0x195100: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287090u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287090u, 0x1950FCu, 0x195104u)) {
        return;
    }
    ctx->pc = 0x195104u;
label_195104:
    // 0x195104: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x195104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x195108: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x195108u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19510c: 0x43b00a  movz        $s6, $v0, $v1
    ctx->pc = 0x19510cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2));
label_195110:
    // 0x195110: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x195110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_195114:
    // 0x195114: 0x16c20005  bne         $s6, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195114u;
    {
        const bool branch_taken_0x195114 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x195118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195114u;
        // 0x195118: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195114) {
            ctx->pc = 0x19512Cu;
            goto label_19512c;
        }
    }
    ctx->pc = 0x19511Cu;
    // 0x19511c: 0xaeb40004  sw          $s4, 0x4($s5)
    ctx->pc = 0x19511cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 20));
    // 0x195120: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195120u;
    {
        const bool branch_taken_0x195120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195120u;
        // 0x195124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195120) {
            ctx->pc = 0x19512Cu;
            goto label_19512c;
        }
    }
    ctx->pc = 0x195128u;
label_195128:
    // 0x195128: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x195128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19512c:
    // 0x19512c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x19512cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x195130: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x195130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195134: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x195134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x195138: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x195138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19513c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x19513cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x195140: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x195140u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195144: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x195144u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195148: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x195148u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19514c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x19514cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195154: 0x3e00008  jr          $ra
    ctx->pc = 0x195154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195154u;
        // 0x195158: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19515Cu;
    // 0x19515c: 0x0  nop
    ctx->pc = 0x19515cu;
    // NOP
    ctx->pc = 0x195160u;
}
