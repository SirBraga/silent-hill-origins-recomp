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

// Function: sub_001F89B0
// Address: 0x1f89b0 - 0x1f8af8
void sub_001F89B0_0x1f89b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F89B0_0x1f89b0");
#endif

    switch (ctx->pc) {
        case 0x1f89b0u: goto label_1f89b0;
        case 0x1f89b4u: goto label_1f89b4;
        case 0x1f89b8u: goto label_1f89b8;
        case 0x1f89bcu: goto label_1f89bc;
        case 0x1f89c0u: goto label_1f89c0;
        case 0x1f89c4u: goto label_1f89c4;
        case 0x1f89c8u: goto label_1f89c8;
        case 0x1f89ccu: goto label_1f89cc;
        case 0x1f89d0u: goto label_1f89d0;
        case 0x1f89d4u: goto label_1f89d4;
        case 0x1f89d8u: goto label_1f89d8;
        case 0x1f89dcu: goto label_1f89dc;
        case 0x1f89e0u: goto label_1f89e0;
        case 0x1f89e4u: goto label_1f89e4;
        case 0x1f89e8u: goto label_1f89e8;
        case 0x1f89ecu: goto label_1f89ec;
        case 0x1f89f0u: goto label_1f89f0;
        case 0x1f89f4u: goto label_1f89f4;
        case 0x1f89f8u: goto label_1f89f8;
        case 0x1f89fcu: goto label_1f89fc;
        case 0x1f8a00u: goto label_1f8a00;
        case 0x1f8a04u: goto label_1f8a04;
        case 0x1f8a08u: goto label_1f8a08;
        case 0x1f8a0cu: goto label_1f8a0c;
        case 0x1f8a10u: goto label_1f8a10;
        case 0x1f8a14u: goto label_1f8a14;
        case 0x1f8a18u: goto label_1f8a18;
        case 0x1f8a1cu: goto label_1f8a1c;
        case 0x1f8a20u: goto label_1f8a20;
        case 0x1f8a24u: goto label_1f8a24;
        case 0x1f8a28u: goto label_1f8a28;
        case 0x1f8a2cu: goto label_1f8a2c;
        case 0x1f8a30u: goto label_1f8a30;
        case 0x1f8a34u: goto label_1f8a34;
        case 0x1f8a38u: goto label_1f8a38;
        case 0x1f8a3cu: goto label_1f8a3c;
        case 0x1f8a40u: goto label_1f8a40;
        case 0x1f8a44u: goto label_1f8a44;
        case 0x1f8a48u: goto label_1f8a48;
        case 0x1f8a4cu: goto label_1f8a4c;
        case 0x1f8a50u: goto label_1f8a50;
        case 0x1f8a54u: goto label_1f8a54;
        case 0x1f8a58u: goto label_1f8a58;
        case 0x1f8a5cu: goto label_1f8a5c;
        case 0x1f8a60u: goto label_1f8a60;
        case 0x1f8a64u: goto label_1f8a64;
        case 0x1f8a68u: goto label_1f8a68;
        case 0x1f8a6cu: goto label_1f8a6c;
        case 0x1f8a70u: goto label_1f8a70;
        case 0x1f8a74u: goto label_1f8a74;
        case 0x1f8a78u: goto label_1f8a78;
        case 0x1f8a7cu: goto label_1f8a7c;
        case 0x1f8a80u: goto label_1f8a80;
        case 0x1f8a84u: goto label_1f8a84;
        case 0x1f8a88u: goto label_1f8a88;
        case 0x1f8a8cu: goto label_1f8a8c;
        case 0x1f8a90u: goto label_1f8a90;
        case 0x1f8a94u: goto label_1f8a94;
        case 0x1f8a98u: goto label_1f8a98;
        case 0x1f8a9cu: goto label_1f8a9c;
        case 0x1f8aa0u: goto label_1f8aa0;
        case 0x1f8aa4u: goto label_1f8aa4;
        case 0x1f8aa8u: goto label_1f8aa8;
        case 0x1f8aacu: goto label_1f8aac;
        case 0x1f8ab0u: goto label_1f8ab0;
        case 0x1f8ab4u: goto label_1f8ab4;
        case 0x1f8ab8u: goto label_1f8ab8;
        case 0x1f8abcu: goto label_1f8abc;
        case 0x1f8ac0u: goto label_1f8ac0;
        case 0x1f8ac4u: goto label_1f8ac4;
        case 0x1f8ac8u: goto label_1f8ac8;
        case 0x1f8accu: goto label_1f8acc;
        case 0x1f8ad0u: goto label_1f8ad0;
        case 0x1f8ad4u: goto label_1f8ad4;
        case 0x1f8ad8u: goto label_1f8ad8;
        case 0x1f8adcu: goto label_1f8adc;
        case 0x1f8ae0u: goto label_1f8ae0;
        case 0x1f8ae4u: goto label_1f8ae4;
        case 0x1f8ae8u: goto label_1f8ae8;
        case 0x1f8aecu: goto label_1f8aec;
        case 0x1f8af0u: goto label_1f8af0;
        case 0x1f8af4u: goto label_1f8af4;
        default: break;
    }

    ctx->pc = 0x1f89b0u;

