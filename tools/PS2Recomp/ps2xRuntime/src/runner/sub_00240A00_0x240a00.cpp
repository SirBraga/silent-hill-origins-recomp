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

// Function: sub_00240A00
// Address: 0x240a00 - 0x241448
void sub_00240A00_0x240a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240A00_0x240a00");
#endif

    switch (ctx->pc) {
        case 0x240a50u: goto label_240a50;
        case 0x240a88u: goto label_240a88;
        case 0x240b10u: goto label_240b10;
        case 0x240b78u: goto label_240b78;
        case 0x240bc8u: goto label_240bc8;
        case 0x240be0u: goto label_240be0;
        case 0x240c98u: goto label_240c98;
        case 0x240d00u: goto label_240d00;
        case 0x240d50u: goto label_240d50;
        case 0x240d68u: goto label_240d68;
        case 0x240e08u: goto label_240e08;
        case 0x240e98u: goto label_240e98;
        case 0x240f08u: goto label_240f08;
        case 0x240f1cu: goto label_240f1c;
        case 0x240f60u: goto label_240f60;
        case 0x240fb0u: goto label_240fb0;
        case 0x241060u: goto label_241060;
        case 0x241108u: goto label_241108;
        case 0x2411b8u: goto label_2411b8;
        case 0x241248u: goto label_241248;
        case 0x2412c0u: goto label_2412c0;
        case 0x241338u: goto label_241338;
        case 0x2413d4u: goto label_2413d4;
        case 0x2413e4u: goto label_2413e4;
        case 0x24140cu: goto label_24140c;
        case 0x24141cu: goto label_24141c;
        default: break;
    }

    ctx->pc = 0x240a00u;

    // 0x240a00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x240a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x240a04: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x240a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x240a08: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x240a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x240a0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x240a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a10: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x240a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x240a14: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x240a14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a18: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x240a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x240a1c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x240a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x240a20: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x240a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x240a24: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x240a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x240a28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240a2c: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x240a2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x240a30: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x240a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x240a34: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x240a34u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x240a38: 0x16a00007  bnez        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x240A38u;
    {
        const bool branch_taken_0x240a38 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x240A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A38u;
        // 0x240a3c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a38) {
            ctx->pc = 0x240A58u;
            goto label_240a58;
        }
    }
    ctx->pc = 0x240A40u;
    // 0x240a40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x240a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a48: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x240A48u;
    SET_GPR_U32(ctx, 31, 0x240A50u);
    ctx->pc = 0x240A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A48u;
    // 0x240a4c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x240A48u, 0x240A50u)) {
        return;
    }
    ctx->pc = 0x240A50u;
label_240a50:
    // 0x240a50: 0x10400273  beqz        $v0, . + 4 + (0x273 << 2)
    ctx->pc = 0x240A50u;
    {
        const bool branch_taken_0x240a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A50u;
        // 0x240a54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a50) {
            ctx->pc = 0x241420u;
            goto label_241420;
        }
    }
    ctx->pc = 0x240A58u;
label_240a58:
    // 0x240a58: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x240a58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x240a5c: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x240a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x240a60: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x240A60u;
    {
        const bool branch_taken_0x240a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240a60) {
            ctx->pc = 0x240A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240A60u;
            // 0x240a64: 0x8e83000c  lw          $v1, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240A94u;
            goto label_240a94;
        }
    }
    ctx->pc = 0x240A68u;
    // 0x240a68: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x240a68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x240a6c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x240a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x240a70: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x240a70u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x240a74: 0x56c00007  bnel        $s6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x240A74u;
    {
        const bool branch_taken_0x240a74 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x240a74) {
            ctx->pc = 0x240A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240A74u;
            // 0x240a78: 0x8e83000c  lw          $v1, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240A94u;
            goto label_240a94;
        }
    }
    ctx->pc = 0x240A7Cu;
    // 0x240a7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a80: 0xc08a130  jal         func_2284C0
    ctx->pc = 0x240A80u;
    SET_GPR_U32(ctx, 31, 0x240A88u);
    ctx->pc = 0x240A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A80u;
    // 0x240a84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2284C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2284C0u, 0x240A80u, 0x240A88u)) {
        return;
    }
    ctx->pc = 0x240A88u;
label_240a88:
    // 0x240a88: 0x10400265  beqz        $v0, . + 4 + (0x265 << 2)
    ctx->pc = 0x240A88u;
    {
        const bool branch_taken_0x240a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A88u;
        // 0x240a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a88) {
            ctx->pc = 0x241420u;
            goto label_241420;
        }
    }
    ctx->pc = 0x240A90u;
    // 0x240a90: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x240a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_240a94:
    // 0x240a94: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x240a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x240a98: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x240a98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x240a9c: 0x8e930014  lw          $s3, 0x14($s4)
    ctx->pc = 0x240a9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x240aa0: 0x1062006b  beq         $v1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x240AA0u;
    {
        const bool branch_taken_0x240aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AA0u;
        // 0x240aa4: 0x8e870018  lw          $a3, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240aa0) {
            ctx->pc = 0x240C50u;
            goto label_240c50;
        }
    }
    ctx->pc = 0x240AA8u;
    // 0x240aa8: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x240aa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x240aac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240AACu;
    {
        const bool branch_taken_0x240aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AACu;
        // 0x240ab0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240aac) {
            ctx->pc = 0x240AC4u;
            goto label_240ac4;
        }
    }
    ctx->pc = 0x240AB4u;
    // 0x240ab4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x240AB4u;
    {
        const bool branch_taken_0x240ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240ab4) {
            ctx->pc = 0x240AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240AB4u;
            // 0x240ab8: 0x92230023  lbu         $v1, 0x23($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240AD8u;
            goto label_240ad8;
        }
    }
    ctx->pc = 0x240ABCu;
    // 0x240abc: 0x1000023e  b           . + 4 + (0x23E << 2)
    ctx->pc = 0x240ABCu;
    {
        const bool branch_taken_0x240abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240ABCu;
        // 0x240ac0: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240abc) {
            ctx->pc = 0x2413B8u;
            goto label_2413b8;
        }
    }
    ctx->pc = 0x240AC4u;
label_240ac4:
    // 0x240ac4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x240ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x240ac8: 0x50620121  beql        $v1, $v0, . + 4 + (0x121 << 2)
    ctx->pc = 0x240AC8u;
    {
        const bool branch_taken_0x240ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240ac8) {
            ctx->pc = 0x240ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240AC8u;
            // 0x240acc: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240F50u;
            goto label_240f50;
        }
    }
    ctx->pc = 0x240AD0u;
    // 0x240ad0: 0x10000239  b           . + 4 + (0x239 << 2)
    ctx->pc = 0x240AD0u;
    {
        const bool branch_taken_0x240ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AD0u;
        // 0x240ad4: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ad0) {
            ctx->pc = 0x2413B8u;
            goto label_2413b8;
        }
    }
    ctx->pc = 0x240AD8u;
