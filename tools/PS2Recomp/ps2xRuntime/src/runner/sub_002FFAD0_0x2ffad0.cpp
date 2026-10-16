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

// Function: sub_002FFAD0
// Address: 0x2ffad0 - 0x300028
void sub_002FFAD0_0x2ffad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFAD0_0x2ffad0");
#endif

    switch (ctx->pc) {
        case 0x2ffb48u: goto label_2ffb48;
        case 0x2ffb6cu: goto label_2ffb6c;
        case 0x2ffbe4u: goto label_2ffbe4;
        case 0x2ffc2cu: goto label_2ffc2c;
        case 0x2ffce8u: goto label_2ffce8;
        case 0x2ffd14u: goto label_2ffd14;
        case 0x2ffd84u: goto label_2ffd84;
        case 0x2ffdb0u: goto label_2ffdb0;
        case 0x2ffe10u: goto label_2ffe10;
        case 0x2ffe3cu: goto label_2ffe3c;
        case 0x2ffe6cu: goto label_2ffe6c;
        case 0x2ffe94u: goto label_2ffe94;
        case 0x2ffe9cu: goto label_2ffe9c;
        default: break;
    }

    ctx->pc = 0x2ffad0u;

    // 0x2ffad0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2ffad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2ffad4: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x2ffad4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x2ffad8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2ffad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2ffadc: 0x356b2010  ori         $t3, $t3, 0x2010
    ctx->pc = 0x2ffadcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)8208);
    // 0x2ffae0: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2ffae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2ffae4: 0x3c02f8ff  lui         $v0, 0xF8FF
    ctx->pc = 0x2ffae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63743 << 16));
    // 0x2ffae8: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2ffae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2ffaec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ffaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ffaf0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2ffaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2ffaf4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ffaf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffaf8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2ffaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2ffafc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2ffafcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffb00: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2ffb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2ffb04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ffb04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffb08: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2ffb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x2ffb0c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2ffb0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffb10: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x2ffb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x2ffb14: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2ffb14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffb18: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2ffb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2ffb1c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2ffb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2ffb20: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x2ffb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2ffb24: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2ffb24u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x2ffb28: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x2ffb28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2ffb2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ffb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ffb30: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ffb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ffb34: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x2ffb34u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x2ffb38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffb3c: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x2ffb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x2ffb40: 0xc0c01a6  jal         func_300698
    ctx->pc = 0x2FFB40u;
    SET_GPR_U32(ctx, 31, 0x2FFB48u);
    ctx->pc = 0x2FFB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFB40u;
    // 0x2ffb44: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300698u, 0x2FFB40u, 0x2FFB48u)) {
        return;
    }
    ctx->pc = 0x2FFB48u;
label_2ffb48:
    // 0x2ffb48: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ffb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ffb4c: 0x3c033400  lui         $v1, 0x3400
    ctx->pc = 0x2ffb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13312 << 16));
    // 0x2ffb50: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2ffb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2ffb54: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x2ffb54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x2ffb58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2ffb58u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x2ffb5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffb60: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x2ffb60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x2ffb64: 0xc0c00c2  jal         func_300308
    ctx->pc = 0x2FFB64u;
    SET_GPR_U32(ctx, 31, 0x2FFB6Cu);
    ctx->pc = 0x2FFB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFB64u;
    // 0x2ffb68: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300308u, 0x2FFB64u, 0x2FFB6Cu)) {
        return;
    }
    ctx->pc = 0x2FFB6Cu;
label_2ffb6c:
    // 0x2ffb6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ffb6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffb70: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2ffb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2ffb74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ffb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ffb78: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x2ffb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x2ffb7c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x2ffb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x2ffb80: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ffb80u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x2ffb84: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2ffb84u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x2ffb88: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2ffb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ffb8c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ffb8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ffb90: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FFB90u;
    {
        const bool branch_taken_0x2ffb90 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2FFB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB90u;
        // 0x2ffb94: 0xae020848  sw          $v0, 0x848($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb90) {
            ctx->pc = 0x2FFBA8u;
            goto label_2ffba8;
        }
    }
    ctx->pc = 0x2FFB98u;
    // 0x2ffb98: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x2ffb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2ffb9c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2ffb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2ffba0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FFBA0u;
    {
        const bool branch_taken_0x2ffba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBA0u;
        // 0x2ffba4: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffba0) {
            ctx->pc = 0x2FFBACu;
            goto label_2ffbac;
        }
    }
    ctx->pc = 0x2FFBA8u;
