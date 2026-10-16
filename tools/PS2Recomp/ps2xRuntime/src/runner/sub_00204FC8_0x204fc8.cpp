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

// Function: sub_00204FC8
// Address: 0x204fc8 - 0x205110
void sub_00204FC8_0x204fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204FC8_0x204fc8");
#endif

    switch (ctx->pc) {
        case 0x204fc8u: goto label_204fc8;
        case 0x204fccu: goto label_204fcc;
        case 0x204fd0u: goto label_204fd0;
        case 0x204fd4u: goto label_204fd4;
        case 0x204fd8u: goto label_204fd8;
        case 0x204fdcu: goto label_204fdc;
        case 0x204fe0u: goto label_204fe0;
        case 0x204fe4u: goto label_204fe4;
        case 0x204fe8u: goto label_204fe8;
        case 0x204fecu: goto label_204fec;
        case 0x204ff0u: goto label_204ff0;
        case 0x204ff4u: goto label_204ff4;
        case 0x204ff8u: goto label_204ff8;
        case 0x204ffcu: goto label_204ffc;
        case 0x205000u: goto label_205000;
        case 0x205004u: goto label_205004;
        case 0x205008u: goto label_205008;
        case 0x20500cu: goto label_20500c;
        case 0x205010u: goto label_205010;
        case 0x205014u: goto label_205014;
        case 0x205018u: goto label_205018;
        case 0x20501cu: goto label_20501c;
        case 0x205020u: goto label_205020;
        case 0x205024u: goto label_205024;
        case 0x205028u: goto label_205028;
        case 0x20502cu: goto label_20502c;
        case 0x205030u: goto label_205030;
        case 0x205034u: goto label_205034;
        case 0x205038u: goto label_205038;
        case 0x20503cu: goto label_20503c;
        case 0x205040u: goto label_205040;
        case 0x205044u: goto label_205044;
        case 0x205048u: goto label_205048;
        case 0x20504cu: goto label_20504c;
        case 0x205050u: goto label_205050;
        case 0x205054u: goto label_205054;
        case 0x205058u: goto label_205058;
        case 0x20505cu: goto label_20505c;
        case 0x205060u: goto label_205060;
        case 0x205064u: goto label_205064;
        case 0x205068u: goto label_205068;
        case 0x20506cu: goto label_20506c;
        case 0x205070u: goto label_205070;
        case 0x205074u: goto label_205074;
        case 0x205078u: goto label_205078;
        case 0x20507cu: goto label_20507c;
        case 0x205080u: goto label_205080;
        case 0x205084u: goto label_205084;
        case 0x205088u: goto label_205088;
        case 0x20508cu: goto label_20508c;
        case 0x205090u: goto label_205090;
        case 0x205094u: goto label_205094;
        case 0x205098u: goto label_205098;
        case 0x20509cu: goto label_20509c;
        case 0x2050a0u: goto label_2050a0;
        case 0x2050a4u: goto label_2050a4;
        case 0x2050a8u: goto label_2050a8;
        case 0x2050acu: goto label_2050ac;
        case 0x2050b0u: goto label_2050b0;
        case 0x2050b4u: goto label_2050b4;
        case 0x2050b8u: goto label_2050b8;
        case 0x2050bcu: goto label_2050bc;
        case 0x2050c0u: goto label_2050c0;
        case 0x2050c4u: goto label_2050c4;
        case 0x2050c8u: goto label_2050c8;
        case 0x2050ccu: goto label_2050cc;
        case 0x2050d0u: goto label_2050d0;
        case 0x2050d4u: goto label_2050d4;
        case 0x2050d8u: goto label_2050d8;
        case 0x2050dcu: goto label_2050dc;
        case 0x2050e0u: goto label_2050e0;
        case 0x2050e4u: goto label_2050e4;
        case 0x2050e8u: goto label_2050e8;
        case 0x2050ecu: goto label_2050ec;
        case 0x2050f0u: goto label_2050f0;
        case 0x2050f4u: goto label_2050f4;
        case 0x2050f8u: goto label_2050f8;
        case 0x2050fcu: goto label_2050fc;
        case 0x205100u: goto label_205100;
        case 0x205104u: goto label_205104;
        case 0x205108u: goto label_205108;
        case 0x20510cu: goto label_20510c;
        default: break;
    }

    ctx->pc = 0x204fc8u;