label_240ad8:
    // 0x240ad8: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x240ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x240adc: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x240ADCu;
    {
        const bool branch_taken_0x240adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240ADCu;
        // 0x240ae0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240adc) {
            ctx->pc = 0x240C48u;
            goto label_240c48;
        }
    }
    ctx->pc = 0x240AE4u;
    // 0x240ae4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x240ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x240ae8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240AE8u;
    {
        const bool branch_taken_0x240ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AE8u;
        // 0x240aec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ae8) {
            ctx->pc = 0x240B00u;
            goto label_240b00;
        }
    }
    ctx->pc = 0x240AF0u;
    // 0x240af0: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x240AF0u;
    {
        const bool branch_taken_0x240af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AF0u;
        // 0x240af4: 0x3c060080  lui         $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240af0) {
            ctx->pc = 0x240B64u;
            goto label_240b64;
        }
    }
    ctx->pc = 0x240AF8u;
    // 0x240af8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x240AF8u;
    {
        const bool branch_taken_0x240af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AF8u;
        // 0x240afc: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240af8) {
            ctx->pc = 0x240BBCu;
            goto label_240bbc;
        }
    }
    ctx->pc = 0x240B00u;
label_240b00:
    // 0x240b00: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x240b00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x240b04: 0x240afff8  addiu       $t2, $zero, -0x8
    ctx->pc = 0x240b04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x240b08: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x240b08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x240b0c: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x240b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_240b10:
    // 0x240b10: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x240b10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x240b14: 0x311c2  srl         $v0, $v1, 7
    ctx->pc = 0x240b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x240b18: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x240b18u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x240b1c: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x240b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x240b20: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x240b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
    // 0x240b24: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x240b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x240b28: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x240b28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x240b2c: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x240b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x240b30: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x240b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x240b34: 0xa0e40001  sb          $a0, 0x1($a3)
    ctx->pc = 0x240b34u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x240b38: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x240B38u;
    {
        const bool branch_taken_0x240b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B38u;
        // 0x240b3c: 0xa0e50000  sb          $a1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b38) {
            ctx->pc = 0x240B48u;
            goto label_240b48;
        }
    }
    ctx->pc = 0x240B40u;
    // 0x240b40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x240B40u;
    {
        const bool branch_taken_0x240b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B40u;
        // 0x240b44: 0xa0e90003  sb          $t1, 0x3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b40) {
            ctx->pc = 0x240B4Cu;
            goto label_240b4c;
        }
    }
    ctx->pc = 0x240B48u;
label_240b48:
    // 0x240b48: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x240b48u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
label_240b4c:
    // 0x240b4c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x240b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x240b50: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x240b50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x240b54: 0x501ffee  bgez        $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x240B54u;
    {
        const bool branch_taken_0x240b54 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x240B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B54u;
        // 0x240b58: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b54) {
            ctx->pc = 0x240B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240b10;
        }
    }
    ctx->pc = 0x240B5Cu;
    // 0x240b5c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x240B5Cu;
    {
        const bool branch_taken_0x240b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B5Cu;
        // 0x240b60: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b5c) {
            ctx->pc = 0x240BBCu;
            goto label_240bbc;
        }
    }
    ctx->pc = 0x240B64u;
label_240b64:
    // 0x240b64: 0x8e290008  lw          $t1, 0x8($s1)
    ctx->pc = 0x240b64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x240b68: 0x3c0bff00  lui         $t3, 0xFF00
    ctx->pc = 0x240b68u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65280 << 16));
    // 0x240b6c: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x240b6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x240b70: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x240b70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b74: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x240b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_240b78:
    // 0x240b78: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x240b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x240b7c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x240b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x240b80: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x240b80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x240b84: 0x8b1824  and         $v1, $a0, $t3
    ctx->pc = 0x240b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x240b88: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x240b88u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x240b8c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x240b8cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x240b90: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x240b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x240b94: 0xa0e50002  sb          $a1, 0x2($a3)
    ctx->pc = 0x240b94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x240b98: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x240b98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x240b9c: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x240b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x240ba0: 0x50ca0001  beql        $a2, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x240BA0u;
    {
        const bool branch_taken_0x240ba0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x240ba0) {
            ctx->pc = 0x240BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240BA0u;
            // 0x240ba4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x240BA8u;
            goto label_240ba8;
        }
    }
    ctx->pc = 0x240BA8u;
label_240ba8:
    // 0x240ba8: 0x1812  mflo        $v1
    ctx->pc = 0x240ba8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x240bac: 0xa0e30003  sb          $v1, 0x3($a3)
    ctx->pc = 0x240bacu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x240bb0: 0x501fff1  bgez        $t0, . + 4 + (-0xF << 2)
    ctx->pc = 0x240BB0u;
    {
        const bool branch_taken_0x240bb0 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x240BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BB0u;
        // 0x240bb4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bb0) {
            ctx->pc = 0x240B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240b78;
        }
    }
    ctx->pc = 0x240BB8u;
    // 0x240bb8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x240bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_240bbc:
    // 0x240bbc: 0x1840020b  blez        $v0, . + 4 + (0x20B << 2)
    ctx->pc = 0x240BBCu;
    {
        const bool branch_taken_0x240bbc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x240BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BBCu;
        // 0x240bc0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bbc) {
            ctx->pc = 0x2413ECu;
            goto label_2413ec;
        }
    }
    ctx->pc = 0x240BC4u;
    // 0x240bc4: 0x0  nop
    ctx->pc = 0x240bc4u;
    // NOP
label_240bc8:
    // 0x240bc8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x240bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x240bcc: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x240bccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x240bd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240bd4: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x240bd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240bd8: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x240BD8u;
    {
        const bool branch_taken_0x240bd8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x240BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BD8u;
        // 0x240bdc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bd8) {
            ctx->pc = 0x240C20u;
            goto label_240c20;
        }
    }
    ctx->pc = 0x240BE0u;
label_240be0:
    // 0x240be0: 0x8622001c  lh          $v0, 0x1C($s1)
    ctx->pc = 0x240be0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x240be4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x240be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x240be8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x240be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x240bec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x240BECu;
    {
        const bool branch_taken_0x240bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240bec) {
            ctx->pc = 0x240BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240BECu;
            // 0x240bf0: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240C04u;
            goto label_240c04;
        }
    }
    ctx->pc = 0x240BF4u;
    // 0x240bf4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x240bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x240bf8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x240bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x240bfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x240BFCu;
    {
        const bool branch_taken_0x240bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240BFCu;
        // 0x240c00: 0x21102  srl         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bfc) {
            ctx->pc = 0x240C08u;
            goto label_240c08;
        }
    }
    ctx->pc = 0x240C04u;
label_240c04:
    // 0x240c04: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x240c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_240c08:
    // 0x240c08: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x240c08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x240c0c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x240c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x240c10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x240c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x240c14: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x240c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x240c18: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x240C18u;
    {
        const bool branch_taken_0x240c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C18u;
        // 0x240c1c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c18) {
            ctx->pc = 0x240BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240be0;
        }
    }
    ctx->pc = 0x240C20u;
