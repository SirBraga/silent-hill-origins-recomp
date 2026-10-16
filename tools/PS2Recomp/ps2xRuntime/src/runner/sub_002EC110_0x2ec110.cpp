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

// Function: sub_002EC110
// Address: 0x2ec110 - 0x2ec288
void sub_002EC110_0x2ec110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC110_0x2ec110");
#endif

    switch (ctx->pc) {
        case 0x2ec13cu: goto label_2ec13c;
        case 0x2ec158u: goto label_2ec158;
        case 0x2ec170u: goto label_2ec170;
        case 0x2ec180u: goto label_2ec180;
        case 0x2ec198u: goto label_2ec198;
        case 0x2ec1b4u: goto label_2ec1b4;
        case 0x2ec1ccu: goto label_2ec1cc;
        case 0x2ec1f8u: goto label_2ec1f8;
        case 0x2ec210u: goto label_2ec210;
        default: break;
    }

    ctx->pc = 0x2ec110u;

    // 0x2ec110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ec110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ec114: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2ec114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2ec118: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ec118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ec11c: 0x24a5ff50  addiu       $a1, $a1, -0xB0
    ctx->pc = 0x2ec11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967120));
    // 0x2ec120: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ec120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec124: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ec124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ec128: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ec128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ec12c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ec12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2ec130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ec130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ec134: 0xc0b8f92  jal         func_2E3E48
    ctx->pc = 0x2EC134u;
    SET_GPR_U32(ctx, 31, 0x2EC13Cu);
    ctx->pc = 0x2EC138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC134u;
    // 0x2ec138: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3E48u, 0x2EC134u, 0x2EC13Cu)) {
        return;
    }
    ctx->pc = 0x2EC13Cu;
label_2ec13c:
    // 0x2ec13c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2ec13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ec140: 0xa6230046  sh          $v1, 0x46($s1)
    ctx->pc = 0x2ec140u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ec144: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x2ec144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ec148: 0xae320040  sw          $s2, 0x40($s1)
    ctx->pc = 0x2ec148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 18));
    // 0x2ec14c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2ec14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ec150: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2EC150u;
    SET_GPR_U32(ctx, 31, 0x2EC158u);
    ctx->pc = 0x2EC154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC150u;
    // 0x2ec154: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2EC150u, 0x2EC158u)) {
        return;
    }
    ctx->pc = 0x2EC158u;
label_2ec158:
    // 0x2ec158: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2ec158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ec15c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ec15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ec160: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC160u;
    {
        const bool branch_taken_0x2ec160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC160u;
        // 0x2ec164: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec160) {
            ctx->pc = 0x2EC178u;
            goto label_2ec178;
        }
    }
    ctx->pc = 0x2EC168u;
    // 0x2ec168: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2EC168u;
    SET_GPR_U32(ctx, 31, 0x2EC170u);
    ctx->pc = 0x2EC16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC168u;
    // 0x2ec16c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2EC168u, 0x2EC170u)) {
        return;
    }
    ctx->pc = 0x2EC170u;
label_2ec170:
    // 0x2ec170: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2ec170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ec174: 0x0  nop
    ctx->pc = 0x2ec174u;
    // NOP
label_2ec178:
    // 0x2ec178: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2EC178u;
    SET_GPR_U32(ctx, 31, 0x2EC180u);
    ctx->pc = 0x2EC17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC178u;
    // 0x2ec17c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2EC178u, 0x2EC180u)) {
        return;
    }
    ctx->pc = 0x2EC180u;
label_2ec180:
    // 0x2ec180: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2ec180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ec184: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ec184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ec188: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EC188u;
    {
        const bool branch_taken_0x2ec188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC188u;
        // 0x2ec18c: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec188) {
            ctx->pc = 0x2EC1E8u;
            goto label_2ec1e8;
        }
    }
    ctx->pc = 0x2EC190u;
    // 0x2ec190: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2EC190u;
    SET_GPR_U32(ctx, 31, 0x2EC198u);
    ctx->pc = 0x2EC194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC190u;
    // 0x2ec194: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2EC190u, 0x2EC198u)) {
        return;
    }
    ctx->pc = 0x2EC198u;