label_204fc8:
    // 0x204fc8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x204fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_204fcc:
    // 0x204fcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x204fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204fd0:
    // 0x204fd0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x204fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_204fd4:
    // 0x204fd4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x204fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_204fd8:
    // 0x204fd8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x204fd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_204fdc:
    // 0x204fdc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x204fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_204fe0:
    // 0x204fe0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x204fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_204fe4:
    // 0x204fe4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x204fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_204fe8:
    // 0x204fe8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x204fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_204fec:
    // 0x204fec: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x204fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_204ff0:
    // 0x204ff0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x204ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_204ff4:
    // 0x204ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_204ff8:
    // 0x204ff8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x204ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_204ffc:
    // 0x204ffc: 0x8c950004  lw          $s5, 0x4($a0)
    ctx->pc = 0x204ffcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_205000:
    // 0x205000: 0x12a00036  beqz        $s5, . + 4 + (0x36 << 2)
label_205004:
    if (ctx->pc == 0x205004u) {
        ctx->pc = 0x205004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205000u;
        // 0x205004: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205008u;
        goto label_205008;
    }
    ctx->pc = 0x205000u;
    {
        const bool branch_taken_0x205000 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x205004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205000u;
        // 0x205004: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205000) {
            ctx->pc = 0x2050DCu;
            goto label_2050dc;
        }
    }
    ctx->pc = 0x205008u;
label_205008:
    // 0x205008: 0x3c1e0073  lui         $fp, 0x73
    ctx->pc = 0x205008u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)115 << 16));
label_20500c:
    // 0x20500c: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x20500cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_205010:
    // 0x205010: 0xc0c4ab8  jal         func_312AE0
label_205014:
    if (ctx->pc == 0x205014u) {
        ctx->pc = 0x205014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205010u;
        // 0x205014: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205018u;
        goto label_205018;
    }
    ctx->pc = 0x205010u;
    SET_GPR_U32(ctx, 31, 0x205018u);
    ctx->pc = 0x205014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205010u;
    // 0x205014: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x205010u, 0x205018u)) {
        return;
    }
    ctx->pc = 0x205018u;
label_205018:
    // 0x205018: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x205018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_20501c:
    // 0x20501c: 0x52140012  beql        $s0, $s4, . + 4 + (0x12 << 2)
label_205020:
    if (ctx->pc == 0x205020u) {
        ctx->pc = 0x205020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20501Cu;
        // 0x205020: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205024u;
        goto label_205024;
    }
    ctx->pc = 0x20501Cu;
    {
        const bool branch_taken_0x20501c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x20501c) {
            ctx->pc = 0x205020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20501Cu;
            // 0x205020: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205068u;
            goto label_205068;
        }
    }
    ctx->pc = 0x205024u;
label_205024:
    // 0x205024: 0x8202ffff  lb          $v0, -0x1($s0)
    ctx->pc = 0x205024u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
label_205028:
    // 0x205028: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x205028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_20502c:
    // 0x20502c: 0x5043000e  beql        $v0, $v1, . + 4 + (0xE << 2)
label_205030:
    if (ctx->pc == 0x205030u) {
        ctx->pc = 0x205030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20502Cu;
        // 0x205030: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205034u;
        goto label_205034;
    }
    ctx->pc = 0x20502Cu;
    {
        const bool branch_taken_0x20502c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20502c) {
            ctx->pc = 0x205030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20502Cu;
            // 0x205030: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205068u;
            goto label_205068;
        }
    }
    ctx->pc = 0x205034u;
label_205034:
    // 0x205034: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x205034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_205038:
    // 0x205038: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_20503c:
    if (ctx->pc == 0x20503Cu) {
        ctx->pc = 0x20503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205038u;
        // 0x20503c: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205040u;
        goto label_205040;
    }
    ctx->pc = 0x205038u;
    {
        const bool branch_taken_0x205038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205038u;
        // 0x20503c: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205038) {
            ctx->pc = 0x205064u;
            goto label_205064;
        }
    }
    ctx->pc = 0x205040u;
