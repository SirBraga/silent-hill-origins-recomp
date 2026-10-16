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

// Function: sub_002A0268
// Address: 0x2a0268 - 0x2a03f8
void sub_002A0268_0x2a0268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0268_0x2a0268");
#endif

    switch (ctx->pc) {
        case 0x2a0298u: goto label_2a0298;
        case 0x2a02acu: goto label_2a02ac;
        case 0x2a02e4u: goto label_2a02e4;
        case 0x2a0318u: goto label_2a0318;
        case 0x2a0370u: goto label_2a0370;
        case 0x2a03b8u: goto label_2a03b8;
        default: break;
    }

    ctx->pc = 0x2a0268u;

    // 0x2a0268: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a0268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a026c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a026cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a0270: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a0270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a0274: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a0274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0278: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a0278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a027c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a027cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0280: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a0280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a0284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a0288: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a0288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a028c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a028cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0290: 0xc0a8080  jal         func_2A0200
    ctx->pc = 0x2A0290u;
    SET_GPR_U32(ctx, 31, 0x2A0298u);
    ctx->pc = 0x2A0294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0290u;
    // 0x2a0294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A0200u, 0x2A0290u, 0x2A0298u)) {
        return;
    }
    ctx->pc = 0x2A0298u;
label_2a0298:
    // 0x2a0298: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a0298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a029c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A029Cu;
    {
        const bool branch_taken_0x2a029c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A02A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A029Cu;
        // 0x2a02a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a029c) {
            ctx->pc = 0x2A02C0u;
            goto label_2a02c0;
        }
    }
    ctx->pc = 0x2A02A4u;
    // 0x2a02a4: 0xc0a7e74  jal         func_29F9D0
    ctx->pc = 0x2A02A4u;
    SET_GPR_U32(ctx, 31, 0x2A02ACu);
    ctx->pc = 0x2A02A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A02A4u;
    // 0x2a02a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F9D0u, 0x2A02A4u, 0x2A02ACu)) {
        return;
    }
    ctx->pc = 0x2A02ACu;
label_2a02ac:
    // 0x2a02ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a02acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a02b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a02b4: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2a02b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x2a02b8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2A02B8u;
    {
        const bool branch_taken_0x2a02b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A02BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A02B8u;
        // 0x2a02bc: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a02b8) {
            ctx->pc = 0x2A03D8u;
            goto label_2a03d8;
        }
    }
    ctx->pc = 0x2A02C0u;
label_2a02c0:
    // 0x2a02c0: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A02C0u;
    {
        const bool branch_taken_0x2a02c0 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x2A02C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A02C0u;
        // 0x2a02c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a02c0) {
            ctx->pc = 0x2A02D8u;
            goto label_2a02d8;
        }
    }
    ctx->pc = 0x2A02C8u;
    // 0x2a02c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a02c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02cc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2a02ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a02d0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2a02d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a02d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a02d8:
    // 0x2a02d8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2a02d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a02dc: 0xc0a7e74  jal         func_29F9D0
    ctx->pc = 0x2A02DCu;
    SET_GPR_U32(ctx, 31, 0x2A02E4u);
    ctx->pc = 0x2A02E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A02DCu;
    // 0x2a02e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29F9D0u, 0x2A02DCu, 0x2A02E4u)) {
        return;
    }
    ctx->pc = 0x2A02E4u;
label_2a02e4:
    // 0x2a02e4: 0x8e2a0010  lw          $t2, 0x10($s1)
    ctx->pc = 0x2a02e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2a02e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a02e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02ec: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2a02ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2a02f0: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x2a02f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2a02f4: 0x26460014  addiu       $a2, $s2, 0x14
    ctx->pc = 0x2a02f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2a02f8: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x2a02f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2a02fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a0300: 0xa670000e  sh          $s0, 0xE($s3)
    ctx->pc = 0x2a0300u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 16));
    // 0x2a0304: 0x1025821  addu        $t3, $t0, $v0
    ctx->pc = 0x2a0304u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2a0308: 0xc36021  addu        $t4, $a2, $v1
    ctx->pc = 0x2a0308u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a030c: 0x26670014  addiu       $a3, $s3, 0x14
    ctx->pc = 0x2a030cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x2a0310: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a0310u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0314: 0x0  nop
    ctx->pc = 0x2a0314u;
    // NOP
