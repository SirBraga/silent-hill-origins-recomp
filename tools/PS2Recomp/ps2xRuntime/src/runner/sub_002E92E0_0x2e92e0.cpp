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

// Function: sub_002E92E0
// Address: 0x2e92e0 - 0x2e9450
void sub_002E92E0_0x2e92e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E92E0_0x2e92e0");
#endif

    switch (ctx->pc) {
        case 0x2e930cu: goto label_2e930c;
        case 0x2e9320u: goto label_2e9320;
        case 0x2e9338u: goto label_2e9338;
        case 0x2e9348u: goto label_2e9348;
        case 0x2e9360u: goto label_2e9360;
        case 0x2e937cu: goto label_2e937c;
        case 0x2e9394u: goto label_2e9394;
        case 0x2e93c0u: goto label_2e93c0;
        case 0x2e93d8u: goto label_2e93d8;
        default: break;
    }

    ctx->pc = 0x2e92e0u;

    // 0x2e92e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e92e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e92e4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2e92e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2e92e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e92e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2e92ec: 0x24a5fdd0  addiu       $a1, $a1, -0x230
    ctx->pc = 0x2e92ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966736));
    // 0x2e92f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e92f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e92f4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2e92f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2e92f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e92f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e92fc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2e92fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2e9300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e9304: 0xc0b8f92  jal         func_2E3E48
    ctx->pc = 0x2E9304u;
    SET_GPR_U32(ctx, 31, 0x2E930Cu);
    ctx->pc = 0x2E9308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9304u;
    // 0x2e9308: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3E48u, 0x2E9304u, 0x2E930Cu)) {
        return;
    }
    ctx->pc = 0x2E930Cu;
label_2e930c:
    // 0x2e930c: 0x24122040  addiu       $s2, $zero, 0x2040
    ctx->pc = 0x2e930cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8256));
    // 0x2e9310: 0xae320040  sw          $s2, 0x40($s1)
    ctx->pc = 0x2e9310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 18));
    // 0x2e9314: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2e9314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e9318: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E9318u;
    SET_GPR_U32(ctx, 31, 0x2E9320u);
    ctx->pc = 0x2E931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9318u;
    // 0x2e931c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E9318u, 0x2E9320u)) {
        return;
    }
    ctx->pc = 0x2E9320u;
label_2e9320:
    // 0x2e9320: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e9320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e9324: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e9328: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9328u;
    {
        const bool branch_taken_0x2e9328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9328u;
        // 0x2e932c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9328) {
            ctx->pc = 0x2E9340u;
            goto label_2e9340;
        }
    }
    ctx->pc = 0x2E9330u;
    // 0x2e9330: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E9330u;
    SET_GPR_U32(ctx, 31, 0x2E9338u);
    ctx->pc = 0x2E9334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9330u;
    // 0x2e9334: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E9330u, 0x2E9338u)) {
        return;
    }
    ctx->pc = 0x2E9338u;
label_2e9338:
    // 0x2e9338: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2e9338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e933c: 0x0  nop
    ctx->pc = 0x2e933cu;
    // NOP
label_2e9340:
    // 0x2e9340: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E9340u;
    SET_GPR_U32(ctx, 31, 0x2E9348u);
    ctx->pc = 0x2E9344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9340u;
    // 0x2e9344: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E9340u, 0x2E9348u)) {
        return;
    }
    ctx->pc = 0x2E9348u;
label_2e9348:
    // 0x2e9348: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e9348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e934c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e934cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e9350: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E9350u;
    {
        const bool branch_taken_0x2e9350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9350u;
        // 0x2e9354: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9350) {
            ctx->pc = 0x2E93B0u;
            goto label_2e93b0;
        }
    }
    ctx->pc = 0x2E9358u;
    // 0x2e9358: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E9358u;
    SET_GPR_U32(ctx, 31, 0x2E9360u);
    ctx->pc = 0x2E935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9358u;
    // 0x2e935c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E9358u, 0x2E9360u)) {
        return;
    }
    ctx->pc = 0x2E9360u;
