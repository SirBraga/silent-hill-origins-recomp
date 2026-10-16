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

// Function: sub_00306230
// Address: 0x306230 - 0x306360
void sub_00306230_0x306230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306230_0x306230");
#endif

    switch (ctx->pc) {
        case 0x306258u: goto label_306258;
        case 0x306268u: goto label_306268;
        case 0x306278u: goto label_306278;
        case 0x306284u: goto label_306284;
        case 0x3062a0u: goto label_3062a0;
        case 0x3062d0u: goto label_3062d0;
        default: break;
    }

    ctx->pc = 0x306230u;

    // 0x306230: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x306230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x306234: 0x2cd90004  sltiu       $t9, $a2, 0x4
    ctx->pc = 0x306234u;
    SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x306238: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x306238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x30623c: 0x27ad000c  addiu       $t5, $sp, 0xC
    ctx->pc = 0x30623cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x306240: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x306240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x306244: 0x68080  sll         $s0, $a2, 2
    ctx->pc = 0x306244u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x306248: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x306248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x30624c: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x30624cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x306250: 0x25adfff4  addiu       $t5, $t5, -0xC
    ctx->pc = 0x306250u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967284));
    // 0x306254: 0x0  nop
    ctx->pc = 0x306254u;
    // NOP
label_306258:
    // 0x306258: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x306258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x30625c: 0x8da50004  lw          $a1, 0x4($t5)
    ctx->pc = 0x30625cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x306260: 0x8da80008  lw          $t0, 0x8($t5)
    ctx->pc = 0x306260u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x306264: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x306264u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_306268:
    // 0x306268: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x306268u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30626c: 0x87042  srl         $t6, $t0, 1
    ctx->pc = 0x30626cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x306270: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x306270u;
    {
        const bool branch_taken_0x306270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306270u;
        // 0x306274: 0x871821  addu        $v1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306270) {
            ctx->pc = 0x306284u;
            goto label_306284;
        }
    }
    ctx->pc = 0x306278u;
label_306278:
    // 0x306278: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x306278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x30627c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x30627Cu;
    {
        const bool branch_taken_0x30627c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30627Cu;
        // 0x306280: 0x871821  addu        $v1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30627c) {
            ctx->pc = 0x306308u;
            goto label_306308;
        }
    }
    ctx->pc = 0x306284u;
label_306284:
    // 0x306284: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x306284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x306288: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x306288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x30628c: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30628Cu;
    {
        const bool branch_taken_0x30628c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30628c) {
            ctx->pc = 0x306290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30628Cu;
            // 0x306290: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306278;
        }
    }
    ctx->pc = 0x306294u;
    // 0x306294: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x306294u;
    {
        const bool branch_taken_0x306294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306294u;
        // 0x306298: 0xa71821  addu        $v1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306294) {
            ctx->pc = 0x3062ACu;
            goto label_3062ac;
        }
    }
    ctx->pc = 0x30629Cu;
    // 0x30629c: 0x0  nop
    ctx->pc = 0x30629cu;
    // NOP
label_3062a0:
    // 0x3062a0: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x3062a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3062a4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3062A4u;
    {
        const bool branch_taken_0x3062a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3062A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062A4u;
        // 0x3062a8: 0xa71821  addu        $v1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062a4) {
            ctx->pc = 0x306308u;
            goto label_306308;
        }
    }
    ctx->pc = 0x3062ACu;
label_3062ac:
    // 0x3062ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3062acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3062b0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x3062b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x3062b4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3062B4u;
    {
        const bool branch_taken_0x3062b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3062b4) {
            ctx->pc = 0x3062B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3062B4u;
            // 0x3062b8: 0xa62823  subu        $a1, $a1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3062A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3062a0;
        }
    }
    ctx->pc = 0x3062BCu;
    // 0x3062bc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3062bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3062c0: 0xa65823  subu        $t3, $a1, $a2
    ctx->pc = 0x3062c0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3062c4: 0x1266021  addu        $t4, $t1, $a2
    ctx->pc = 0x3062c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x3062c8: 0x1720000a  bnez        $t9, . + 4 + (0xA << 2)
    ctx->pc = 0x3062C8u;
    {
        const bool branch_taken_0x3062c8 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x3062CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062C8u;
        // 0x3062cc: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062c8) {
            ctx->pc = 0x3062F4u;
            goto label_3062f4;
        }
    }
    ctx->pc = 0x3062D0u;