label_1f89b0:
    // 0x1f89b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f89b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1f89b4:
    // 0x1f89b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f89b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f89b8:
    // 0x1f89b8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1f89b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1f89bc:
    // 0x1f89bc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1f89bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1f89c0:
    // 0x1f89c0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1f89c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f89c4:
    // 0x1f89c4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1f89c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1f89c8:
    // 0x1f89c8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f89c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f89cc:
    // 0x1f89cc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1f89ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1f89d0:
    // 0x1f89d0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f89d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f89d4:
    // 0x1f89d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f89d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1f89d8:
    // 0x1f89d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f89d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f89dc:
    // 0x1f89dc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f89dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1f89e0:
    // 0x1f89e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f89e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f89e4:
    // 0x1f89e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f89e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1f89e8:
    // 0x1f89e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f89e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f89ec:
    // 0x1f89ec: 0x12a00036  beqz        $s5, . + 4 + (0x36 << 2)
label_1f89f0:
    if (ctx->pc == 0x1F89F0u) {
        ctx->pc = 0x1F89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89ECu;
        // 0x1f89f0: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F89F4u;
        goto label_1f89f4;
    }
    ctx->pc = 0x1F89ECu;
    {
        const bool branch_taken_0x1f89ec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89ECu;
        // 0x1f89f0: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89ec) {
            ctx->pc = 0x1F8AC8u;
            goto label_1f8ac8;
        }
    }
    ctx->pc = 0x1F89F4u;
label_1f89f4:
    // 0x1f89f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f89f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f89f8:
    // 0x1f89f8: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
label_1f89fc:
    if (ctx->pc == 0x1F89FCu) {
        ctx->pc = 0x1F89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89F8u;
        // 0x1f89fc: 0x26a80008  addiu       $t0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8A00u;
        goto label_1f8a00;
    }
    ctx->pc = 0x1F89F8u;
    {
        const bool branch_taken_0x1f89f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89F8u;
        // 0x1f89fc: 0x26a80008  addiu       $t0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89f8) {
            ctx->pc = 0x1F8A2Cu;
            goto label_1f8a2c;
        }
    }
    ctx->pc = 0x1F8A00u;
label_1f8a00:
    // 0x1f8a00: 0x2281023  subu        $v0, $s1, $t0
    ctx->pc = 0x1f8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_1f8a04:
    // 0x1f8a04: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f8a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f8a08:
    // 0x1f8a08: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x1f8a08u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_1f8a0c:
    // 0x1f8a0c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1f8a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1f8a10:
    // 0x1f8a10: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x1f8a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1f8a14:
    // 0x1f8a14: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1f8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f8a18:
    // 0x1f8a18: 0x2491ffff  addiu       $s1, $a0, -0x1
    ctx->pc = 0x1f8a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1f8a1c:
    // 0x1f8a1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8a20:
    // 0x1f8a20: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1f8a20u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_1f8a24:
    // 0x1f8a24: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f8a28:
    if (ctx->pc == 0x1F8A28u) {
        ctx->pc = 0x1F8A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A24u;
        // 0x1f8a28: 0xa2300b  movn        $a2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8A2Cu;
        goto label_1f8a2c;
    }
    ctx->pc = 0x1F8A24u;
    {
        const bool branch_taken_0x1f8a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A24u;
        // 0x1f8a28: 0xa2300b  movn        $a2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a24) {
            ctx->pc = 0x1F8A30u;
            goto label_1f8a30;
        }
    }
    ctx->pc = 0x1F8A2Cu;