label_2ec198:
    // 0x2ec198: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2ec198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ec19c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2ec19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2ec1a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EC1A0u;
    {
        const bool branch_taken_0x2ec1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC1A0u;
        // 0x2ec1a4: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec1a0) {
            ctx->pc = 0x2EC1E8u;
            goto label_2ec1e8;
        }
    }
    ctx->pc = 0x2EC1A8u;
    // 0x2ec1a8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2ec1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ec1ac: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2EC1ACu;
    SET_GPR_U32(ctx, 31, 0x2EC1B4u);
    ctx->pc = 0x2EC1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC1ACu;
    // 0x2ec1b0: 0x24530300  addiu       $s3, $v0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2EC1ACu, 0x2EC1B4u)) {
        return;
    }
    ctx->pc = 0x2EC1B4u;
label_2ec1b4:
    // 0x2ec1b4: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2ec1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ec1b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ec1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ec1bc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC1BCu;
    {
        const bool branch_taken_0x2ec1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec1bc) {
            ctx->pc = 0x2EC1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC1BCu;
            // 0x2ec1c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC1D8u;
            goto label_2ec1d8;
        }
    }
    ctx->pc = 0x2EC1C4u;
    // 0x2ec1c4: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2EC1C4u;
    SET_GPR_U32(ctx, 31, 0x2EC1CCu);
    ctx->pc = 0x2EC1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC1C4u;
    // 0x2ec1c8: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2EC1C4u, 0x2EC1CCu)) {
        return;
    }
    ctx->pc = 0x2EC1CCu;
label_2ec1cc:
    // 0x2ec1cc: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2ec1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ec1d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ec1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ec1d4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2ec1d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_2ec1d8:
    // 0x2ec1d8: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x2ec1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2ec1dc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2ec1dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ec1e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2EC1E0u;
    {
        const bool branch_taken_0x2ec1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC1E0u;
        // 0x2ec1e4: 0x24420007  addiu       $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec1e0) {
            ctx->pc = 0x2EC224u;
            goto label_2ec224;
        }
    }
    ctx->pc = 0x2EC1E8u;
label_2ec1e8:
    // 0x2ec1e8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2ec1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ec1ec: 0x24530300  addiu       $s3, $v0, 0x300
    ctx->pc = 0x2ec1ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x2ec1f0: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2EC1F0u;
    SET_GPR_U32(ctx, 31, 0x2EC1F8u);
    ctx->pc = 0x2EC1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC1F0u;
    // 0x2ec1f4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2EC1F0u, 0x2EC1F8u)) {
        return;
    }
    ctx->pc = 0x2EC1F8u;
label_2ec1f8:
    // 0x2ec1f8: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2ec1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ec1fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ec1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ec200: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC200u;
    {
        const bool branch_taken_0x2ec200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec200) {
            ctx->pc = 0x2EC204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC200u;
            // 0x2ec204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC218u;
            goto label_2ec218;
        }
    }
    ctx->pc = 0x2EC208u;
    // 0x2ec208: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2EC208u;
    SET_GPR_U32(ctx, 31, 0x2EC210u);
    ctx->pc = 0x2EC20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC208u;
    // 0x2ec20c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2EC208u, 0x2EC210u)) {
        return;
    }
    ctx->pc = 0x2EC210u;
label_2ec210:
    // 0x2ec210: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2ec210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2ec214: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ec214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2ec218:
    // 0x2ec218: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x2ec218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2ec21c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2ec21cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ec220: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ec220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ec224:
    // 0x2ec224: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x2ec224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x2ec228: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x2ec228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x2ec22c: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2ec22cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x2ec230: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2ec230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2ec234: 0x2442cdf0  addiu       $v0, $v0, -0x3210
    ctx->pc = 0x2ec234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954480));
    // 0x2ec238: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x2ec238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x2ec23c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2ec23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2ec240: 0x2463cf20  addiu       $v1, $v1, -0x30E0
    ctx->pc = 0x2ec240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954784));
    // 0x2ec244: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x2ec244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x2ec248: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x2ec248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x2ec24c: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2ec24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2ec250: 0x2442c288  addiu       $v0, $v0, -0x3D78
    ctx->pc = 0x2ec250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951560));
    // 0x2ec254: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2ec254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x2ec258: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2ec258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2ec25c: 0x2463cf40  addiu       $v1, $v1, -0x30C0
    ctx->pc = 0x2ec25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954816));
    // 0x2ec260: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x2ec260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x2ec264: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ec264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ec268: 0xa6220044  sh          $v0, 0x44($s1)
    ctx->pc = 0x2ec268u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ec26c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ec26cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ec270: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ec270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ec274: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ec274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec278: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ec278u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec27c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ec27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec280: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC280u;
        // 0x2ec284: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC288u;
}
