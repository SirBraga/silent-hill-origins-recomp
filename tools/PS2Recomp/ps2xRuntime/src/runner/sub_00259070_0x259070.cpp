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

// Function: sub_00259070
// Address: 0x259070 - 0x2591c8
void sub_00259070_0x259070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259070_0x259070");
#endif

    ctx->pc = 0x259070u;

    // 0x259070: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x259070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259074: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x259074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x259078: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x259078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25907c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x25907cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259080: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x259080u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x259084: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x259084u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x259088: 0x15090003  bne         $t0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x259088u;
    {
        const bool branch_taken_0x259088 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x25908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259088u;
        // 0x25908c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259088) {
            ctx->pc = 0x259098u;
            goto label_259098;
        }
    }
    ctx->pc = 0x259090u;
    // 0x259090: 0x3e00008  jr          $ra
    ctx->pc = 0x259090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259090u;
        // 0x259094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259098u;
label_259098:
    // 0x259098: 0x11000013  beqz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x259098u;
    {
        const bool branch_taken_0x259098 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x259098) {
            ctx->pc = 0x2590E8u;
            goto label_2590e8;
        }
    }
    ctx->pc = 0x2590A0u;
    // 0x2590a0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2590a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2590a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2590A4u;
    {
        const bool branch_taken_0x2590a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2590A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590A4u;
        // 0x2590a8: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590a4) {
            ctx->pc = 0x2590D8u;
            goto label_2590d8;
        }
    }
    ctx->pc = 0x2590ACu;
    // 0x2590ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2590acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2590b0: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x2590b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x2590b4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2590b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2590b8: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x2590b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x2590bc: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2590BCu;
    {
        const bool branch_taken_0x2590bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2590C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590BCu;
        // 0x2590c0: 0x24020300  addiu       $v0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590bc) {
            ctx->pc = 0x2590D4u;
            goto label_2590d4;
        }
    }
    ctx->pc = 0x2590C4u;
    // 0x2590c4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2590C4u;
    {
        const bool branch_taken_0x2590c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2590C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590C4u;
        // 0x2590c8: 0x24020500  addiu       $v0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590c4) {
            ctx->pc = 0x2590D4u;
            goto label_2590d4;
        }
    }
    ctx->pc = 0x2590CCu;
    // 0x2590cc: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2590CCu;
    {
        const bool branch_taken_0x2590cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2590cc) {
            ctx->pc = 0x2590D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2590CCu;
            // 0x2590d0: 0x91020007  lbu         $v0, 0x7($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2590DCu;
            goto label_2590dc;
        }
    }
    ctx->pc = 0x2590D4u;
label_2590d4:
    // 0x2590d4: 0x240d0010  addiu       $t5, $zero, 0x10
    ctx->pc = 0x2590d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2590d8:
    // 0x2590d8: 0x91020007  lbu         $v0, 0x7($t0)
    ctx->pc = 0x2590d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
label_2590dc:
    // 0x2590dc: 0x35a30010  ori         $v1, $t5, 0x10
    ctx->pc = 0x2590dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)16);
    // 0x2590e0: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x2590e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x2590e4: 0x62680b  movn        $t5, $v1, $v0
    ctx->pc = 0x2590e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3));
label_2590e8:
    // 0x2590e8: 0x51200016  beql        $t1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2590E8u;
    {
        const bool branch_taken_0x2590e8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2590e8) {
            ctx->pc = 0x2590ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2590E8u;
            // 0x2590ec: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259144u;
            goto label_259144;
        }
    }
    ctx->pc = 0x2590F0u;
    // 0x2590f0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2590f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2590f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2590F4u;
    {
        const bool branch_taken_0x2590f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2590F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590F4u;
        // 0x2590f8: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590f4) {
            ctx->pc = 0x259130u;
            goto label_259130;
        }
    }
    ctx->pc = 0x2590FCu;
    // 0x2590fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2590fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259100: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x259100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x259104: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x259104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x259108: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x259108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x25910c: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25910Cu;
    {
        const bool branch_taken_0x25910c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x25910c) {
            ctx->pc = 0x259110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25910Cu;
            // 0x259110: 0x240c0010  addiu       $t4, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259130u;
            goto label_259130;
        }
    }
    ctx->pc = 0x259114u;
    // 0x259114: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x259114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x259118: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x259118u;
    {
        const bool branch_taken_0x259118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x259118) {
            ctx->pc = 0x25911Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259118u;
            // 0x25911c: 0x240c0010  addiu       $t4, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259130u;
            goto label_259130;
        }
    }
    ctx->pc = 0x259120u;
    // 0x259120: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x259120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x259124: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259124u;
    {
        const bool branch_taken_0x259124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x259124) {
            ctx->pc = 0x259128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259124u;
            // 0x259128: 0x91220007  lbu         $v0, 0x7($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259134u;
            goto label_259134;
        }
    }
    ctx->pc = 0x25912Cu;
    // 0x25912c: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x25912cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_259130:
    // 0x259130: 0x91220007  lbu         $v0, 0x7($t1)
    ctx->pc = 0x259130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