label_2ffba8:
    // 0x2ffba8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2ffba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2ffbac:
    // 0x2ffbac: 0xae02084c  sw          $v0, 0x84C($s0)
    ctx->pc = 0x2ffbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    // 0x2ffbb0: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x2ffbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2ffbb4: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x2ffbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ffbb8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ffbb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2ffbbc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2ffbbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ffbc0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2ffbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2ffbc4: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x2ffbc4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2ffbc8: 0xae03012c  sw          $v1, 0x12C($s0)
    ctx->pc = 0x2ffbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
    // 0x2ffbcc: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FFBCCu;
    {
        const bool branch_taken_0x2ffbcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBCCu;
        // 0x2ffbd0: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffbcc) {
            ctx->pc = 0x2FFBF4u;
            goto label_2ffbf4;
        }
    }
    ctx->pc = 0x2FFBD4u;
    // 0x2ffbd4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2ffbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2ffbd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbdc: 0xc0bf75c  jal         func_2FDD70
    ctx->pc = 0x2FFBDCu;
    SET_GPR_U32(ctx, 31, 0x2FFBE4u);
    ctx->pc = 0x2FFBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFBDCu;
    // 0x2ffbe0: 0x24a508c0  addiu       $a1, $a1, 0x8C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x2FFBDCu, 0x2FFBE4u)) {
        return;
    }
    ctx->pc = 0x2FFBE4u;
label_2ffbe4:
    // 0x2ffbe4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ffbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffbe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ffbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbec: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x2FFBECu;
    {
        const bool branch_taken_0x2ffbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBECu;
        // 0x2ffbf0: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffbec) {
            ctx->pc = 0x2FFFF8u;
            goto label_2ffff8;
        }
    }
    ctx->pc = 0x2FFBF4u;
label_2ffbf4:
    // 0x2ffbf4: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x2ffbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x2ffbf8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2FFBF8u;
    {
        const bool branch_taken_0x2ffbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBF8u;
        // 0x2ffbfc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffbf8) {
            ctx->pc = 0x2FFC34u;
            goto label_2ffc34;
        }
    }
    ctx->pc = 0x2FFC00u;
    // 0x2ffc00: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x2ffc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x2ffc04: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FFC04u;
    {
        const bool branch_taken_0x2ffc04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ffc04) {
            ctx->pc = 0x2FFC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFC04u;
            // 0x2ffc08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFC24u;
            goto label_2ffc24;
        }
    }
    ctx->pc = 0x2FFC0Cu;
    // 0x2ffc0c: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x2ffc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x2ffc10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFC10u;
    {
        const bool branch_taken_0x2ffc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC10u;
        // 0x2ffc14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc10) {
            ctx->pc = 0x2FFC20u;
            goto label_2ffc20;
        }
    }
    ctx->pc = 0x2FFC18u;
    // 0x2ffc18: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2FFC18u;
    {
        const bool branch_taken_0x2ffc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC18u;
        // 0x2ffc1c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc18) {
            ctx->pc = 0x2FFC60u;
            goto label_2ffc60;
        }
    }
    ctx->pc = 0x2FFC20u;
label_2ffc20:
    // 0x2ffc20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ffc24:
    // 0x2ffc24: 0xc0c0122  jal         func_300488
    ctx->pc = 0x2FFC24u;
    SET_GPR_U32(ctx, 31, 0x2FFC2Cu);
    ctx->pc = 0x2FFC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFC24u;
    // 0x2ffc28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x2FFC24u, 0x2FFC2Cu)) {
        return;
    }
    ctx->pc = 0x2FFC2Cu;
label_2ffc2c:
    // 0x2ffc2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2FFC2Cu;
    {
        const bool branch_taken_0x2ffc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC2Cu;
        // 0x2ffc30: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc2c) {
            ctx->pc = 0x2FFC60u;
            goto label_2ffc60;
        }
    }
    ctx->pc = 0x2FFC34u;