label_240c20:
    // 0x240c20: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x240c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x240c24: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x240c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c28: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x240c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x240c2c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x240c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x240c30: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x240c30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x240c34: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x240c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x240c38: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x240C38u;
    {
        const bool branch_taken_0x240c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C38u;
        // 0x240c3c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c38) {
            ctx->pc = 0x240BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240bc8;
        }
    }
    ctx->pc = 0x240C40u;
    // 0x240c40: 0x100001eb  b           . + 4 + (0x1EB << 2)
    ctx->pc = 0x240C40u;
    {
        const bool branch_taken_0x240c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C40u;
        // 0x240c44: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c40) {
            ctx->pc = 0x2413F0u;
            goto label_2413f0;
        }
    }
    ctx->pc = 0x240C48u;
label_240c48:
    // 0x240c48: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x240C48u;
    {
        const bool branch_taken_0x240c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C48u;
        // 0x240c4c: 0x30620060  andi        $v0, $v1, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c48) {
            ctx->pc = 0x2413BCu;
            goto label_2413bc;
        }
    }
    ctx->pc = 0x240C50u;
label_240c50:
    // 0x240c50: 0x92240023  lbu         $a0, 0x23($s1)
    ctx->pc = 0x240c50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x240c54: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x240c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x240c58: 0x30830060  andi        $v1, $a0, 0x60
    ctx->pc = 0x240c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x240c5c: 0x1062005c  beq         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x240C5Cu;
    {
        const bool branch_taken_0x240c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C5Cu;
        // 0x240c60: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c5c) {
            ctx->pc = 0x240DD0u;
            goto label_240dd0;
        }
    }
    ctx->pc = 0x240C64u;
    // 0x240c64: 0x146200b6  bne         $v1, $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x240C64u;
    {
        const bool branch_taken_0x240c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x240C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C64u;
        // 0x240c68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c64) {
            ctx->pc = 0x240F40u;
            goto label_240f40;
        }
    }
    ctx->pc = 0x240C6Cu;
    // 0x240c6c: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x240c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x240c70: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240C70u;
    {
        const bool branch_taken_0x240c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C70u;
        // 0x240c74: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c70) {
            ctx->pc = 0x240C88u;
            goto label_240c88;
        }
    }
    ctx->pc = 0x240C78u;
    // 0x240c78: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x240C78u;
    {
        const bool branch_taken_0x240c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C78u;
        // 0x240c7c: 0x3c060080  lui         $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c78) {
            ctx->pc = 0x240CECu;
            goto label_240cec;
        }
    }
    ctx->pc = 0x240C80u;
    // 0x240c80: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x240C80u;
    {
        const bool branch_taken_0x240c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240C80u;
        // 0x240c84: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c80) {
            ctx->pc = 0x240D44u;
            goto label_240d44;
        }
    }
    ctx->pc = 0x240C88u;
label_240c88:
    // 0x240c88: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x240c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x240c8c: 0x240afff8  addiu       $t2, $zero, -0x8
    ctx->pc = 0x240c8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x240c90: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x240c90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x240c94: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x240c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_240c98:
    // 0x240c98: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x240c98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x240c9c: 0x311c2  srl         $v0, $v1, 7
    ctx->pc = 0x240c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x240ca0: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x240ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x240ca4: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x240ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x240ca8: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x240ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
    // 0x240cac: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x240cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x240cb0: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x240cb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x240cb4: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x240cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x240cb8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x240cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x240cbc: 0xa0e40001  sb          $a0, 0x1($a3)
    ctx->pc = 0x240cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x240cc0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x240CC0u;
    {
        const bool branch_taken_0x240cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CC0u;
        // 0x240cc4: 0xa0e50000  sb          $a1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cc0) {
            ctx->pc = 0x240CD0u;
            goto label_240cd0;
        }
    }
    ctx->pc = 0x240CC8u;
    // 0x240cc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x240CC8u;
    {
        const bool branch_taken_0x240cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CC8u;
        // 0x240ccc: 0xa0e90003  sb          $t1, 0x3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cc8) {
            ctx->pc = 0x240CD4u;
            goto label_240cd4;
        }
    }
    ctx->pc = 0x240CD0u;
label_240cd0:
    // 0x240cd0: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x240cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
label_240cd4:
    // 0x240cd4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x240cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x240cd8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x240cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x240cdc: 0x501ffee  bgez        $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x240CDCu;
    {
        const bool branch_taken_0x240cdc = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x240CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CDCu;
        // 0x240ce0: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240cdc) {
            ctx->pc = 0x240C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240c98;
        }
    }
    ctx->pc = 0x240CE4u;
    // 0x240ce4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x240CE4u;
    {
        const bool branch_taken_0x240ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240CE4u;
        // 0x240ce8: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ce4) {
            ctx->pc = 0x240D44u;
            goto label_240d44;
        }
    }
    ctx->pc = 0x240CECu;
label_240cec:
    // 0x240cec: 0x8e290008  lw          $t1, 0x8($s1)
    ctx->pc = 0x240cecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x240cf0: 0x3c0bff00  lui         $t3, 0xFF00
    ctx->pc = 0x240cf0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65280 << 16));
    // 0x240cf4: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x240cf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x240cf8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x240cf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240cfc: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x240cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_240d00:
    // 0x240d00: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x240d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x240d04: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x240d04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x240d08: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x240d08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x240d0c: 0x8b1824  and         $v1, $a0, $t3
    ctx->pc = 0x240d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 11));
    // 0x240d10: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x240d10u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x240d14: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x240d14u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x240d18: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x240d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x240d1c: 0xa0e50002  sb          $a1, 0x2($a3)
    ctx->pc = 0x240d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x240d20: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x240d20u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x240d24: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x240d24u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x240d28: 0x50ca0001  beql        $a2, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x240D28u;
    {
        const bool branch_taken_0x240d28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x240d28) {
            ctx->pc = 0x240D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240D28u;
            // 0x240d2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x240D30u;
            goto label_240d30;
        }
    }
    ctx->pc = 0x240D30u;
label_240d30:
    // 0x240d30: 0x1812  mflo        $v1
    ctx->pc = 0x240d30u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x240d34: 0xa0e30003  sb          $v1, 0x3($a3)
    ctx->pc = 0x240d34u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x240d38: 0x501fff1  bgez        $t0, . + 4 + (-0xF << 2)
    ctx->pc = 0x240D38u;
    {
        const bool branch_taken_0x240d38 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x240D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D38u;
        // 0x240d3c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d38) {
            ctx->pc = 0x240D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240d00;
        }
    }
    ctx->pc = 0x240D40u;
    // 0x240d40: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x240d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_240d44:
    // 0x240d44: 0x184001a9  blez        $v0, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x240D44u;
    {
        const bool branch_taken_0x240d44 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x240D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D44u;
        // 0x240d48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d44) {
            ctx->pc = 0x2413ECu;
            goto label_2413ec;
        }
    }
    ctx->pc = 0x240D4Cu;
    // 0x240d4c: 0x0  nop
    ctx->pc = 0x240d4cu;
    // NOP
label_240d50:
    // 0x240d50: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x240d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x240d54: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x240d54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x240d58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d5c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x240d5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d60: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x240D60u;
    {
        const bool branch_taken_0x240d60 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x240D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D60u;
        // 0x240d64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d60) {
            ctx->pc = 0x240DA8u;
            goto label_240da8;
        }
    }
    ctx->pc = 0x240D68u;