label_1f8a2c:
    // 0x1f8a2c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f8a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1f8a30:
    // 0x1f8a30: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1f8a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1f8a34:
    // 0x1f8a34: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1f8a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1f8a38:
    // 0x1f8a38: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x1f8a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1f8a3c:
    // 0x1f8a3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f8a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1f8a40:
    // 0x1f8a40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f8a44:
    // 0x1f8a44: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
label_1f8a48:
    if (ctx->pc == 0x1F8A48u) {
        ctx->pc = 0x1F8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A44u;
        // 0x1f8a48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8A4Cu;
        goto label_1f8a4c;
    }
    ctx->pc = 0x1F8A44u;
    {
        const bool branch_taken_0x1f8a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A44u;
        // 0x1f8a48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a44) {
            ctx->pc = 0x1F8AC8u;
            goto label_1f8ac8;
        }
    }
    ctx->pc = 0x1F8A4Cu;
label_1f8a4c:
    // 0x1f8a4c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x1f8a4cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_1f8a50:
    // 0x1f8a50: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x1f8a50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_1f8a54:
    // 0x1f8a54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f8a58:
    // 0x1f8a58: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1f8a58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f8a5c:
    // 0x1f8a5c: 0x0  nop
    ctx->pc = 0x1f8a5cu;
    // NOP
label_1f8a60:
    // 0x1f8a60: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_1f8a64:
    if (ctx->pc == 0x1F8A64u) {
        ctx->pc = 0x1F8A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A60u;
        // 0x1f8a64: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8A68u;
        goto label_1f8a68;
    }
    ctx->pc = 0x1F8A60u;
    {
        const bool branch_taken_0x1f8a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8a60) {
            ctx->pc = 0x1F8A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8A60u;
            // 0x1f8a64: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8ABCu;
            goto label_1f8abc;
        }
    }
    ctx->pc = 0x1F8A68u;
label_1f8a68:
    // 0x1f8a68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f8a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f8a6c:
    // 0x1f8a6c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1f8a6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f8a70:
    // 0x1f8a70: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_1f8a74:
    if (ctx->pc == 0x1F8A74u) {
        ctx->pc = 0x1F8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A70u;
        // 0x1f8a74: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8A78u;
        goto label_1f8a78;
    }
    ctx->pc = 0x1F8A70u;
    {
        const bool branch_taken_0x1f8a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8a70) {
            ctx->pc = 0x1F8A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8A70u;
            // 0x1f8a74: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8ABCu;
            goto label_1f8abc;
        }
    }
    ctx->pc = 0x1F8A78u;
label_1f8a78:
    // 0x1f8a78: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1f8a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f8a7c:
    // 0x1f8a7c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_1f8a80:
    if (ctx->pc == 0x1F8A80u) {
        ctx->pc = 0x1F8A84u;
        goto label_1f8a84;
    }
    ctx->pc = 0x1F8A7Cu;
    {
        const bool branch_taken_0x1f8a7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8a7c) {
            ctx->pc = 0x1F8AB0u;
            goto label_1f8ab0;
        }
    }
    ctx->pc = 0x1F8A84u;
label_1f8a84:
    // 0x1f8a84: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1f8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f8a88:
    // 0x1f8a88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f8a8c:
    if (ctx->pc == 0x1F8A8Cu) {
        ctx->pc = 0x1F8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A88u;
        // 0x1f8a8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8A90u;
        goto label_1f8a90;
    }
    ctx->pc = 0x1F8A88u;
    {
        const bool branch_taken_0x1f8a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A88u;
        // 0x1f8a8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a88) {
            ctx->pc = 0x1F8AB8u;
            goto label_1f8ab8;
        }
    }
    ctx->pc = 0x1F8A90u;
label_1f8a90:
    // 0x1f8a90: 0x40f809  jalr        $v0
label_1f8a94:
    if (ctx->pc == 0x1F8A94u) {
        ctx->pc = 0x1F8A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A90u;
        // 0x1f8a94: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8A98u;
        goto label_1f8a98;
    }
    ctx->pc = 0x1F8A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F8A98u);
        ctx->pc = 0x1F8A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A90u;
        // 0x1f8a94: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8A90u, 0x1F8A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8A98u;