label_2ffc34:
    // 0x2ffc34: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2ffc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2ffc38: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2FFC38u;
    {
        const bool branch_taken_0x2ffc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffc38) {
            ctx->pc = 0x2FFC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFC38u;
            // 0x2ffc3c: 0x8e060184  lw          $a2, 0x184($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFC64u;
            goto label_2ffc64;
        }
    }
    ctx->pc = 0x2FFC40u;
    // 0x2ffc40: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x2ffc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x2ffc44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FFC44u;
    {
        const bool branch_taken_0x2ffc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC44u;
        // 0x2ffc48: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc44) {
            ctx->pc = 0x2FFC60u;
            goto label_2ffc60;
        }
    }
    ctx->pc = 0x2FFC4Cu;
    // 0x2ffc4c: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x2ffc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x2ffc50: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ffc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ffc54: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2ffc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2ffc58: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x2ffc58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x2ffc5c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2ffc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_2ffc60:
    // 0x2ffc60: 0x8e060184  lw          $a2, 0x184($s0)
    ctx->pc = 0x2ffc60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_2ffc64:
    // 0x2ffc64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ffc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ffc68: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FFC68u;
    {
        const bool branch_taken_0x2ffc68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FFC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC68u;
        // 0x2ffc6c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc68) {
            ctx->pc = 0x2FFC8Cu;
            goto label_2ffc8c;
        }
    }
    ctx->pc = 0x2FFC70u;
    // 0x2ffc70: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ffc70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffc74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ffc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ffc78: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x2ffc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x2ffc7c: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x2ffc7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x2ffc80: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x2ffc80u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2));
    // 0x2ffc84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FFC84u;
    {
        const bool branch_taken_0x2ffc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC84u;
        // 0x2ffc88: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc84) {
            ctx->pc = 0x2FFCA0u;
            goto label_2ffca0;
        }
    }
    ctx->pc = 0x2FFC8Cu;
label_2ffc8c:
    // 0x2ffc8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ffc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ffc90: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ffc90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffc94: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ffc94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc98: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x2ffc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x2ffc9c: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x2ffc9cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3));
label_2ffca0:
    // 0x2ffca0: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x2ffca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x2ffca4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2ffca4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffca8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFCA8u;
    {
        const bool branch_taken_0x2ffca8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCA8u;
        // 0x2ffcac: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffca8) {
            ctx->pc = 0x2FFCB8u;
            goto label_2ffcb8;
        }
    }
    ctx->pc = 0x2FFCB0u;
    // 0x2ffcb0: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x2ffcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x2ffcb4: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x2ffcb4u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ffcb8:
    // 0x2ffcb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ffcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ffcbc: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FFCBCu;
    {
        const bool branch_taken_0x2ffcbc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCBCu;
        // 0x2ffcc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffcbc) {
            ctx->pc = 0x2FFCF4u;
            goto label_2ffcf4;
        }
    }
    ctx->pc = 0x2FFCC4u;
    // 0x2ffcc4: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x2ffcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x2ffcc8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FFCC8u;
    {
        const bool branch_taken_0x2ffcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCC8u;
        // 0x2ffccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffcc8) {
            ctx->pc = 0x2FFCF4u;
            goto label_2ffcf4;
        }
    }
    ctx->pc = 0x2FFCD0u;
    // 0x2ffcd0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2ffcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ffcd4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2ffcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2ffcd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FFCD8u;
    {
        const bool branch_taken_0x2ffcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCD8u;
        // 0x2ffcdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffcd8) {
            ctx->pc = 0x2FFCF0u;
            goto label_2ffcf0;
        }
    }
    ctx->pc = 0x2FFCE0u;
    // 0x2ffce0: 0xc0c0122  jal         func_300488
    ctx->pc = 0x2FFCE0u;
    SET_GPR_U32(ctx, 31, 0x2FFCE8u);
    ctx->pc = 0x2FFCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFCE0u;
    // 0x2ffce4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x2FFCE0u, 0x2FFCE8u)) {
        return;
    }
    ctx->pc = 0x2FFCE8u;
label_2ffce8:
    // 0x2ffce8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFCE8u;
    {
        const bool branch_taken_0x2ffce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFCE8u;
        // 0x2ffcec: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffce8) {
            ctx->pc = 0x2FFCF8u;
            goto label_2ffcf8;
        }
    }
    ctx->pc = 0x2FFCF0u;
