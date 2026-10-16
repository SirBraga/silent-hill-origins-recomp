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

// Function: sub_001AF8A0
// Address: 0x1af8a0 - 0x1afa18
void sub_001AF8A0_0x1af8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF8A0_0x1af8a0");
#endif

    switch (ctx->pc) {
        case 0x1af8d4u: goto label_1af8d4;
        case 0x1af8f4u: goto label_1af8f4;
        case 0x1af8fcu: goto label_1af8fc;
        case 0x1af918u: goto label_1af918;
        case 0x1af928u: goto label_1af928;
        case 0x1af93cu: goto label_1af93c;
        case 0x1af950u: goto label_1af950;
        case 0x1af958u: goto label_1af958;
        case 0x1af960u: goto label_1af960;
        case 0x1af96cu: goto label_1af96c;
        case 0x1af978u: goto label_1af978;
        case 0x1af990u: goto label_1af990;
        case 0x1af9d0u: goto label_1af9d0;
        case 0x1af9f4u: goto label_1af9f4;
        default: break;
    }

    ctx->pc = 0x1af8a0u;

    // 0x1af8a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1af8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1af8a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1af8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1af8a8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1af8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1af8ac: 0x2442c140  addiu       $v0, $v0, -0x3EC0
    ctx->pc = 0x1af8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951232));
    // 0x1af8b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1af8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1af8b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1af8b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af8b8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1af8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1af8bc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1af8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1af8c0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1af8c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af8c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1af8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1af8c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af8cc: 0xc06c2ac  jal         func_1B0AB0
    ctx->pc = 0x1AF8CCu;
    SET_GPR_U32(ctx, 31, 0x1AF8D4u);
    ctx->pc = 0x1AF8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF8CCu;
    // 0x1af8d0: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0AB0u, 0x1AF8CCu, 0x1AF8D4u)) {
        return;
    }
    ctx->pc = 0x1AF8D4u;
label_1af8d4:
    // 0x1af8d4: 0x8e700018  lw          $s0, 0x18($s3)
    ctx->pc = 0x1af8d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1af8d8: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AF8D8u;
    {
        const bool branch_taken_0x1af8d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af8d8) {
            ctx->pc = 0x1AF8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF8D8u;
            // 0x1af8dc: 0xae600154  sw          $zero, 0x154($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 340), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF900u;
            goto label_1af900;
        }
    }
    ctx->pc = 0x1AF8E0u;
    // 0x1af8e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1af8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1af8e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF8E4u;
    {
        const bool branch_taken_0x1af8e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af8e4) {
            ctx->pc = 0x1AF8F4u;
            goto label_1af8f4;
        }
    }
    ctx->pc = 0x1AF8ECu;
    // 0x1af8ec: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1AF8ECu;
    SET_GPR_U32(ctx, 31, 0x1AF8F4u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1AF8ECu, 0x1AF8F4u)) {
        return;
    }
    ctx->pc = 0x1AF8F4u;
label_1af8f4:
    // 0x1af8f4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AF8F4u;
    SET_GPR_U32(ctx, 31, 0x1AF8FCu);
    ctx->pc = 0x1AF8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF8F4u;
    // 0x1af8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AF8F4u, 0x1AF8FCu)) {
        return;
    }
    ctx->pc = 0x1AF8FCu;
label_1af8fc:
    // 0x1af8fc: 0xae600154  sw          $zero, 0x154($s3)
    ctx->pc = 0x1af8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 340), GPR_U32(ctx, 0));
label_1af900:
    // 0x1af900: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1af900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1af904: 0xae600158  sw          $zero, 0x158($s3)
    ctx->pc = 0x1af904u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 344), GPR_U32(ctx, 0));
    // 0x1af908: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x1af908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x1af90c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1af90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af910: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1AF910u;
    SET_GPR_U32(ctx, 31, 0x1AF918u);
    ctx->pc = 0x1AF914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF910u;
    // 0x1af914: 0x26720008  addiu       $s2, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1AF910u, 0x1AF918u)) {
        return;
    }
    ctx->pc = 0x1AF918u;
label_1af918:
    // 0x1af918: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1af918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1af91c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1af91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af920: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1AF920u;
    SET_GPR_U32(ctx, 31, 0x1AF928u);
    ctx->pc = 0x1AF924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF920u;
    // 0x1af924: 0x24a58898  addiu       $a1, $a1, -0x7768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1AF920u, 0x1AF928u)) {
        return;
    }
    ctx->pc = 0x1AF928u;
label_1af928:
    // 0x1af928: 0x3c11006d  lui         $s1, 0x6D
    ctx->pc = 0x1af928u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
    // 0x1af92c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1af92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af930: 0x2631bcf0  addiu       $s1, $s1, -0x4310
    ctx->pc = 0x1af930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950128));
    // 0x1af934: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1AF934u;
    SET_GPR_U32(ctx, 31, 0x1AF93Cu);
    ctx->pc = 0x1AF938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF934u;
    // 0x1af938: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1AF934u, 0x1AF93Cu)) {
        return;
    }
    ctx->pc = 0x1AF93Cu;
label_1af93c:
    // 0x1af93c: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x1af93cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x1af940: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1af940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af944: 0x2610bcf8  addiu       $s0, $s0, -0x4308
    ctx->pc = 0x1af944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950136));
    // 0x1af948: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1AF948u;
    SET_GPR_U32(ctx, 31, 0x1AF950u);
    ctx->pc = 0x1AF94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF948u;
    // 0x1af94c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1AF948u, 0x1AF950u)) {
        return;
    }
    ctx->pc = 0x1AF950u;