label_259134:
    // 0x259134: 0x35830010  ori         $v1, $t4, 0x10
    ctx->pc = 0x259134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)16);
    // 0x259138: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x259138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x25913c: 0x62600b  movn        $t4, $v1, $v0
    ctx->pc = 0x25913cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3));
    // 0x259140: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x259140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_259144:
    // 0x259144: 0x35890008  ori         $t1, $t4, 0x8
    ctx->pc = 0x259144u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)8);
    // 0x259148: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x259148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25914c: 0x35ab0008  ori         $t3, $t5, 0x8
    ctx->pc = 0x25914cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)8);
    // 0x259150: 0x94e50010  lhu         $a1, 0x10($a3)
    ctx->pc = 0x259150u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x259154: 0x94c20010  lhu         $v0, 0x10($a2)
    ctx->pc = 0x259154u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x259158: 0x94e80012  lhu         $t0, 0x12($a3)
    ctx->pc = 0x259158u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x25915c: 0x94c30012  lhu         $v1, 0x12($a2)
    ctx->pc = 0x25915cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x259160: 0xa2202b  sltu        $a0, $a1, $v0
    ctx->pc = 0x259160u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x259164: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x259164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x259168: 0x124600b  movn        $t4, $t1, $a0
    ctx->pc = 0x259168u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9));
    // 0x25916c: 0x103502b  sltu        $t2, $t0, $v1
    ctx->pc = 0x25916cu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x259170: 0x162680b  movn        $t5, $t3, $v0
    ctx->pc = 0x259170u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11));
    // 0x259174: 0x68182b  sltu        $v1, $v1, $t0
    ctx->pc = 0x259174u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x259178: 0x94e9000e  lhu         $t1, 0xE($a3)
    ctx->pc = 0x259178u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x25917c: 0x94c5000e  lhu         $a1, 0xE($a2)
    ctx->pc = 0x25917cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x259180: 0x35a20004  ori         $v0, $t5, 0x4
    ctx->pc = 0x259180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)4);
    // 0x259184: 0x94e8000c  lhu         $t0, 0xC($a3)
    ctx->pc = 0x259184u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x259188: 0x43680b  movn        $t5, $v0, $v1
    ctx->pc = 0x259188u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2));
    // 0x25918c: 0x125382b  sltu        $a3, $t1, $a1
    ctx->pc = 0x25918cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x259190: 0x35840004  ori         $a0, $t4, 0x4
    ctx->pc = 0x259190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)4);
    // 0x259194: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x259194u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x259198: 0x35a30002  ori         $v1, $t5, 0x2
    ctx->pc = 0x259198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)2);
    // 0x25919c: 0xa9282b  sltu        $a1, $a1, $t1
    ctx->pc = 0x25919cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2591a0: 0x8a600b  movn        $t4, $a0, $t2
    ctx->pc = 0x2591a0u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4));
    // 0x2591a4: 0x65680b  movn        $t5, $v1, $a1
    ctx->pc = 0x2591a4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3));
    // 0x2591a8: 0x35840002  ori         $a0, $t4, 0x2
    ctx->pc = 0x2591a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)2);
    // 0x2591ac: 0x102182b  sltu        $v1, $t0, $v0
    ctx->pc = 0x2591acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2591b0: 0x87600b  movn        $t4, $a0, $a3
    ctx->pc = 0x2591b0u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4));
    // 0x2591b4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2591b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2591b8: 0x1836025  or          $t4, $t4, $v1
    ctx->pc = 0x2591b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x2591bc: 0x1a26825  or          $t5, $t5, $v0
    ctx->pc = 0x2591bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x2591c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2591C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2591C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2591C0u;
        // 0x2591c4: 0x1ac1023  subu        $v0, $t5, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2591C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2591C8u;
}