label_2ffcf0:
    // 0x2ffcf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ffcf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ffcf4:
    // 0x2ffcf4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2ffcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2ffcf8:
    // 0x2ffcf8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ffcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ffcfc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ffcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ffd00: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2ffd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2ffd04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FFD04u;
    {
        const bool branch_taken_0x2ffd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD04u;
        // 0x2ffd08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd04) {
            ctx->pc = 0x2FFD1Cu;
            goto label_2ffd1c;
        }
    }
    ctx->pc = 0x2FFD0Cu;
    // 0x2ffd0c: 0xc0c0122  jal         func_300488
    ctx->pc = 0x2FFD0Cu;
    SET_GPR_U32(ctx, 31, 0x2FFD14u);
    ctx->pc = 0x2FFD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFD0Cu;
    // 0x2ffd10: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x2FFD0Cu, 0x2FFD14u)) {
        return;
    }
    ctx->pc = 0x2FFD14u;
label_2ffd14:
    // 0x2ffd14: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x2ffd14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x2ffd18: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ffd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ffd1c:
    // 0x2ffd1c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2ffd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2ffd20: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FFD20u;
    {
        const bool branch_taken_0x2ffd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffd20) {
            ctx->pc = 0x2FFD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFD20u;
            // 0x2ffd24: 0x8e020858  lw          $v0, 0x858($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFD44u;
            goto label_2ffd44;
        }
    }
    ctx->pc = 0x2FFD28u;
    // 0x2ffd28: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2ffd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ffd2c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2FFD2Cu;
    {
        const bool branch_taken_0x2ffd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffd2c) {
            ctx->pc = 0x2FFD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFD2Cu;
            // 0x2ffd30: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFDB4u;
            goto label_2ffdb4;
        }
    }
    ctx->pc = 0x2FFD34u;
    // 0x2ffd34: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x2ffd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x2ffd38: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2FFD38u;
    {
        const bool branch_taken_0x2ffd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffd38) {
            ctx->pc = 0x2FFD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFD38u;
            // 0x2ffd3c: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFDB4u;
            goto label_2ffdb4;
        }
    }
    ctx->pc = 0x2FFD40u;
    // 0x2ffd40: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x2ffd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_2ffd44:
    // 0x2ffd44: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FFD44u;
    {
        const bool branch_taken_0x2ffd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD44u;
        // 0x2ffd48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd44) {
            ctx->pc = 0x2FFD8Cu;
            goto label_2ffd8c;
        }
    }
    ctx->pc = 0x2FFD4Cu;
    // 0x2ffd4c: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x2ffd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x2ffd50: 0x8e0b0174  lw          $t3, 0x174($s0)
    ctx->pc = 0x2ffd50u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x2ffd54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ffd54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ffd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ffd5c: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x2ffd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2ffd60: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x2ffd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x2ffd64: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x2ffd64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x2ffd68: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2ffd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2ffd6c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2ffd6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd70: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x2ffd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x2ffd74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ffd74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd78: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2ffd78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd7c: 0xc0bfe4c  jal         func_2FF930
    ctx->pc = 0x2FFD7Cu;
    SET_GPR_U32(ctx, 31, 0x2FFD84u);
    ctx->pc = 0x2FFD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFD7Cu;
    // 0x2ffd80: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FF930u, 0x2FFD7Cu, 0x2FFD84u)) {
        return;
    }
    ctx->pc = 0x2FFD84u;
label_2ffd84:
    // 0x2ffd84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2FFD84u;
    {
        const bool branch_taken_0x2ffd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD84u;
        // 0x2ffd88: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd84) {
            ctx->pc = 0x2FFDB4u;
            goto label_2ffdb4;
        }
    }
    ctx->pc = 0x2FFD8Cu;
label_2ffd8c:
    // 0x2ffd8c: 0x8e070168  lw          $a3, 0x168($s0)
    ctx->pc = 0x2ffd8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x2ffd90: 0x8e0b0164  lw          $t3, 0x164($s0)
    ctx->pc = 0x2ffd90u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x2ffd94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ffd94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd98: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2ffd98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2ffd9c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2ffd9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffda0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ffda0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffda4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ffda4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffda8: 0xc0bfd42  jal         func_2FF508
    ctx->pc = 0x2FFDA8u;
    SET_GPR_U32(ctx, 31, 0x2FFDB0u);
    ctx->pc = 0x2FFDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFDA8u;
    // 0x2ffdac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF508u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FF508u, 0x2FFDA8u, 0x2FFDB0u)) {
        return;
    }
    ctx->pc = 0x2FFDB0u;