label_205040:
    // 0x205040: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x205040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_205044:
    // 0x205044: 0x0  nop
    ctx->pc = 0x205044u;
    // NOP
label_205048:
    // 0x205048: 0x52140007  beql        $s0, $s4, . + 4 + (0x7 << 2)
label_20504c:
    if (ctx->pc == 0x20504Cu) {
        ctx->pc = 0x20504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205048u;
        // 0x20504c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205050u;
        goto label_205050;
    }
    ctx->pc = 0x205048u;
    {
        const bool branch_taken_0x205048 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x205048) {
            ctx->pc = 0x20504Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205048u;
            // 0x20504c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205068u;
            goto label_205068;
        }
    }
    ctx->pc = 0x205050u;
label_205050:
    // 0x205050: 0x8202ffff  lb          $v0, -0x1($s0)
    ctx->pc = 0x205050u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967295)));
label_205054:
    // 0x205054: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
label_205058:
    if (ctx->pc == 0x205058u) {
        ctx->pc = 0x205058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205054u;
        // 0x205058: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20505Cu;
        goto label_20505c;
    }
    ctx->pc = 0x205054u;
    {
        const bool branch_taken_0x205054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x205054) {
            ctx->pc = 0x205058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205054u;
            // 0x205058: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205068u;
            goto label_205068;
        }
    }
    ctx->pc = 0x20505Cu;
label_20505c:
    // 0x20505c: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
label_205060:
    if (ctx->pc == 0x205060u) {
        ctx->pc = 0x205060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20505Cu;
        // 0x205060: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205064u;
        goto label_205064;
    }
    ctx->pc = 0x20505Cu;
    {
        const bool branch_taken_0x20505c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20505c) {
            ctx->pc = 0x205060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20505Cu;
            // 0x205060: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205048;
        }
    }
    ctx->pc = 0x205064u;
label_205064:
    // 0x205064: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x205064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_205068:
    // 0x205068: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_20506c:
    if (ctx->pc == 0x20506Cu) {
        ctx->pc = 0x20506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205068u;
        // 0x20506c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205070u;
        goto label_205070;
    }
    ctx->pc = 0x205068u;
    {
        const bool branch_taken_0x205068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205068u;
        // 0x20506c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205068) {
            ctx->pc = 0x2050C4u;
            goto label_2050c4;
        }
    }
    ctx->pc = 0x205070u;
label_205070:
    // 0x205070: 0x27d6108c  addiu       $s6, $fp, 0x108C
    ctx->pc = 0x205070u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 4236));
label_205074:
    // 0x205074: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x205074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_205078:
    // 0x205078: 0x119900  sll         $s3, $s1, 4
    ctx->pc = 0x205078u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_20507c:
    // 0x20507c: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x20507cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_205080:
    // 0x205080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x205080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205084:
    // 0x205084: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x205084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_205088:
    // 0x205088: 0x8ec2002c  lw          $v0, 0x2C($s6)
    ctx->pc = 0x205088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
label_20508c:
    // 0x20508c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x20508cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_205090:
    // 0x205090: 0x40f809  jalr        $v0
label_205094:
    if (ctx->pc == 0x205094u) {
        ctx->pc = 0x205094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205090u;
        // 0x205094: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205098u;
        goto label_205098;
    }
    ctx->pc = 0x205090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205098u);
        ctx->pc = 0x205094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205090u;
        // 0x205094: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205090u, 0x205098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205098u;
label_205098:
    // 0x205098: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_20509c:
    if (ctx->pc == 0x20509Cu) {
        ctx->pc = 0x20509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205098u;
        // 0x20509c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2050A0u;
        goto label_2050a0;
    }
    ctx->pc = 0x205098u;
    {
        const bool branch_taken_0x205098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205098) {
            ctx->pc = 0x20509Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205098u;
            // 0x20509c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2050B4u;
            goto label_2050b4;
        }
    }
    ctx->pc = 0x2050A0u;
label_2050a0:
    // 0x2050a0: 0x56e00001  bnel        $s7, $zero, . + 4 + (0x1 << 2)