label_240d68:
    // 0x240d68: 0x8622001c  lh          $v0, 0x1C($s1)
    ctx->pc = 0x240d68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x240d6c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x240d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x240d70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x240d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x240d74: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x240D74u;
    {
        const bool branch_taken_0x240d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240d74) {
            ctx->pc = 0x240D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240D74u;
            // 0x240d78: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240D8Cu;
            goto label_240d8c;
        }
    }
    ctx->pc = 0x240D7Cu;
    // 0x240d7c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x240d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x240d80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x240d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x240d84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x240D84u;
    {
        const bool branch_taken_0x240d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240D84u;
        // 0x240d88: 0x21102  srl         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d84) {
            ctx->pc = 0x240D90u;
            goto label_240d90;
        }
    }
    ctx->pc = 0x240D8Cu;
label_240d8c:
    // 0x240d8c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x240d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_240d90:
    // 0x240d90: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x240d90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x240d94: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x240d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x240d98: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x240d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x240d9c: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x240d9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x240da0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x240DA0u;
    {
        const bool branch_taken_0x240da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DA0u;
        // 0x240da4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240da0) {
            ctx->pc = 0x240D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240d68;
        }
    }
    ctx->pc = 0x240DA8u;
label_240da8:
    // 0x240da8: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x240da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x240dac: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x240dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240db0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x240db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x240db4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x240db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x240db8: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x240db8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x240dbc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x240dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x240dc0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x240DC0u;
    {
        const bool branch_taken_0x240dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DC0u;
        // 0x240dc4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240dc0) {
            ctx->pc = 0x240D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240d50;
        }
    }
    ctx->pc = 0x240DC8u;
    // 0x240dc8: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x240DC8u;
    {
        const bool branch_taken_0x240dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DC8u;
        // 0x240dcc: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240dc8) {
            ctx->pc = 0x2413F0u;
            goto label_2413f0;
        }
    }
    ctx->pc = 0x240DD0u;
label_240dd0:
    // 0x240dd0: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x240dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x240dd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240dd8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240DD8u;
    {
        const bool branch_taken_0x240dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DD8u;
        // 0x240ddc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240dd8) {
            ctx->pc = 0x240DF0u;
            goto label_240df0;
        }
    }
    ctx->pc = 0x240DE0u;
    // 0x240de0: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x240DE0u;
    {
        const bool branch_taken_0x240de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DE0u;
        // 0x240de4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240de0) {
            ctx->pc = 0x240E7Cu;
            goto label_240e7c;
        }
    }
    ctx->pc = 0x240DE8u;
    // 0x240de8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x240DE8u;
    {
        const bool branch_taken_0x240de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240DE8u;
        // 0x240dec: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240de8) {
            ctx->pc = 0x240EFCu;
            goto label_240efc;
        }
    }
    ctx->pc = 0x240DF0u;
label_240df0:
    // 0x240df0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x240df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x240df4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x240df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x240df8: 0x244bb3a0  addiu       $t3, $v0, -0x4C60
    ctx->pc = 0x240df8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947744));
    // 0x240dfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x240dfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e00: 0x240afff8  addiu       $t2, $zero, -0x8
    ctx->pc = 0x240e00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x240e04: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x240e04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_240e08:
    // 0x240e08: 0x81843  sra         $v1, $t0, 1
    ctx->pc = 0x240e08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 1));
    // 0x240e0c: 0x310200e7  andi        $v0, $t0, 0xE7
    ctx->pc = 0x240e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)231);
    // 0x240e10: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x240e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x240e14: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x240e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x240e18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x240e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240e1c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x240e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x240e20: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x240e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x240e24: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x240e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x240e28: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x240e28u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240e2c: 0x419c2  srl         $v1, $a0, 7
    ctx->pc = 0x240e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
    // 0x240e30: 0x41082  srl         $v0, $a0, 2
    ctx->pc = 0x240e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x240e34: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x240e34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x240e38: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x240e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x240e3c: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x240e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
    // 0x240e40: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x240e40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x240e44: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x240e44u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x240e48: 0x30848000  andi        $a0, $a0, 0x8000
    ctx->pc = 0x240e48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x240e4c: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x240e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x240e50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240E50u;
    {
        const bool branch_taken_0x240e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x240E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E50u;
        // 0x240e54: 0xa0e50000  sb          $a1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e50) {
            ctx->pc = 0x240E60u;
            goto label_240e60;
        }
    }
    ctx->pc = 0x240E58u;
    // 0x240e58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x240E58u;
    {
        const bool branch_taken_0x240e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E58u;
        // 0x240e5c: 0xa0e90003  sb          $t1, 0x3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e58) {
            ctx->pc = 0x240E64u;
            goto label_240e64;
        }
    }
    ctx->pc = 0x240E60u;
label_240e60:
    // 0x240e60: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x240e60u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
label_240e64:
    // 0x240e64: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x240e64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x240e68: 0x29020100  slti        $v0, $t0, 0x100
    ctx->pc = 0x240e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x240e6c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x240E6Cu;
    {
        const bool branch_taken_0x240e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E6Cu;
        // 0x240e70: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e6c) {
            ctx->pc = 0x240E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240e08;
        }
    }
    ctx->pc = 0x240E74u;
    // 0x240e74: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x240E74u;
    {
        const bool branch_taken_0x240e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240E74u;
        // 0x240e78: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e74) {
            ctx->pc = 0x240EFCu;
            goto label_240efc;
        }
    }
    ctx->pc = 0x240E7Cu;
label_240e7c:
    // 0x240e7c: 0x3c090080  lui         $t1, 0x80
    ctx->pc = 0x240e7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)128 << 16));
    // 0x240e80: 0x8e2a0008  lw          $t2, 0x8($s1)
    ctx->pc = 0x240e80u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x240e84: 0x244db3a0  addiu       $t5, $v0, -0x4C60
    ctx->pc = 0x240e84u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947744));
    // 0x240e88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x240e88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e8c: 0x3c0cff00  lui         $t4, 0xFF00
    ctx->pc = 0x240e8cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65280 << 16));
    // 0x240e90: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x240e90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x240e94: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x240e94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240e98:
    // 0x240e98: 0x82043  sra         $a0, $t0, 1
    ctx->pc = 0x240e98u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 1));
    // 0x240e9c: 0x310300e7  andi        $v1, $t0, 0xE7
    ctx->pc = 0x240e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)231);
    // 0x240ea0: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x240ea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x240ea4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x240ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x240ea8: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x240ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x240eac: 0x29060100  slti        $a2, $t0, 0x100
    ctx->pc = 0x240eacu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x240eb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x240eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x240eb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x240eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x240eb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x240eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x240ebc: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x240ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x240ec0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x240ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240ec4: 0x4c2024  and         $a0, $v0, $t4
    ctx->pc = 0x240ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x240ec8: 0x22c02  srl         $a1, $v0, 16
    ctx->pc = 0x240ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x240ecc: 0x89001b  divu        $zero, $a0, $t1
    ctx->pc = 0x240eccu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x240ed0: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x240ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x240ed4: 0xa0e50002  sb          $a1, 0x2($a3)
    ctx->pc = 0x240ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x240ed8: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x240ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x240edc: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x240edcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x240ee0: 0x512b0001  beql        $t1, $t3, . + 4 + (0x1 << 2)
    ctx->pc = 0x240EE0u;
    {
        const bool branch_taken_0x240ee0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 11));
        if (branch_taken_0x240ee0) {
            ctx->pc = 0x240EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240EE0u;
            // 0x240ee4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x240EE8u;
            goto label_240ee8;
        }
    }
    ctx->pc = 0x240EE8u;