label_3062d0:
    // 0x3062d0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3062d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3062d4: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x3062d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x3062d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3062d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3062dc: 0x2d440004  sltiu       $a0, $t2, 0x4
    ctx->pc = 0x3062dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3062e0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3062e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3062e4: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x3062e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x3062e8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3062e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3062ec: 0x1080fff8  beqz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3062ECu;
    {
        const bool branch_taken_0x3062ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3062F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062ECu;
        // 0x3062f0: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3062ec) {
            ctx->pc = 0x3062D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3062d0;
        }
    }
    ctx->pc = 0x3062F4u;
label_3062f4:
    // 0x3062f4: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x3062f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3062f8: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3062f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3062fc: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x3062fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x306300: 0x1040ffe0  beqz        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x306300u;
    {
        const bool branch_taken_0x306300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306300u;
        // 0x306304: 0x871821  addu        $v1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306300) {
            ctx->pc = 0x306284u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306284;
        }
    }
    ctx->pc = 0x306308u;
label_306308:
    // 0x306308: 0x11c00010  beqz        $t6, . + 4 + (0x10 << 2)
    ctx->pc = 0x306308u;
    {
        const bool branch_taken_0x306308 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x30630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306308u;
        // 0x30630c: 0x1c0402d  daddu       $t0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306308) {
            ctx->pc = 0x30634Cu;
            goto label_30634c;
        }
    }
    ctx->pc = 0x306310u;
    // 0x306310: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x306310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x306314: 0x2064821  addu        $t1, $s0, $a2
    ctx->pc = 0x306314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x306318: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x306318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x30631c: 0x1e2102b  sltu        $v0, $t7, $v0
    ctx->pc = 0x30631cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x306320: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x306320u;
    {
        const bool branch_taken_0x306320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306320u;
        // 0x306324: 0x862823  subu        $a1, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306320) {
            ctx->pc = 0x306338u;
            goto label_306338;
        }
    }
    ctx->pc = 0x306328u;
    // 0x306328: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x306328u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x30632c: 0xadaf0004  sw          $t7, 0x4($t5)
    ctx->pc = 0x30632cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 15));
    // 0x306330: 0xadae0008  sw          $t6, 0x8($t5)
    ctx->pc = 0x306330u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 14));
    // 0x306334: 0x25ad000c  addiu       $t5, $t5, 0xC
    ctx->pc = 0x306334u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
label_306338:
    // 0x306338: 0x300202d  daddu       $a0, $t8, $zero
    ctx->pc = 0x306338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30633c: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x30633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x306340: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x306340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x306344: 0x1040ffc8  beqz        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x306344u;
    {
        const bool branch_taken_0x306344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306344u;
        // 0x306348: 0x80c02d  daddu       $t8, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306344) {
            ctx->pc = 0x306268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306268;
        }
    }
    ctx->pc = 0x30634Cu;
label_30634c:
    // 0x30634c: 0x55bdffc2  bnel        $t5, $sp, . + 4 + (-0x3E << 2)
    ctx->pc = 0x30634Cu;
    {
        const bool branch_taken_0x30634c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 29));
        if (branch_taken_0x30634c) {
            ctx->pc = 0x306350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30634Cu;
            // 0x306350: 0x25adfff4  addiu       $t5, $t5, -0xC (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967284));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306258;
        }
    }
    ctx->pc = 0x306354u;
    // 0x306354: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x306354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x306358: 0x3e00008  jr          $ra
    ctx->pc = 0x306358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306358u;
        // 0x30635c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306360u;
}