label_2050a4:
    if (ctx->pc == 0x2050A4u) {
        ctx->pc = 0x2050A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050A0u;
        // 0x2050a4: 0xaef20000  sw          $s2, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2050A8u;
        goto label_2050a8;
    }
    ctx->pc = 0x2050A0u;
    {
        const bool branch_taken_0x2050a0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2050a0) {
            ctx->pc = 0x2050A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2050A0u;
            // 0x2050a4: 0xaef20000  sw          $s2, 0x0($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2050A8u;
            goto label_2050a8;
        }
    }
    ctx->pc = 0x2050A8u;
label_2050a8:
    // 0x2050a8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2050a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2050ac:
    // 0x2050ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_2050b0:
    if (ctx->pc == 0x2050B0u) {
        ctx->pc = 0x2050B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050ACu;
        // 0x2050b0: 0x531021  addu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2050B4u;
        goto label_2050b4;
    }
    ctx->pc = 0x2050ACu;
    {
        const bool branch_taken_0x2050ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2050B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050ACu;
        // 0x2050b0: 0x531021  addu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050ac) {
            ctx->pc = 0x2050C8u;
            goto label_2050c8;
        }
    }
    ctx->pc = 0x2050B4u;
label_2050b4:
    // 0x2050b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2050b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2050b8:
    // 0x2050b8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2050b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2050bc:
    // 0x2050bc: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
label_2050c0:
    if (ctx->pc == 0x2050C0u) {
        ctx->pc = 0x2050C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050BCu;
        // 0x2050c0: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2050C4u;
        goto label_2050c4;
    }
    ctx->pc = 0x2050BCu;
    {
        const bool branch_taken_0x2050bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2050bc) {
            ctx->pc = 0x2050C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2050BCu;
            // 0x2050c0: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205078;
        }
    }
    ctx->pc = 0x2050C4u;
label_2050c4:
    // 0x2050c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2050c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2050c8:
    // 0x2050c8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2050c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2050cc:
    // 0x2050cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2050d0:
    if (ctx->pc == 0x2050D0u) {
        ctx->pc = 0x2050D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050CCu;
        // 0x2050d0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2050D4u;
        goto label_2050d4;
    }
    ctx->pc = 0x2050CCu;
    {
        const bool branch_taken_0x2050cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2050D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050CCu;
        // 0x2050d0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2050cc) {
            ctx->pc = 0x2050DCu;
            goto label_2050dc;
        }
    }
    ctx->pc = 0x2050D4u;
label_2050d4:
    // 0x2050d4: 0x5480ffce  bnel        $a0, $zero, . + 4 + (-0x32 << 2)
label_2050d8:
    if (ctx->pc == 0x2050D8u) {
        ctx->pc = 0x2050D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050D4u;
        // 0x2050d8: 0x8eb20000  lw          $s2, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2050DCu;
        goto label_2050dc;
    }
    ctx->pc = 0x2050D4u;
    {
        const bool branch_taken_0x2050d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2050d4) {
            ctx->pc = 0x2050D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2050D4u;
            // 0x2050d8: 0x8eb20000  lw          $s2, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205010;
        }
    }
    ctx->pc = 0x2050DCu;
label_2050dc:
    // 0x2050dc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2050dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2050e0:
    // 0x2050e0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2050e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2050e4:
    // 0x2050e4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2050e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2050e8:
    // 0x2050e8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2050e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2050ec:
    // 0x2050ec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2050ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2050f0:
    // 0x2050f0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2050f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2050f4:
    // 0x2050f4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2050f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2050f8:
    // 0x2050f8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2050f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2050fc:
    // 0x2050fc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2050fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_205100:
    // 0x205100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_205104:
    // 0x205104: 0x3e00008  jr          $ra
label_205108:
    if (ctx->pc == 0x205108u) {
        ctx->pc = 0x205108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205104u;
        // 0x205108: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20510Cu;
        goto label_20510c;
    }
    ctx->pc = 0x205104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205104u;
        // 0x205108: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20510Cu;
label_20510c:
    // 0x20510c: 0x0  nop
    ctx->pc = 0x20510cu;
    // NOP
    ctx->pc = 0x205110u;
}