label_240ee8:
    // 0x240ee8: 0x2012  mflo        $a0
    ctx->pc = 0x240ee8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x240eec: 0xa0e40003  sb          $a0, 0x3($a3)
    ctx->pc = 0x240eecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x240ef0: 0x14c0ffe9  bnez        $a2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x240EF0u;
    {
        const bool branch_taken_0x240ef0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x240EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EF0u;
        // 0x240ef4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ef0) {
            ctx->pc = 0x240E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240e98;
        }
    }
    ctx->pc = 0x240EF8u;
    // 0x240ef8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x240ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_240efc:
    // 0x240efc: 0x1840013b  blez        $v0, . + 4 + (0x13B << 2)
    ctx->pc = 0x240EFCu;
    {
        const bool branch_taken_0x240efc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x240F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240EFCu;
        // 0x240f00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240efc) {
            ctx->pc = 0x2413ECu;
            goto label_2413ec;
        }
    }
    ctx->pc = 0x240F04u;
    // 0x240f04: 0x0  nop
    ctx->pc = 0x240f04u;
    // NOP
label_240f08:
    // 0x240f08: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x240f08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x240f0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x240f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240f10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x240f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240f14: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x240F14u;
    SET_GPR_U32(ctx, 31, 0x240F1Cu);
    ctx->pc = 0x240F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240F14u;
    // 0x240f18: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x240F14u, 0x240F1Cu)) {
        return;
    }
    ctx->pc = 0x240F1Cu;
label_240f1c:
    // 0x240f1c: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x240f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x240f20: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x240f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x240f24: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x240f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x240f28: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x240f28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x240f2c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x240f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x240f30: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x240F30u;
    {
        const bool branch_taken_0x240f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F30u;
        // 0x240f34: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f30) {
            ctx->pc = 0x240F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240f08;
        }
    }
    ctx->pc = 0x240F38u;
    // 0x240f38: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x240F38u;
    {
        const bool branch_taken_0x240f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F38u;
        // 0x240f3c: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f38) {
            ctx->pc = 0x2413F0u;
            goto label_2413f0;
        }
    }
    ctx->pc = 0x240F40u;
label_240f40:
    // 0x240f40: 0x10600124  beqz        $v1, . + 4 + (0x124 << 2)
    ctx->pc = 0x240F40u;
    {
        const bool branch_taken_0x240f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x240f40) {
            ctx->pc = 0x2413D4u;
            goto label_2413d4;
        }
    }
    ctx->pc = 0x240F48u;
    // 0x240f48: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x240F48u;
    {
        const bool branch_taken_0x240f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240f48) {
            ctx->pc = 0x2413C4u;
            goto label_2413c4;
        }
    }
    ctx->pc = 0x240F50u;
label_240f50:
    // 0x240f50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x240f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240f54: 0x922a0023  lbu         $t2, 0x23($s1)
    ctx->pc = 0x240f54u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x240f58: 0x18400124  blez        $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x240F58u;
    {
        const bool branch_taken_0x240f58 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x240F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F58u;
        // 0x240f5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f58) {
            ctx->pc = 0x2413ECu;
            goto label_2413ec;
        }
    }
    ctx->pc = 0x240F60u;
label_240f60:
    // 0x240f60: 0x3143006f  andi        $v1, $t2, 0x6F
    ctx->pc = 0x240f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)111);
    // 0x240f64: 0x2c620046  sltiu       $v0, $v1, 0x46
    ctx->pc = 0x240f64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
    // 0x240f68: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x240F68u;
    {
        const bool branch_taken_0x240f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F68u;
        // 0x240f6c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f68) {
            ctx->pc = 0x24138Cu;
            goto label_24138c;
        }
    }
    ctx->pc = 0x240F70u;
    // 0x240f70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x240f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x240f74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x240f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x240f78: 0x2442b3d0  addiu       $v0, $v0, -0x4C30
    ctx->pc = 0x240f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947792));
    // 0x240f7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240f80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x240f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240f84: 0x800008  jr          $a0
    ctx->pc = 0x240F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240F8Cu: goto label_240f8c;
            case 0x241038u: goto label_241038;
            case 0x2410DCu: goto label_2410dc;
            case 0x241188u: goto label_241188;
            case 0x24122Cu: goto label_24122c;
            case 0x2412A4u: goto label_2412a4;
            case 0x241314u: goto label_241314;
            case 0x24138Cu: goto label_24138c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240F84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x240F8Cu;
label_240f8c:
    // 0x240f8c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x240f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x240f90: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x240f90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x240f94: 0x8e290008  lw          $t1, 0x8($s1)
    ctx->pc = 0x240f94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x240f98: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x240f98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240f9c: 0x184000fd  blez        $v0, . + 4 + (0xFD << 2)
    ctx->pc = 0x240F9Cu;
    {
        const bool branch_taken_0x240f9c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x240FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240F9Cu;
        // 0x240fa0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240f9c) {
            ctx->pc = 0x241394u;
            goto label_241394;
        }
    }
    ctx->pc = 0x240FA4u;
    // 0x240fa4: 0x240cfff8  addiu       $t4, $zero, -0x8
    ctx->pc = 0x240fa4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x240fa8: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x240fa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x240fac: 0x0  nop
    ctx->pc = 0x240facu;
    // NOP
label_240fb0:
    // 0x240fb0: 0x8622001c  lh          $v0, 0x1C($s1)
    ctx->pc = 0x240fb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x240fb4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x240fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x240fb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x240fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x240fbc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x240FBCu;
    {
        const bool branch_taken_0x240fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240fbc) {
            ctx->pc = 0x240FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240FBCu;
            // 0x240fc0: 0x90e20000  lbu         $v0, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240FD4u;
            goto label_240fd4;
        }
    }
    ctx->pc = 0x240FC4u;
    // 0x240fc4: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x240fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x240fc8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x240fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x240fcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x240FCCu;
    {
        const bool branch_taken_0x240fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240FCCu;
        // 0x240fd0: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fcc) {
            ctx->pc = 0x240FD8u;
            goto label_240fd8;
        }
    }
    ctx->pc = 0x240FD4u;