label_1f8a98:
    // 0x1f8a98: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1f8a9c:
    if (ctx->pc == 0x1F8A9Cu) {
        ctx->pc = 0x1F8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A98u;
        // 0x1f8a9c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8AA0u;
        goto label_1f8aa0;
    }
    ctx->pc = 0x1F8A98u;
    {
        const bool branch_taken_0x1f8a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8a98) {
            ctx->pc = 0x1F8A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8A98u;
            // 0x1f8a9c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8ABCu;
            goto label_1f8abc;
        }
    }
    ctx->pc = 0x1F8AA0u;
label_1f8aa0:
    // 0x1f8aa0: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_1f8aa4:
    if (ctx->pc == 0x1F8AA4u) {
        ctx->pc = 0x1F8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AA0u;
        // 0x1f8aa4: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8AA8u;
        goto label_1f8aa8;
    }
    ctx->pc = 0x1F8AA0u;
    {
        const bool branch_taken_0x1f8aa0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8aa0) {
            ctx->pc = 0x1F8AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8AA0u;
            // 0x1f8aa4: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8AA8u;
            goto label_1f8aa8;
        }
    }
    ctx->pc = 0x1F8AA8u;
label_1f8aa8:
    // 0x1f8aa8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1f8aac:
    if (ctx->pc == 0x1F8AACu) {
        ctx->pc = 0x1F8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AA8u;
        // 0x1f8aac: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8AB0u;
        goto label_1f8ab0;
    }
    ctx->pc = 0x1F8AA8u;
    {
        const bool branch_taken_0x1f8aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AA8u;
        // 0x1f8aac: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8aa8) {
            ctx->pc = 0x1F8AC8u;
            goto label_1f8ac8;
        }
    }
    ctx->pc = 0x1F8AB0u;
label_1f8ab0:
    // 0x1f8ab0: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_1f8ab4:
    if (ctx->pc == 0x1F8AB4u) {
        ctx->pc = 0x1F8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AB0u;
        // 0x1f8ab4: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8AB8u;
        goto label_1f8ab8;
    }
    ctx->pc = 0x1F8AB0u;
    {
        const bool branch_taken_0x1f8ab0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8ab0) {
            ctx->pc = 0x1F8AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8AB0u;
            // 0x1f8ab4: 0x8e130008  lw          $s3, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8AB8u;
            goto label_1f8ab8;
        }
    }
    ctx->pc = 0x1F8AB8u;
label_1f8ab8:
    // 0x1f8ab8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1f8ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1f8abc:
    // 0x1f8abc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f8abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f8ac0:
    // 0x1f8ac0: 0x1452ffe7  bne         $v0, $s2, . + 4 + (-0x19 << 2)
label_1f8ac4:
    if (ctx->pc == 0x1F8AC4u) {
        ctx->pc = 0x1F8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AC0u;
        // 0x1f8ac4: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8AC8u;
        goto label_1f8ac8;
    }
    ctx->pc = 0x1F8AC0u;
    {
        const bool branch_taken_0x1f8ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1F8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AC0u;
        // 0x1f8ac4: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ac0) {
            ctx->pc = 0x1F8A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8a60;
        }
    }
    ctx->pc = 0x1F8AC8u;
label_1f8ac8:
    // 0x1f8ac8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1f8ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f8acc:
    // 0x1f8acc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f8accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1f8ad0:
    // 0x1f8ad0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1f8ad0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1f8ad4:
    // 0x1f8ad4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1f8ad4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f8ad8:
    // 0x1f8ad8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1f8ad8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f8adc:
    // 0x1f8adc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1f8adcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f8ae0:
    // 0x1f8ae0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f8ae0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f8ae4:
    // 0x1f8ae4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f8ae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f8ae8:
    // 0x1f8ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8aec:
    // 0x1f8aec: 0x3e00008  jr          $ra
label_1f8af0:
    if (ctx->pc == 0x1F8AF0u) {
        ctx->pc = 0x1F8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AECu;
        // 0x1f8af0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8AF4u;
        goto label_1f8af4;
    }
    ctx->pc = 0x1F8AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AECu;
        // 0x1f8af0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8AF4u;
label_1f8af4:
    // 0x1f8af4: 0x0  nop
    ctx->pc = 0x1f8af4u;
    // NOP
    ctx->pc = 0x1f8af8u;
}
