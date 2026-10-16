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

// Function: sub_00164248
// Address: 0x164248 - 0x1643d8
void sub_00164248_0x164248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164248_0x164248");
#endif

    switch (ctx->pc) {
        case 0x164280u: goto label_164280;
        case 0x1642bcu: goto label_1642bc;
        case 0x1642d8u: goto label_1642d8;
        case 0x164324u: goto label_164324;
        case 0x164334u: goto label_164334;
        case 0x164348u: goto label_164348;
        case 0x164360u: goto label_164360;
        case 0x164378u: goto label_164378;
        case 0x164380u: goto label_164380;
        case 0x164398u: goto label_164398;
        case 0x1643bcu: goto label_1643bc;
        default: break;
    }

    ctx->pc = 0x164248u;

label_164248:
    // 0x164248: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x164248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16424c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16424cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x164250: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x164250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x164254: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x164254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164258: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x164258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16425c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16425cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x164260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164264: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x164264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164268: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x164268u;
    {
        const bool branch_taken_0x164268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164268u;
        // 0x16426c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164268) {
            ctx->pc = 0x1643BCu;
            goto label_1643bc;
        }
    }
    ctx->pc = 0x164270u;
    // 0x164270: 0x26443c6c  addiu       $a0, $s2, 0x3C6C
    ctx->pc = 0x164270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 15468));
    // 0x164274: 0x26433c0c  addiu       $v1, $s2, 0x3C0C
    ctx->pc = 0x164274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 15372));
    // 0x164278: 0x2645648c  addiu       $a1, $s2, 0x648C
    ctx->pc = 0x164278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25740));
    // 0x16427c: 0x0  nop
    ctx->pc = 0x16427cu;
    // NOP
label_164280:
    // 0x164280: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x164280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164284: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x164284u;
    {
        const bool branch_taken_0x164284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164284) {
            ctx->pc = 0x164288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164284u;
            // 0x164288: 0x2463006c  addiu       $v1, $v1, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16429Cu;
            goto label_16429c;
        }
    }
    ctx->pc = 0x16428Cu;
    // 0x16428c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164290: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x164290u;
    {
        const bool branch_taken_0x164290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x164290) {
            ctx->pc = 0x164294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164290u;
            // 0x164294: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164298u;
            goto label_164298;
        }
    }
    ctx->pc = 0x164298u;
label_164298:
    // 0x164298: 0x2463006c  addiu       $v1, $v1, 0x6C
    ctx->pc = 0x164298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
label_16429c:
    // 0x16429c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x16429cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1642a0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1642A0u;
    {
        const bool branch_taken_0x1642a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1642A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642A0u;
        // 0x1642a4: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642a0) {
            ctx->pc = 0x164280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164280;
        }
    }
    ctx->pc = 0x1642A8u;
    // 0x1642a8: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1642a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1642ac: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1642ACu;
    {
        const bool branch_taken_0x1642ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1642ac) {
            ctx->pc = 0x1642B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1642ACu;
            // 0x1642b0: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1642C4u;
            goto label_1642c4;
        }
    }
    ctx->pc = 0x1642B4u;
    // 0x1642b4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1642B4u;
    SET_GPR_U32(ctx, 31, 0x1642BCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1642B4u, 0x1642BCu)) {
        return;
    }
    ctx->pc = 0x1642BCu;
label_1642bc:
    // 0x1642bc: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1642bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1642c0: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1642c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1642c4:
    // 0x1642c4: 0x8e130024  lw          $s3, 0x24($s0)
    ctx->pc = 0x1642c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1642c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1642C8u;
    {
        const bool branch_taken_0x1642c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1642CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642C8u;
        // 0x1642cc: 0x92110028  lbu         $s1, 0x28($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642c8) {
            ctx->pc = 0x1642DCu;
            goto label_1642dc;
        }
    }
    ctx->pc = 0x1642D0u;
    // 0x1642d0: 0xc07b542  jal         func_1ED508
    ctx->pc = 0x1642D0u;
    SET_GPR_U32(ctx, 31, 0x1642D8u);
    ctx->pc = 0x1642D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1642D0u;
    // 0x1642d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED508u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED508u, 0x1642D0u, 0x1642D8u)) {
        return;
    }
    ctx->pc = 0x1642D8u;
label_1642d8:
    // 0x1642d8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1642d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1642dc:
    // 0x1642dc: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x1642dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1642e0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1642e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1642e4: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x1642e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1642e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1642e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1642ec: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x1642ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1642f0: 0x54440017  bnel        $v0, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1642F0u;
    {
        const bool branch_taken_0x1642f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1642f0) {
            ctx->pc = 0x1642F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1642F0u;
            // 0x1642f4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164350u;
            goto label_164350;
        }
    }
    ctx->pc = 0x1642F8u;
    // 0x1642f8: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x1642f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1642fc: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1642FCu;
    {
        const bool branch_taken_0x1642fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x164300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642FCu;
        // 0x164300: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642fc) {
            ctx->pc = 0x164398u;
            goto label_164398;
        }
    }
    ctx->pc = 0x164304u;
    // 0x164304: 0x8c438664  lw          $v1, -0x799C($v0)
    ctx->pc = 0x164304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936164)));
    // 0x164308: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x164308u;
    {
        const bool branch_taken_0x164308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164308) {
            ctx->pc = 0x16431Cu;
            goto label_16431c;
        }
    }
    ctx->pc = 0x164310u;
    // 0x164310: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x164310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x164314: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x164314u;
    {
        const bool branch_taken_0x164314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164314) {
            ctx->pc = 0x16432Cu;
            goto label_16432c;
        }
    }
    ctx->pc = 0x16431Cu;