label_240fd4:
    // 0x240fd4: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x240fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_240fd8:
    // 0x240fd8: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x240fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x240fdc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x240fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x240fe0: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x240fe0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240fe4: 0x519c2  srl         $v1, $a1, 7
    ctx->pc = 0x240fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x240fe8: 0x51082  srl         $v0, $a1, 2
    ctx->pc = 0x240fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x240fec: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x240fecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x240ff0: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x240ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x240ff4: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x240ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
    // 0x240ff8: 0x8c2024  and         $a0, $a0, $t4
    ctx->pc = 0x240ff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
    // 0x240ffc: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x240ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x241000: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x241000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x241004: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x241004u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x241008: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x241008u;
    {
        const bool branch_taken_0x241008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241008u;
        // 0x24100c: 0xa0c40000  sb          $a0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241008) {
            ctx->pc = 0x241018u;
            goto label_241018;
        }
    }
    ctx->pc = 0x241010u;
    // 0x241010: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x241010u;
    {
        const bool branch_taken_0x241010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241010u;
        // 0x241014: 0xa0ca0003  sb          $t2, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241010) {
            ctx->pc = 0x24101Cu;
            goto label_24101c;
        }
    }
    ctx->pc = 0x241018u;
label_241018:
    // 0x241018: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x241018u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_24101c:
    // 0x24101c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x24101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x241020: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x241020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x241024: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x241024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241028: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x241028u;
    {
        const bool branch_taken_0x241028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241028u;
        // 0x24102c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241028) {
            ctx->pc = 0x240FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240fb0;
        }
    }
    ctx->pc = 0x241030u;
    // 0x241030: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x241030u;
    {
        const bool branch_taken_0x241030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241030u;
        // 0x241034: 0x922a0023  lbu         $t2, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241030) {
            ctx->pc = 0x241384u;
            goto label_241384;
        }
    }
    ctx->pc = 0x241038u;
label_241038:
    // 0x241038: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x241038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24103c: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x24103cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x241040: 0x8e2c0008  lw          $t4, 0x8($s1)
    ctx->pc = 0x241040u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x241044: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x241044u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241048: 0x184000d2  blez        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x241048u;
    {
        const bool branch_taken_0x241048 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x24104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241048u;
        // 0x24104c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241048) {
            ctx->pc = 0x241394u;
            goto label_241394;
        }
    }
    ctx->pc = 0x241050u;
    // 0x241050: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x241050u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x241054: 0x3c0dff00  lui         $t5, 0xFF00
    ctx->pc = 0x241054u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65280 << 16));
    // 0x241058: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x241058u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x24105c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24105cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241060:
    // 0x241060: 0x8622001c  lh          $v0, 0x1C($s1)
    ctx->pc = 0x241060u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x241064: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x241064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x241068: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x241068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24106c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24106Cu;
    {
        const bool branch_taken_0x24106c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24106c) {
            ctx->pc = 0x241070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24106Cu;
            // 0x241070: 0x91220000  lbu         $v0, 0x0($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241084u;
            goto label_241084;
        }
    }
    ctx->pc = 0x241074u;
    // 0x241074: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x241074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x241078: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x241078u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x24107c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24107Cu;
    {
        const bool branch_taken_0x24107c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24107Cu;
        // 0x241080: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24107c) {
            ctx->pc = 0x241088u;
            goto label_241088;
        }
    }
    ctx->pc = 0x241084u;
label_241084:
    // 0x241084: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x241084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_241088:
    // 0x241088: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x241088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24108c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x24108cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x241090: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x241090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x241094: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x241094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241098: 0xad1824  and         $v1, $a1, $t5
    ctx->pc = 0x241098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x24109c: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x24109cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x2410a0: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x2410a0u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2410a4: 0x52402  srl         $a0, $a1, 16
    ctx->pc = 0x2410a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x2410a8: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x2410a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2410ac: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x2410acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2410b0: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x2410b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2410b4: 0x50ea0001  beql        $a3, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x2410B4u;
    {
        const bool branch_taken_0x2410b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        if (branch_taken_0x2410b4) {
            ctx->pc = 0x2410B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2410B4u;
            // 0x2410b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2410BCu;
            goto label_2410bc;
        }
    }
    ctx->pc = 0x2410BCu;
label_2410bc:
    // 0x2410bc: 0x1812  mflo        $v1
    ctx->pc = 0x2410bcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2410c0: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x2410c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2410c4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2410c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2410c8: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2410c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2410cc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2410CCu;
    {
        const bool branch_taken_0x2410cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2410D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410CCu;
        // 0x2410d0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2410cc) {
            ctx->pc = 0x241060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241060;
        }
    }
    ctx->pc = 0x2410D4u;
    // 0x2410d4: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x2410D4u;
    {
        const bool branch_taken_0x2410d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2410D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410D4u;
        // 0x2410d8: 0x922a0023  lbu         $t2, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2410d4) {
            ctx->pc = 0x241384u;
            goto label_241384;
        }
    }
    ctx->pc = 0x2410DCu;
label_2410dc:
    // 0x2410dc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2410dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2410e0: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x2410e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2410e4: 0x8e290008  lw          $t1, 0x8($s1)
    ctx->pc = 0x2410e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2410e8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2410e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2410ec: 0x184000a9  blez        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x2410ECu;
    {
        const bool branch_taken_0x2410ec = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2410F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2410ECu;
        // 0x2410f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2410ec) {
            ctx->pc = 0x241394u;
            goto label_241394;
        }
    }
    ctx->pc = 0x2410F4u;
    // 0x2410f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2410f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2410f8: 0x240dfff8  addiu       $t5, $zero, -0x8
    ctx->pc = 0x2410f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x2410fc: 0x244cb3a0  addiu       $t4, $v0, -0x4C60
    ctx->pc = 0x2410fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947744));
    // 0x241100: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x241100u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x241104: 0x0  nop
    ctx->pc = 0x241104u;
    // NOP
label_241108:
    // 0x241108: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x241108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24110c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24110cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x241110: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x241110u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x241114: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x241114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x241118: 0x306300e7  andi        $v1, $v1, 0xE7
    ctx->pc = 0x241118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)231);
    // 0x24111c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x24111cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x241120: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x241120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241124: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x241124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x241128: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x241128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x24112c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x24112cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x241130: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x241130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241134: 0x221c2  srl         $a0, $v0, 7
    ctx->pc = 0x241134u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x241138: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x241138u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x24113c: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x24113cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x241140: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x241140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x241144: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x241144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x241148: 0xad2824  and         $a1, $a1, $t5
    ctx->pc = 0x241148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x24114c: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x24114cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x241150: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x241150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x241154: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x241154u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x241158: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x241158u;
    {
        const bool branch_taken_0x241158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241158u;
        // 0x24115c: 0xa0c50000  sb          $a1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241158) {
            ctx->pc = 0x241168u;
            goto label_241168;
        }
    }
    ctx->pc = 0x241160u;
    // 0x241160: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x241160u;
    {
        const bool branch_taken_0x241160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241160u;
        // 0x241164: 0xa0ca0003  sb          $t2, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241160) {
            ctx->pc = 0x24116Cu;
            goto label_24116c;
        }
    }
    ctx->pc = 0x241168u;
label_241168:
    // 0x241168: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x241168u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_24116c:
    // 0x24116c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x24116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x241170: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x241170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x241174: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x241174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241178: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x241178u;
    {
        const bool branch_taken_0x241178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241178u;
        // 0x24117c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241178) {
            ctx->pc = 0x241108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241108;
        }
    }
    ctx->pc = 0x241180u;
    // 0x241180: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x241180u;
    {
        const bool branch_taken_0x241180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241180u;
        // 0x241184: 0x922a0023  lbu         $t2, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241180) {
            ctx->pc = 0x241384u;
            goto label_241384;
        }
    }
    ctx->pc = 0x241188u;