label_2a0318:
    // 0x2a0318: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x2a0318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a031c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a031cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a0320: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2a0320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2a0324: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2a0324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2a0328: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2a0328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2a032c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2a032cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a0330: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x2a0330u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x2a0334: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2a0334u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a0338: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2a0338u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2a033c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2a033cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2a0340: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x2a0340u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a0344: 0x34c03  sra         $t1, $v1, 16
    ctx->pc = 0x2a0344u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2a0348: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x2a0348u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a034c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2a034cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2a0350: 0xcc102b  sltu        $v0, $a2, $t4
    ctx->pc = 0x2a0350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x2a0354: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x2a0354u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a0358: 0x54c03  sra         $t1, $a1, 16
    ctx->pc = 0x2a0358u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2a035c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A035Cu;
    {
        const bool branch_taken_0x2a035c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A035Cu;
        // 0x2a0360: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a035c) {
            ctx->pc = 0x2A0318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0318;
        }
    }
    ctx->pc = 0x2A0364u;
    // 0x2a0364: 0x10b102b  sltu        $v0, $t0, $t3
    ctx->pc = 0x2a0364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x2a0368: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2A0368u;
    {
        const bool branch_taken_0x2a0368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0368) {
            ctx->pc = 0x2A036Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0368u;
            // 0x2a036c: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A03A8u;
            goto label_2a03a8;
        }
    }
    ctx->pc = 0x2A0370u;
label_2a0370:
    // 0x2a0370: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2a0370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a0374: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2a0374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2a0378: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2a0378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a037c: 0x10b202b  sltu        $a0, $t0, $t3
    ctx->pc = 0x2a037cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x2a0380: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2a0380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2a0384: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2a0384u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2a0388: 0x34c03  sra         $t1, $v1, 16
    ctx->pc = 0x2a0388u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2a038c: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x2a038cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a0390: 0x492821  addu        $a1, $v0, $t1
    ctx->pc = 0x2a0390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2a0394: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x2a0394u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a0398: 0x54c03  sra         $t1, $a1, 16
    ctx->pc = 0x2a0398u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2a039c: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2A039Cu;
    {
        const bool branch_taken_0x2a039c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A03A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A039Cu;
        // 0x2a03a0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a039c) {
            ctx->pc = 0x2A0370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0370;
        }
    }
    ctx->pc = 0x2A03A4u;
    // 0x2a03a4: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x2a03a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_2a03a8:
    // 0x2a03a8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2a03a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a03ac: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2A03ACu;
    {
        const bool branch_taken_0x2a03ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a03ac) {
            ctx->pc = 0x2A03B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A03ACu;
            // 0x2a03b0: 0xae6a0010  sw          $t2, 0x10($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A03D8u;
            goto label_2a03d8;
        }
    }
    ctx->pc = 0x2A03B4u;
    // 0x2a03b4: 0x0  nop
    ctx->pc = 0x2a03b4u;
    // NOP
label_2a03b8:
    // 0x2a03b8: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x2a03b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x2a03bc: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x2a03bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2a03c0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2a03c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a03c4: 0x0  nop
    ctx->pc = 0x2a03c4u;
    // NOP
    // 0x2a03c8: 0x0  nop
    ctx->pc = 0x2a03c8u;
    // NOP
    // 0x2a03cc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A03CCu;
    {
        const bool branch_taken_0x2a03cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a03cc) {
            ctx->pc = 0x2A03B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a03b8;
        }
    }
    ctx->pc = 0x2A03D4u;
    // 0x2a03d4: 0xae6a0010  sw          $t2, 0x10($s3)
    ctx->pc = 0x2a03d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 10));
label_2a03d8:
    // 0x2a03d8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2a03d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a03dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a03dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a03e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a03e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a03e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a03e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a03e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a03e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a03ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a03ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a03f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A03F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A03F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03F0u;
        // 0x2a03f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A03F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A03F8u;
}