label_16431c:
    // 0x16431c: 0xc0572ca  jal         func_15CB28
    ctx->pc = 0x16431Cu;
    SET_GPR_U32(ctx, 31, 0x164324u);
    ctx->pc = 0x164320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16431Cu;
    // 0x164320: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CB28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15CB28u, 0x16431Cu, 0x164324u)) {
        return;
    }
    ctx->pc = 0x164324u;
label_164324:
    // 0x164324: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x164324u;
    {
        const bool branch_taken_0x164324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164324u;
        // 0x164328: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164324) {
            ctx->pc = 0x164398u;
            goto label_164398;
        }
    }
    ctx->pc = 0x16432Cu;
label_16432c:
    // 0x16432c: 0xc057376  jal         func_15CDD8
    ctx->pc = 0x16432Cu;
    SET_GPR_U32(ctx, 31, 0x164334u);
    ctx->pc = 0x15CDD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x15CDD8u, 0x16432Cu, 0x164334u)) {
        return;
    }
    ctx->pc = 0x164334u;
label_164334:
    // 0x164334: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x164334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x164338: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x164338u;
    {
        const bool branch_taken_0x164338 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164338u;
        // 0x16433c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164338) {
            ctx->pc = 0x1643C0u;
            goto label_1643c0;
        }
    }
    ctx->pc = 0x164340u;
    // 0x164340: 0xc059092  jal         func_164248
    ctx->pc = 0x164340u;
    SET_GPR_U32(ctx, 31, 0x164348u);
    ctx->pc = 0x164344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164340u;
    // 0x164344: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    goto label_164248;
    ctx->pc = 0x164348u;
label_164348:
    // 0x164348: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x164348u;
    {
        const bool branch_taken_0x164348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164348u;
        // 0x16434c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164348) {
            ctx->pc = 0x1643C0u;
            goto label_1643c0;
        }
    }
    ctx->pc = 0x164350u;
label_164350:
    // 0x164350: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164350u;
    {
        const bool branch_taken_0x164350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x164354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164350u;
        // 0x164354: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164350) {
            ctx->pc = 0x164364u;
            goto label_164364;
        }
    }
    ctx->pc = 0x164358u;
    // 0x164358: 0xc04207c  jal         func_1081F0
    ctx->pc = 0x164358u;
    SET_GPR_U32(ctx, 31, 0x164360u);
    ctx->pc = 0x16435Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164358u;
    // 0x16435c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1081F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1081F0u, 0x164358u, 0x164360u)) {
        return;
    }
    ctx->pc = 0x164360u;
label_164360:
    // 0x164360: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x164360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_164364:
    // 0x164364: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x164364u;
    {
        const bool branch_taken_0x164364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x164368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164364u;
        // 0x164368: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164364) {
            ctx->pc = 0x164380u;
            goto label_164380;
        }
    }
    ctx->pc = 0x16436Cu;
    // 0x16436c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16436cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164370: 0xc05ee9a  jal         func_17BA68
    ctx->pc = 0x164370u;
    SET_GPR_U32(ctx, 31, 0x164378u);
    ctx->pc = 0x164374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164370u;
    // 0x164374: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA68u, 0x164370u, 0x164378u)) {
        return;
    }
    ctx->pc = 0x164378u;
label_164378:
    // 0x164378: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x164378u;
    SET_GPR_U32(ctx, 31, 0x164380u);
    ctx->pc = 0x16437Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164378u;
    // 0x16437c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x164378u, 0x164380u)) {
        return;
    }
    ctx->pc = 0x164380u;
label_164380:
    // 0x164380: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x164380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x164384: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x164384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164388: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164388u;
    {
        const bool branch_taken_0x164388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x164388) {
            ctx->pc = 0x16438Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164388u;
            // 0x16438c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16439Cu;
            goto label_16439c;
        }
    }
    ctx->pc = 0x164390u;
    // 0x164390: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x164390u;
    SET_GPR_U32(ctx, 31, 0x164398u);
    ctx->pc = 0x164394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164390u;
    // 0x164394: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x164390u, 0x164398u)) {
        return;
    }
    ctx->pc = 0x164398u;
label_164398:
    // 0x164398: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x164398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_16439c:
    // 0x16439c: 0x8e426490  lw          $v0, 0x6490($s2)
    ctx->pc = 0x16439cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25744)));
    // 0x1643a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1643a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1643a4: 0xae426490  sw          $v0, 0x6490($s2)
    ctx->pc = 0x1643a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 25744), GPR_U32(ctx, 2));
    // 0x1643a8: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1643a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1643ac: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1643ACu;
    {
        const bool branch_taken_0x1643ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1643B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643ACu;
        // 0x1643b0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643ac) {
            ctx->pc = 0x1643C0u;
            goto label_1643c0;
        }
    }
    ctx->pc = 0x1643B4u;
    // 0x1643b4: 0xc059092  jal         func_164248
    ctx->pc = 0x1643B4u;
    SET_GPR_U32(ctx, 31, 0x1643BCu);
    ctx->pc = 0x1643B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1643B4u;
    // 0x1643b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    goto label_164248;
    ctx->pc = 0x1643BCu;
label_1643bc:
    // 0x1643bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1643bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1643c0:
    // 0x1643c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1643c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1643c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1643c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1643c8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1643c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1643cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1643ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1643d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1643D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1643D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643D0u;
        // 0x1643d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1643D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1643D8u;
}