label_241188:
    // 0x241188: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x241188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24118c: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x24118cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x241190: 0x8e2c0008  lw          $t4, 0x8($s1)
    ctx->pc = 0x241190u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x241194: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x241194u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241198: 0x1840007e  blez        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x241198u;
    {
        const bool branch_taken_0x241198 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x24119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241198u;
        // 0x24119c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241198) {
            ctx->pc = 0x241394u;
            goto label_241394;
        }
    }
    ctx->pc = 0x2411A0u;
    // 0x2411a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2411a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2411a4: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x2411a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x2411a8: 0x244eb3a0  addiu       $t6, $v0, -0x4C60
    ctx->pc = 0x2411a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947744));
    // 0x2411ac: 0x3c0dff00  lui         $t5, 0xFF00
    ctx->pc = 0x2411acu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65280 << 16));
    // 0x2411b0: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x2411b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x2411b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2411b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2411b8:
    // 0x2411b8: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x2411b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2411bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2411bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2411c0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2411c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2411c4: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x2411c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2411c8: 0x30a300e7  andi        $v1, $a1, 0xE7
    ctx->pc = 0x2411c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)231);
    // 0x2411cc: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x2411ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x2411d0: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x2411d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x2411d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2411d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2411d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2411d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2411dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2411dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2411e0: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x2411e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2411e4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2411e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2411e8: 0xad2024  and         $a0, $a1, $t5
    ctx->pc = 0x2411e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x2411ec: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x2411ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x2411f0: 0x87001b  divu        $zero, $a0, $a3
    ctx->pc = 0x2411f0u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2411f4: 0x51c02  srl         $v1, $a1, 16
    ctx->pc = 0x2411f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x2411f8: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x2411f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2411fc: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x2411fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x241200: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x241200u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x241204: 0x50ea0001  beql        $a3, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x241204u;
    {
        const bool branch_taken_0x241204 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        if (branch_taken_0x241204) {
            ctx->pc = 0x241208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241204u;
            // 0x241208: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24120Cu;
            goto label_24120c;
        }
    }
    ctx->pc = 0x24120Cu;
label_24120c:
    // 0x24120c: 0x2012  mflo        $a0
    ctx->pc = 0x24120cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x241210: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x241210u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x241214: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x241214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x241218: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x241218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24121c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x24121Cu;
    {
        const bool branch_taken_0x24121c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24121Cu;
        // 0x241220: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24121c) {
            ctx->pc = 0x2411B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2411b8;
        }
    }
    ctx->pc = 0x241224u;
    // 0x241224: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x241224u;
    {
        const bool branch_taken_0x241224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241224u;
        // 0x241228: 0x922a0023  lbu         $t2, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241224) {
            ctx->pc = 0x241384u;
            goto label_241384;
        }
    }
    ctx->pc = 0x24122Cu;
label_24122c:
    // 0x24122c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x24122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x241230: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x241230u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x241234: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x241234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241238: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x241238u;
    {
        const bool branch_taken_0x241238 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x24123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241238u;
        // 0x24123c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241238) {
            ctx->pc = 0x241394u;
            goto label_241394;
        }
    }
    ctx->pc = 0x241240u;
    // 0x241240: 0x240afff8  addiu       $t2, $zero, -0x8
    ctx->pc = 0x241240u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x241244: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x241244u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_241248:
    // 0x241248: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x241248u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x24124c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x24124cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x241250: 0x219c2  srl         $v1, $v0, 7
    ctx->pc = 0x241250u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x241254: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x241254u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x241258: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x241258u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x24125c: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x24125cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x241260: 0x308400f8  andi        $a0, $a0, 0xF8
    ctx->pc = 0x241260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)248);
    // 0x241264: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x241264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x241268: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x241268u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x24126c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x24126cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x241270: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x241270u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x241274: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x241274u;
    {
        const bool branch_taken_0x241274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241274u;
        // 0x241278: 0xa0c50000  sb          $a1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241274) {
            ctx->pc = 0x241284u;
            goto label_241284;
        }
    }
    ctx->pc = 0x24127Cu;
    // 0x24127c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24127Cu;
    {
        const bool branch_taken_0x24127c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24127Cu;
        // 0x241280: 0xa0c90003  sb          $t1, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24127c) {
            ctx->pc = 0x241288u;
            goto label_241288;
        }
    }
    ctx->pc = 0x241284u;
label_241284:
    // 0x241284: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x241284u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
label_241288:
    // 0x241288: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x241288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24128c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x24128cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x241290: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x241290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241294: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x241294u;
    {
        const bool branch_taken_0x241294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241294u;
        // 0x241298: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241294) {
            ctx->pc = 0x241248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241248;
        }
    }
    ctx->pc = 0x24129Cu;
    // 0x24129c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x24129Cu;
    {
        const bool branch_taken_0x24129c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2412A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24129Cu;
        // 0x2412a0: 0x922a0023  lbu         $t2, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24129c) {
            ctx->pc = 0x241384u;
            goto label_241384;
        }
    }
    ctx->pc = 0x2412A4u;
label_2412a4:
    // 0x2412a4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2412a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2412a8: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x2412a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2412ac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2412acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2412b0: 0x18400038  blez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2412B0u;
    {
        const bool branch_taken_0x2412b0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2412B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412B0u;
        // 0x2412b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2412b0) {
            ctx->pc = 0x241394u;
            goto label_241394;
        }
    }
    ctx->pc = 0x2412B8u;
    // 0x2412b8: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x2412b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2412bc: 0x0  nop
    ctx->pc = 0x2412bcu;
    // NOP
label_2412c0:
    // 0x2412c0: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x2412c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x2412c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2412c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2412c8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x2412c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2412cc: 0x90e40002  lbu         $a0, 0x2($a3)
    ctx->pc = 0x2412ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2412d0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2412d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2412d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2412d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2412d8: 0xa0c90003  sb          $t1, 0x3($a2)
    ctx->pc = 0x2412d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x2412dc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2412dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2412e0: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x2412e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x2412e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2412e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2412e8: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x2412e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2412ec: 0x32c02  srl         $a1, $v1, 16
    ctx->pc = 0x2412ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x2412f0: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x2412f0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2412f4: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x2412f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x2412f8: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2412f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2412fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2412fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x241300: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x241300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241304: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x241304u;
    {
        const bool branch_taken_0x241304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241304u;
        // 0x241308: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241304) {
            ctx->pc = 0x2412C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2412c0;
        }
    }
    ctx->pc = 0x24130Cu;
    // 0x24130c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x24130Cu;
    {
        const bool branch_taken_0x24130c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24130Cu;
        // 0x241310: 0x922a0023  lbu         $t2, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24130c) {
            ctx->pc = 0x241384u;
            goto label_241384;
        }
    }
    ctx->pc = 0x241314u;