label_2ffdb0:
    // 0x2ffdb0: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x2ffdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_2ffdb4:
    // 0x2ffdb4: 0x14600090  bnez        $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x2FFDB4u;
    {
        const bool branch_taken_0x2ffdb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDB4u;
        // 0x2ffdb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdb4) {
            ctx->pc = 0x2FFFF8u;
            goto label_2ffff8;
        }
    }
    ctx->pc = 0x2FFDBCu;
    // 0x2ffdbc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2ffdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ffdc0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2ffdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2ffdc4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2FFDC4u;
    {
        const bool branch_taken_0x2ffdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffdc4) {
            ctx->pc = 0x2FFE40u;
            goto label_2ffe40;
        }
    }
    ctx->pc = 0x2FFDCCu;
    // 0x2ffdcc: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x2ffdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x2ffdd0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FFDD0u;
    {
        const bool branch_taken_0x2ffdd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDD0u;
        // 0x2ffdd4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdd0) {
            ctx->pc = 0x2FFE18u;
            goto label_2ffe18;
        }
    }
    ctx->pc = 0x2FFDD8u;
    // 0x2ffdd8: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x2ffdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x2ffddc: 0x8e0b017c  lw          $t3, 0x17C($s0)
    ctx->pc = 0x2ffddcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x2ffde0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2ffde0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffde4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ffde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ffde8: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x2ffde8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2ffdec: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x2ffdecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x2ffdf0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2ffdf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffdf4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2ffdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2ffdf8: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x2ffdf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x2ffdfc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2ffdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2ffe00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffe00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ffe04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe08: 0xc0bfe4c  jal         func_2FF930
    ctx->pc = 0x2FFE08u;
    SET_GPR_U32(ctx, 31, 0x2FFE10u);
    ctx->pc = 0x2FFE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE08u;
    // 0x2ffe0c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FF930u, 0x2FFE08u, 0x2FFE10u)) {
        return;
    }
    ctx->pc = 0x2FFE10u;
label_2ffe10:
    // 0x2ffe10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2FFE10u;
    {
        const bool branch_taken_0x2ffe10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE10u;
        // 0x2ffe14: 0x8e03012c  lw          $v1, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe10) {
            ctx->pc = 0x2FFE40u;
            goto label_2ffe40;
        }
    }
    ctx->pc = 0x2FFE18u;
label_2ffe18:
    // 0x2ffe18: 0x8e070170  lw          $a3, 0x170($s0)
    ctx->pc = 0x2ffe18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x2ffe1c: 0x8e0b016c  lw          $t3, 0x16C($s0)
    ctx->pc = 0x2ffe1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x2ffe20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffe20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe24: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2ffe24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2ffe28: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x2ffe28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2ffe2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ffe2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe30: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ffe30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe34: 0xc0bfd42  jal         func_2FF508
    ctx->pc = 0x2FFE34u;
    SET_GPR_U32(ctx, 31, 0x2FFE3Cu);
    ctx->pc = 0x2FFE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE34u;
    // 0x2ffe38: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF508u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FF508u, 0x2FFE34u, 0x2FFE3Cu)) {
        return;
    }
    ctx->pc = 0x2FFE3Cu;
label_2ffe3c:
    // 0x2ffe3c: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x2ffe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_2ffe40:
    // 0x2ffe40: 0x1460006d  bnez        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x2FFE40u;
    {
        const bool branch_taken_0x2ffe40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE40u;
        // 0x2ffe44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe40) {
            ctx->pc = 0x2FFFF8u;
            goto label_2ffff8;
        }
    }
    ctx->pc = 0x2FFE48u;
    // 0x2ffe48: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ffe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ffe4c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2ffe4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ffe50: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FFE50u;
    {
        const bool branch_taken_0x2ffe50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE50u;
        // 0x2ffe54: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe50) {
            ctx->pc = 0x2FFE74u;
            goto label_2ffe74;
        }
    }
    ctx->pc = 0x2FFE58u;
    // 0x2ffe58: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x2ffe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x2ffe5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FFE5Cu;
    {
        const bool branch_taken_0x2ffe5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE5Cu;
        // 0x2ffe60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe5c) {
            ctx->pc = 0x2FFE70u;
            goto label_2ffe70;
        }
    }
    ctx->pc = 0x2FFE64u;
    // 0x2ffe64: 0xc0c01b4  jal         func_3006D0
    ctx->pc = 0x2FFE64u;
    SET_GPR_U32(ctx, 31, 0x2FFE6Cu);
    ctx->pc = 0x2FFE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE64u;
    // 0x2ffe68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3006D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3006D0u, 0x2FFE64u, 0x2FFE6Cu)) {
        return;
    }
    ctx->pc = 0x2FFE6Cu;