label_1af950:
    // 0x1af950: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1AF950u;
    SET_GPR_U32(ctx, 31, 0x1AF958u);
    ctx->pc = 0x1AF954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF950u;
    // 0x1af954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1AF950u, 0x1AF958u)) {
        return;
    }
    ctx->pc = 0x1AF958u;
label_1af958:
    // 0x1af958: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1AF958u;
    SET_GPR_U32(ctx, 31, 0x1AF960u);
    ctx->pc = 0x1AF95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF958u;
    // 0x1af95c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1AF958u, 0x1AF960u)) {
        return;
    }
    ctx->pc = 0x1AF960u;
label_1af960:
    // 0x1af960: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1af960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1af964: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1AF964u;
    SET_GPR_U32(ctx, 31, 0x1AF96Cu);
    ctx->pc = 0x1AF968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF964u;
    // 0x1af968: 0x248486b8  addiu       $a0, $a0, -0x7948 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1AF964u, 0x1AF96Cu)) {
        return;
    }
    ctx->pc = 0x1AF96Cu;
label_1af96c:
    // 0x1af96c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1af96cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1af970: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1AF970u;
    SET_GPR_U32(ctx, 31, 0x1AF978u);
    ctx->pc = 0x1AF974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF970u;
    // 0x1af974: 0x248486c0  addiu       $a0, $a0, -0x7940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1AF970u, 0x1AF978u)) {
        return;
    }
    ctx->pc = 0x1AF978u;
label_1af978:
    // 0x1af978: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1af978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1af97c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1af97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1af980: 0x2442bbe8  addiu       $v0, $v0, -0x4418
    ctx->pc = 0x1af980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949864));
    // 0x1af984: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AF984u;
    {
        const bool branch_taken_0x1af984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF984u;
        // 0x1af988: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af984) {
            ctx->pc = 0x1AF9E8u;
            goto label_1af9e8;
        }
    }
    ctx->pc = 0x1AF98Cu;
    // 0x1af98c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1af98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1af990:
    // 0x1af990: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AF990u;
    {
        const bool branch_taken_0x1af990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af990) {
            ctx->pc = 0x1AF994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF990u;
            // 0x1af994: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF9E0u;
            goto label_1af9e0;
        }
    }
    ctx->pc = 0x1AF998u;
    // 0x1af998: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1af998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1af99c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF99Cu;
    {
        const bool branch_taken_0x1af99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF99Cu;
        // 0x1af9a0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af99c) {
            ctx->pc = 0x1AF9ACu;
            goto label_1af9ac;
        }
    }
    ctx->pc = 0x1AF9A4u;
    // 0x1af9a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF9A4u;
    {
        const bool branch_taken_0x1af9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9A4u;
        // 0x1af9a8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af9a4) {
            ctx->pc = 0x1AF9B0u;
            goto label_1af9b0;
        }
    }
    ctx->pc = 0x1AF9ACu;
label_1af9ac:
    // 0x1af9ac: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1af9acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1af9b0:
    // 0x1af9b0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1af9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1af9b4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF9B4u;
    {
        const bool branch_taken_0x1af9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9B4u;
        // 0x1af9b8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af9b4) {
            ctx->pc = 0x1AF9C4u;
            goto label_1af9c4;
        }
    }
    ctx->pc = 0x1AF9BCu;
    // 0x1af9bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF9BCu;
    {
        const bool branch_taken_0x1af9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9BCu;
        // 0x1af9c0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af9bc) {
            ctx->pc = 0x1AF9C8u;
            goto label_1af9c8;
        }
    }
    ctx->pc = 0x1AF9C4u;
label_1af9c4:
    // 0x1af9c4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1af9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1af9c8:
    // 0x1af9c8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1AF9C8u;
    SET_GPR_U32(ctx, 31, 0x1AF9D0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1AF9C8u, 0x1AF9D0u)) {
        return;
    }
    ctx->pc = 0x1AF9D0u;
label_1af9d0:
    // 0x1af9d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1af9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1af9d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1af9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1af9d8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1af9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1af9dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1af9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1af9e0:
    // 0x1af9e0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1AF9E0u;
    {
        const bool branch_taken_0x1af9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af9e0) {
            ctx->pc = 0x1AF9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF9E0u;
            // 0x1af9e4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af990;
        }
    }
    ctx->pc = 0x1AF9E8u;
label_1af9e8:
    // 0x1af9e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1af9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af9ec: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x1AF9ECu;
    SET_GPR_U32(ctx, 31, 0x1AF9F4u);
    ctx->pc = 0x1AF9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF9ECu;
    // 0x1af9f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x1AF9ECu, 0x1AF9F4u)) {
        return;
    }
    ctx->pc = 0x1AF9F4u;
label_1af9f4:
    // 0x1af9f4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1af9f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1af9f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1af9f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1af9fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1af9fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1afa00: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1afa00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afa04: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1afa04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afa08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1afa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afa0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA0Cu;
        // 0x1afa10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFA14u;
    // 0x1afa14: 0x0  nop
    ctx->pc = 0x1afa14u;
    // NOP
    ctx->pc = 0x1afa18u;
}