label_241314:
    // 0x241314: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x241314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x241318: 0x260b0001  addiu       $t3, $s0, 0x1
    ctx->pc = 0x241318u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24131c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x24131cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241320: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x241320u;
    {
        const bool branch_taken_0x241320 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x241324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241320u;
        // 0x241324: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241320) {
            ctx->pc = 0x241394u;
            goto label_241394;
        }
    }
    ctx->pc = 0x241328u;
    // 0x241328: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x241328u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x24132c: 0x3c0cff00  lui         $t4, 0xFF00
    ctx->pc = 0x24132cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)65280 << 16));
    // 0x241330: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x241330u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x241334: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x241334u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241338:
    // 0x241338: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x241338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x24133c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x24133cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x241340: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x241340u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x241344: 0x8c1824  and         $v1, $a0, $t4
    ctx->pc = 0x241344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
    // 0x241348: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x241348u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x24134c: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x24134cu;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x241350: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x241350u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x241354: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x241354u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x241358: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x241358u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x24135c: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x24135cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x241360: 0x50ea0001  beql        $a3, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x241360u;
    {
        const bool branch_taken_0x241360 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        if (branch_taken_0x241360) {
            ctx->pc = 0x241364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241360u;
            // 0x241364: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x241368u;
            goto label_241368;
        }
    }
    ctx->pc = 0x241368u;
label_241368:
    // 0x241368: 0x1812  mflo        $v1
    ctx->pc = 0x241368u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x24136c: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x24136cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x241370: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x241370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x241374: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x241374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241378: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x241378u;
    {
        const bool branch_taken_0x241378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241378u;
        // 0x24137c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241378) {
            ctx->pc = 0x241338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_241338;
        }
    }
    ctx->pc = 0x241380u;
    // 0x241380: 0x922a0023  lbu         $t2, 0x23($s1)
    ctx->pc = 0x241380u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_241384:
    // 0x241384: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x241384u;
    {
        const bool branch_taken_0x241384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241384u;
        // 0x241388: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241384) {
            ctx->pc = 0x241394u;
            goto label_241394;
        }
    }
    ctx->pc = 0x24138Cu;
label_24138c:
    // 0x24138c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24138Cu;
    {
        const bool branch_taken_0x24138c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24138Cu;
        // 0x241390: 0x31420060  andi        $v0, $t2, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24138c) {
            ctx->pc = 0x2413BCu;
            goto label_2413bc;
        }
    }
    ctx->pc = 0x241394u;
label_241394:
    // 0x241394: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x241394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x241398: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x241398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24139c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x24139cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2413a0: 0x205202a  slt         $a0, $s0, $a1
    ctx->pc = 0x2413a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2413a4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2413a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2413a8: 0x1480feed  bnez        $a0, . + 4 + (-0x113 << 2)
    ctx->pc = 0x2413A8u;
    {
        const bool branch_taken_0x2413a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2413ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413A8u;
        // 0x2413ac: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413a8) {
            ctx->pc = 0x240F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240f60;
        }
    }
    ctx->pc = 0x2413B0u;
    // 0x2413b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2413B0u;
    {
        const bool branch_taken_0x2413b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2413B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413B0u;
        // 0x2413b4: 0x92220023  lbu         $v0, 0x23($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413b0) {
            ctx->pc = 0x2413F0u;
            goto label_2413f0;
        }
    }
    ctx->pc = 0x2413B8u;
label_2413b8:
    // 0x2413b8: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x2413b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
label_2413bc:
    // 0x2413bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2413BCu;
    {
        const bool branch_taken_0x2413bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2413bc) {
            ctx->pc = 0x2413D4u;
            goto label_2413d4;
        }
    }
    ctx->pc = 0x2413C4u;
label_2413c4:
    // 0x2413c4: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x2413C4u;
    {
        const bool branch_taken_0x2413c4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2413c4) {
            ctx->pc = 0x2413D4u;
            goto label_2413d4;
        }
    }
    ctx->pc = 0x2413CCu;
    // 0x2413cc: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x2413CCu;
    SET_GPR_U32(ctx, 31, 0x2413D4u);
    ctx->pc = 0x2413D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2413CCu;
    // 0x2413d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228340u, 0x2413CCu, 0x2413D4u)) {
        return;
    }
    ctx->pc = 0x2413D4u;
label_2413d4:
    // 0x2413d4: 0x16a00012  bnez        $s5, . + 4 + (0x12 << 2)
    ctx->pc = 0x2413D4u;
    {
        const bool branch_taken_0x2413d4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2413D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413D4u;
        // 0x2413d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413d4) {
            ctx->pc = 0x241420u;
            goto label_241420;
        }
    }
    ctx->pc = 0x2413DCu;
    // 0x2413dc: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x2413DCu;
    SET_GPR_U32(ctx, 31, 0x2413E4u);
    ctx->pc = 0x2413E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2413DCu;
    // 0x2413e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x2413DCu, 0x2413E4u)) {
        return;
    }
    ctx->pc = 0x2413E4u;
label_2413e4:
    // 0x2413e4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2413E4u;
    {
        const bool branch_taken_0x2413e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2413E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413E4u;
        // 0x2413e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413e4) {
            ctx->pc = 0x241420u;
            goto label_241420;
        }
    }
    ctx->pc = 0x2413ECu;
label_2413ec:
    // 0x2413ec: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x2413ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_2413f0:
    // 0x2413f0: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x2413f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x2413f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2413F4u;
    {
        const bool branch_taken_0x2413f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2413f4) {
            ctx->pc = 0x24140Cu;
            goto label_24140c;
        }
    }
    ctx->pc = 0x2413FCu;
    // 0x2413fc: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x2413FCu;
    {
        const bool branch_taken_0x2413fc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2413fc) {
            ctx->pc = 0x24140Cu;
            goto label_24140c;
        }
    }
    ctx->pc = 0x241404u;
    // 0x241404: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x241404u;
    SET_GPR_U32(ctx, 31, 0x24140Cu);
    ctx->pc = 0x241408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241404u;
    // 0x241408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228340u, 0x241404u, 0x24140Cu)) {
        return;
    }
    ctx->pc = 0x24140Cu;
label_24140c:
    // 0x24140c: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x24140Cu;
    {
        const bool branch_taken_0x24140c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x241410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24140Cu;
        // 0x241410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24140c) {
            ctx->pc = 0x241420u;
            goto label_241420;
        }
    }
    ctx->pc = 0x241414u;
    // 0x241414: 0xc08a0b0  jal         func_2282C0
    ctx->pc = 0x241414u;
    SET_GPR_U32(ctx, 31, 0x24141Cu);
    ctx->pc = 0x241418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241414u;
    // 0x241418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x241414u, 0x24141Cu)) {
        return;
    }
    ctx->pc = 0x24141Cu;
label_24141c:
    // 0x24141c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24141cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241420:
    // 0x241420: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x241420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x241424: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x241424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x241428: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x241428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24142c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x24142cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x241430: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x241430u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x241434: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x241434u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241438: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x241438u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24143c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24143cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241440: 0x3e00008  jr          $ra
    ctx->pc = 0x241440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241440u;
        // 0x241444: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241448u;
}