label_2ffe6c:
    // 0x2ffe6c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ffe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2ffe70:
    // 0x2ffe70: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x2ffe70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_2ffe74:
    // 0x2ffe74: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2FFE74u;
    {
        const bool branch_taken_0x2ffe74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE74u;
        // 0x2ffe78: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe74) {
            ctx->pc = 0x2FFF18u;
            goto label_2fff18;
        }
    }
    ctx->pc = 0x2FFE7Cu;
    // 0x2ffe7c: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x2ffe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x2ffe80: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x2ffe80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x2ffe84: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x2ffe84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ffe88: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x2ffe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2ffe8c: 0xc0c05ee  jal         func_3017B8
    ctx->pc = 0x2FFE8Cu;
    SET_GPR_U32(ctx, 31, 0x2FFE94u);
    ctx->pc = 0x2FFE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE8Cu;
    // 0x2ffe90: 0x8c4405a4  lw          $a0, 0x5A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1444)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3017B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3017B8u, 0x2FFE8Cu, 0x2FFE94u)) {
        return;
    }
    ctx->pc = 0x2FFE94u;
label_2ffe94:
    // 0x2ffe94: 0xc0c01a6  jal         func_300698
    ctx->pc = 0x2FFE94u;
    SET_GPR_U32(ctx, 31, 0x2FFE9Cu);
    ctx->pc = 0x2FFE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE94u;
    // 0x2ffe98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300698u, 0x2FFE94u, 0x2FFE9Cu)) {
        return;
    }
    ctx->pc = 0x2FFE9Cu;
label_2ffe9c:
    // 0x2ffe9c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ffe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ffea0: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x2ffea0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x2ffea4: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x2ffea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x2ffea8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2ffea8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2ffeac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ffeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ffeb0: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x2ffeb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x2ffeb4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2ffeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ffeb8: 0x42680  sll         $a0, $a0, 26
    ctx->pc = 0x2ffeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 26));
    // 0x2ffebc: 0x8e0301c4  lw          $v1, 0x1C4($s0)
    ctx->pc = 0x2ffebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x2ffec0: 0x52e40  sll         $a1, $a1, 25
    ctx->pc = 0x2ffec0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 25));
    // 0x2ffec4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ffec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ffec8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2ffec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2ffecc: 0x216c0  sll         $v0, $v0, 27
    ctx->pc = 0x2ffeccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 27));
    // 0x2ffed0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2ffed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2ffed4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ffed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ffed8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x2ffed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2ffedc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ffedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ffee0: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x2ffee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x2ffee4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2ffee4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2ffee8: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x2ffee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ffeec: 0x10a70006  beq         $a1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FFEECu;
    {
        const bool branch_taken_0x2ffeec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x2FFEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEECu;
        // 0x2ffef0: 0xae05082c  sw          $a1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffeec) {
            ctx->pc = 0x2FFF08u;
            goto label_2fff08;
        }
    }
    ctx->pc = 0x2FFEF4u;
    // 0x2ffef4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x2ffef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x2ffef8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFEF8u;
    {
        const bool branch_taken_0x2ffef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FFEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEF8u;
        // 0x2ffefc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffef8) {
            ctx->pc = 0x2FFF08u;
            goto label_2fff08;
        }
    }
    ctx->pc = 0x2FFF00u;
    // 0x2fff00: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFF00u;
    {
        const bool branch_taken_0x2fff00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF00u;
        // 0x2fff04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff00) {
            ctx->pc = 0x2FFF10u;
            goto label_2fff10;
        }
    }
    ctx->pc = 0x2FFF08u;
label_2fff08:
    // 0x2fff08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FFF08u;
    {
        const bool branch_taken_0x2fff08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF08u;
        // 0x2fff0c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff08) {
            ctx->pc = 0x2FFF2Cu;
            goto label_2fff2c;
        }
    }
    ctx->pc = 0x2FFF10u;
label_2fff10:
    // 0x2fff10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FFF10u;
    {
        const bool branch_taken_0x2fff10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF10u;
        // 0x2fff14: 0xae020828  sw          $v0, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff10) {
            ctx->pc = 0x2FFF2Cu;
            goto label_2fff2c;
        }
    }
    ctx->pc = 0x2FFF18u;