label_2e9360:
    // 0x2e9360: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e9360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e9364: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2e9364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2e9368: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E9368u;
    {
        const bool branch_taken_0x2e9368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9368u;
        // 0x2e936c: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9368) {
            ctx->pc = 0x2E93B0u;
            goto label_2e93b0;
        }
    }
    ctx->pc = 0x2E9370u;
    // 0x2e9370: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2e9370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e9374: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E9374u;
    SET_GPR_U32(ctx, 31, 0x2E937Cu);
    ctx->pc = 0x2E9378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9374u;
    // 0x2e9378: 0x24530300  addiu       $s3, $v0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E9374u, 0x2E937Cu)) {
        return;
    }
    ctx->pc = 0x2E937Cu;
label_2e937c:
    // 0x2e937c: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e937cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e9380: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e9384: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9384u;
    {
        const bool branch_taken_0x2e9384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9384) {
            ctx->pc = 0x2E9388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9384u;
            // 0x2e9388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E93A0u;
            goto label_2e93a0;
        }
    }
    ctx->pc = 0x2E938Cu;
    // 0x2e938c: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E938Cu;
    SET_GPR_U32(ctx, 31, 0x2E9394u);
    ctx->pc = 0x2E9390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E938Cu;
    // 0x2e9390: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E938Cu, 0x2E9394u)) {
        return;
    }
    ctx->pc = 0x2E9394u;
label_2e9394:
    // 0x2e9394: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e9394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e9398: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e939c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2e939cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_2e93a0:
    // 0x2e93a0: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x2e93a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e93a4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2e93a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e93a8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E93A8u;
    {
        const bool branch_taken_0x2e93a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93A8u;
        // 0x2e93ac: 0x24420007  addiu       $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e93a8) {
            ctx->pc = 0x2E93ECu;
            goto label_2e93ec;
        }
    }
    ctx->pc = 0x2E93B0u;
label_2e93b0:
    // 0x2e93b0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2e93b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e93b4: 0x24530300  addiu       $s3, $v0, 0x300
    ctx->pc = 0x2e93b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x2e93b8: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E93B8u;
    SET_GPR_U32(ctx, 31, 0x2E93C0u);
    ctx->pc = 0x2E93BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E93B8u;
    // 0x2e93bc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E93B8u, 0x2E93C0u)) {
        return;
    }
    ctx->pc = 0x2E93C0u;
label_2e93c0:
    // 0x2e93c0: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e93c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e93c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e93c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e93c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E93C8u;
    {
        const bool branch_taken_0x2e93c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e93c8) {
            ctx->pc = 0x2E93CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E93C8u;
            // 0x2e93cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E93E0u;
            goto label_2e93e0;
        }
    }
    ctx->pc = 0x2E93D0u;
    // 0x2e93d0: 0xc0b8448  jal         func_2E1120
    ctx->pc = 0x2E93D0u;
    SET_GPR_U32(ctx, 31, 0x2E93D8u);
    ctx->pc = 0x2E93D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E93D0u;
    // 0x2e93d4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1120u, 0x2E93D0u, 0x2E93D8u)) {
        return;
    }
    ctx->pc = 0x2E93D8u;
label_2e93d8:
    // 0x2e93d8: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x2e93d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e93dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e93dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2e93e0:
    // 0x2e93e0: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x2e93e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e93e4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2e93e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e93e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e93e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2e93ec:
    // 0x2e93ec: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x2e93ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x2e93f0: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x2e93f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x2e93f4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2e93f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x2e93f8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2e93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2e93fc: 0x24429450  addiu       $v0, $v0, -0x6BB0
    ctx->pc = 0x2e93fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939728));
    // 0x2e9400: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x2e9400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x2e9404: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2e9404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2e9408: 0x24639e58  addiu       $v1, $v1, -0x61A8
    ctx->pc = 0x2e9408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942296));
    // 0x2e940c: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x2e940cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x2e9410: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x2e9410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x2e9414: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x2e9414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
    // 0x2e9418: 0x244296e0  addiu       $v0, $v0, -0x6920
    ctx->pc = 0x2e9418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940384));
    // 0x2e941c: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2e941cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x2e9420: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2e9420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2e9424: 0x24639eb0  addiu       $v1, $v1, -0x6150
    ctx->pc = 0x2e9424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942384));
    // 0x2e9428: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x2e9428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x2e942c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2e942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e9430: 0xa6220044  sh          $v0, 0x44($s1)
    ctx->pc = 0x2e9430u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e9434: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2e9434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e9438: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e9438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e943c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e943cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9440: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2e9440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9448: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9448u;
        // 0x2e944c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9450u;
}