label_2fff18:
    // 0x2fff18: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x2fff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x2fff1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fff20: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x2fff20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2fff24: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x2fff24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2fff28: 0xac4406dc  sw          $a0, 0x6DC($v0)
    ctx->pc = 0x2fff28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 4));
label_2fff2c:
    // 0x2fff2c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x2fff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x2fff30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFF30u;
    {
        const bool branch_taken_0x2fff30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF30u;
        // 0x2fff34: 0xae0001c0  sw          $zero, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff30) {
            ctx->pc = 0x2FFF40u;
            goto label_2fff40;
        }
    }
    ctx->pc = 0x2FFF38u;
    // 0x2fff38: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2FFF38u;
    {
        const bool branch_taken_0x2fff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF38u;
        // 0x2fff3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff38) {
            ctx->pc = 0x2FFFF8u;
            goto label_2ffff8;
        }
    }
    ctx->pc = 0x2FFF40u;
label_2fff40:
    // 0x2fff40: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2fff40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2fff44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fff44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fff48: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FFF48u;
    {
        const bool branch_taken_0x2fff48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fff48) {
            ctx->pc = 0x2FFF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFF48u;
            // 0x2fff4c: 0x8e020190  lw          $v0, 0x190($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFF6Cu;
            goto label_2fff6c;
        }
    }
    ctx->pc = 0x2FFF50u;
    // 0x2fff50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fff50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fff54: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x2fff54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x2fff58: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2fff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2fff5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fff5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fff60: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2FFF60u;
    {
        const bool branch_taken_0x2fff60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fff60) {
            ctx->pc = 0x2FFF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFF60u;
            // 0x2fff64: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFF98u;
            goto label_2fff98;
        }
    }
    ctx->pc = 0x2FFF68u;
    // 0x2fff68: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x2fff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_2fff6c:
    // 0x2fff6c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2FFF6Cu;
    {
        const bool branch_taken_0x2fff6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fff6c) {
            ctx->pc = 0x2FFF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFF6Cu;
            // 0x2fff70: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFF98u;
            goto label_2fff98;
        }
    }
    ctx->pc = 0x2FFF74u;
    // 0x2fff74: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2fff74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2fff78: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2fff78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2fff7c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2fff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2fff80: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2fff80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2fff84: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2fff84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2fff88: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x2fff88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x2fff8c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2fff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2fff90: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2fff90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2fff94: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x2fff94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_2fff98:
    // 0x2fff98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fff98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fff9c: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2FFF9Cu;
    {
        const bool branch_taken_0x2fff9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FFFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF9Cu;
        // 0x2fffa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff9c) {
            ctx->pc = 0x2FFFF8u;
            goto label_2ffff8;
        }
    }
    ctx->pc = 0x2FFFA4u;
    // 0x2fffa4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2fffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2fffa8: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x2fffa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x2fffac: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FFFACu;
    {
        const bool branch_taken_0x2fffac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFACu;
        // 0x2fffb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fffac) {
            ctx->pc = 0x2FFFF8u;
            goto label_2ffff8;
        }
    }
    ctx->pc = 0x2FFFB4u;
    // 0x2fffb4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2fffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2fffb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fffbc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2fffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2fffc0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2fffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2fffc4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2fffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2fffc8: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x2fffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x2fffcc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFFCCu;
    {
        const bool branch_taken_0x2fffcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FFFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFCCu;
        // 0x2fffd0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fffcc) {
            ctx->pc = 0x2FFFDCu;
            goto label_2fffdc;
        }
    }
    ctx->pc = 0x2FFFD4u;
    // 0x2fffd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FFFD4u;
    {
        const bool branch_taken_0x2fffd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFD4u;
        // 0x2fffd8: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fffd4) {
            ctx->pc = 0x2FFFF4u;
            goto label_2ffff4;
        }
    }
    ctx->pc = 0x2FFFDCu;
label_2fffdc:
    // 0x2fffdc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2fffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2fffe0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2fffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2fffe4: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x2fffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x2fffe8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2fffe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2fffec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2fffecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ffff0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ffff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2ffff4:
    // 0x2ffff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ffff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ffff8:
    // 0x2ffff8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2ffff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ffffc: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2ffffcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x300000: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x300000u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x300004: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x300004u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x300008: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x300008u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30000c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x30000cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x300010: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x300010u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x300014: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x300014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x300018: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x300018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30001c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x30001cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x300020: 0x3e00008  jr          $ra
    ctx->pc = 0x300020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300020u;
        // 0x300024: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300028u;
}
