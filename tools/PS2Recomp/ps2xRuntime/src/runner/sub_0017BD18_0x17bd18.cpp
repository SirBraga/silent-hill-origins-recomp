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

// Function: sub_0017BD18
// Address: 0x17bd18 - 0x17bfc0
void sub_0017BD18_0x17bd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BD18_0x17bd18");
#endif

    switch (ctx->pc) {
        case 0x17bd78u: goto label_17bd78;
        case 0x17bdc4u: goto label_17bdc4;
        case 0x17bdd4u: goto label_17bdd4;
        case 0x17bdecu: goto label_17bdec;
        case 0x17bdf8u: goto label_17bdf8;
        case 0x17be08u: goto label_17be08;
        case 0x17be18u: goto label_17be18;
        case 0x17be28u: goto label_17be28;
        case 0x17be34u: goto label_17be34;
        case 0x17be48u: goto label_17be48;
        case 0x17be98u: goto label_17be98;
        case 0x17beb8u: goto label_17beb8;
        case 0x17bf08u: goto label_17bf08;
        case 0x17bf28u: goto label_17bf28;
        case 0x17bf38u: goto label_17bf38;
        case 0x17bf50u: goto label_17bf50;
        case 0x17bf60u: goto label_17bf60;
        case 0x17bf74u: goto label_17bf74;
        case 0x17bf80u: goto label_17bf80;
        case 0x17bf8cu: goto label_17bf8c;
        case 0x17bf98u: goto label_17bf98;
        default: break;
    }

    ctx->pc = 0x17bd18u;

    // 0x17bd18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17bd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17bd1c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17bd20: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17bd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17bd24: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17bd28: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x17bd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x17bd2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17bd2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd30: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x17bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x17bd34: 0x24426fb8  addiu       $v0, $v0, 0x6FB8
    ctx->pc = 0x17bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28600));
    // 0x17bd38: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x17bd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x17bd3c: 0x24636fd8  addiu       $v1, $v1, 0x6FD8
    ctx->pc = 0x17bd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28632));
    // 0x17bd40: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x17bd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x17bd44: 0x26660120  addiu       $a2, $s3, 0x120
    ctx->pc = 0x17bd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x17bd48: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x17bd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x17bd4c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x17bd4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd50: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x17bd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x17bd54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bd58: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x17bd58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x17bd5c: 0x8e640128  lw          $a0, 0x128($s3)
    ctx->pc = 0x17bd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
    // 0x17bd60: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x17bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x17bd64: 0xae6000f0  sw          $zero, 0xF0($s3)
    ctx->pc = 0x17bd64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 0));
    // 0x17bd68: 0xae6000f4  sw          $zero, 0xF4($s3)
    ctx->pc = 0x17bd68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 244), GPR_U32(ctx, 0));
    // 0x17bd6c: 0xae600160  sw          $zero, 0x160($s3)
    ctx->pc = 0x17bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 352), GPR_U32(ctx, 0));
    // 0x17bd70: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x17BD70u;
    {
        const bool branch_taken_0x17bd70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD70u;
        // 0x17bd74: 0xae600164  sw          $zero, 0x164($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd70) {
            ctx->pc = 0x17BDACu;
            goto label_17bdac;
        }
    }
    ctx->pc = 0x17BD78u;
label_17bd78:
    // 0x17bd78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x17bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17bd7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BD7Cu;
    {
        const bool branch_taken_0x17bd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD7Cu;
        // 0x17bd80: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd7c) {
            ctx->pc = 0x17BD8Cu;
            goto label_17bd8c;
        }
    }
    ctx->pc = 0x17BD84u;
    // 0x17bd84: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x17bd84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x17bd88: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x17bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_17bd8c:
    // 0x17bd8c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x17bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x17bd90: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x17bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x17bd94: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x17bd94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x17bd98: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x17bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x17bd9c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x17bd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bda0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17bda4: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17BDA4u;
    {
        const bool branch_taken_0x17bda4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BDA4u;
        // 0x17bda8: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bda4) {
            ctx->pc = 0x17BD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bd78;
        }
    }
    ctx->pc = 0x17BDACu;
label_17bdac:
    // 0x17bdac: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x17bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x17bdb0: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x17bdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x17bdb4: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x17bdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x17bdb8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x17bdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x17bdbc: 0xc08114c  jal         func_204530
    ctx->pc = 0x17BDBCu;
    SET_GPR_U32(ctx, 31, 0x17BDC4u);
    ctx->pc = 0x17BDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BDBCu;
    // 0x17bdc0: 0x8e64016c  lw          $a0, 0x16C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 364)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204530u, 0x17BDBCu, 0x17BDC4u)) {
        return;
    }
    ctx->pc = 0x17BDC4u;
label_17bdc4:
    // 0x17bdc4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BDC4u;
    {
        const bool branch_taken_0x17bdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bdc4) {
            ctx->pc = 0x17BDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BDC4u;
            // 0x17bdc8: 0x26720038  addiu       $s2, $s3, 0x38 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BDD8u;
            goto label_17bdd8;
        }
    }
    ctx->pc = 0x17BDCCu;
    // 0x17bdcc: 0xc081268  jal         func_2049A0
    ctx->pc = 0x17BDCCu;
    SET_GPR_U32(ctx, 31, 0x17BDD4u);
    ctx->pc = 0x17BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BDCCu;
    // 0x17bdd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2049A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2049A0u, 0x17BDCCu, 0x17BDD4u)) {
        return;
    }
    ctx->pc = 0x17BDD4u;
label_17bdd4:
    // 0x17bdd4: 0x26720038  addiu       $s2, $s3, 0x38
    ctx->pc = 0x17bdd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
label_17bdd8:
    // 0x17bdd8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x17bdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x17bddc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17bddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bde0: 0x24a5f8b0  addiu       $a1, $a1, -0x750
    ctx->pc = 0x17bde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965424));
    // 0x17bde4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17BDE4u;
    SET_GPR_U32(ctx, 31, 0x17BDECu);
    ctx->pc = 0x17BDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BDE4u;
    // 0x17bde8: 0x267000f8  addiu       $s0, $s3, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17BDE4u, 0x17BDECu)) {
        return;
    }
    ctx->pc = 0x17BDECu;
label_17bdec:
    // 0x17bdec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17bdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bdf0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17BDF0u;
    SET_GPR_U32(ctx, 31, 0x17BDF8u);
    ctx->pc = 0x17BDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BDF0u;
    // 0x17bdf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17BDF0u, 0x17BDF8u)) {
        return;
    }
    ctx->pc = 0x17BDF8u;
label_17bdf8:
    // 0x17bdf8: 0x26710100  addiu       $s1, $s3, 0x100
    ctx->pc = 0x17bdf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x17bdfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17bdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be00: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17BE00u;
    SET_GPR_U32(ctx, 31, 0x17BE08u);
    ctx->pc = 0x17BE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BE00u;
    // 0x17be04: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17BE00u, 0x17BE08u)) {
        return;
    }
    ctx->pc = 0x17BE08u;
label_17be08:
    // 0x17be08: 0x26700108  addiu       $s0, $s3, 0x108
    ctx->pc = 0x17be08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 264));
    // 0x17be0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17be0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be10: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17BE10u;
    SET_GPR_U32(ctx, 31, 0x17BE18u);
    ctx->pc = 0x17BE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BE10u;
    // 0x17be14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17BE10u, 0x17BE18u)) {
        return;
    }
    ctx->pc = 0x17BE18u;
label_17be18:
    // 0x17be18: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x17be18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17be1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be20: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17BE20u;
    SET_GPR_U32(ctx, 31, 0x17BE28u);
    ctx->pc = 0x17BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BE20u;
    // 0x17be24: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17BE20u, 0x17BE28u)) {
        return;
    }
    ctx->pc = 0x17BE28u;
label_17be28:
    // 0x17be28: 0x26710120  addiu       $s1, $s3, 0x120
    ctx->pc = 0x17be28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x17be2c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17BE2Cu;
    SET_GPR_U32(ctx, 31, 0x17BE34u);
    ctx->pc = 0x17BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BE2Cu;
    // 0x17be30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17BE2Cu, 0x17BE34u)) {
        return;
    }
    ctx->pc = 0x17BE34u;
label_17be34:
    // 0x17be34: 0x8e640120  lw          $a0, 0x120($s3)
    ctx->pc = 0x17be34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x17be38: 0x5080001b  beql        $a0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x17BE38u;
    {
        const bool branch_taken_0x17be38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17be38) {
            ctx->pc = 0x17BE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BE38u;
            // 0x17be3c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BEA8u;
            goto label_17bea8;
        }
    }
    ctx->pc = 0x17BE40u;
    // 0x17be40: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x17be40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17be44: 0x0  nop
    ctx->pc = 0x17be44u;
    // NOP
label_17be48:
    // 0x17be48: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BE48u;
    {
        const bool branch_taken_0x17be48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17be48) {
            ctx->pc = 0x17BE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BE48u;
            // 0x17be4c: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BE5Cu;
            goto label_17be5c;
        }
    }
    ctx->pc = 0x17BE50u;
    // 0x17be50: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17be50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17be54: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x17be54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x17be58: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x17be58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_17be5c:
    // 0x17be5c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BE5Cu;
    {
        const bool branch_taken_0x17be5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17be5c) {
            ctx->pc = 0x17BE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BE5Cu;
            // 0x17be60: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BE70u;
            goto label_17be70;
        }
    }
    ctx->pc = 0x17BE64u;
    // 0x17be64: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17be64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17be68: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x17be68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x17be6c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17be70:
    // 0x17be70: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BE70u;
    {
        const bool branch_taken_0x17be70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x17be70) {
            ctx->pc = 0x17BE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BE70u;
            // 0x17be74: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BE84u;
            goto label_17be84;
        }
    }
    ctx->pc = 0x17BE78u;
    // 0x17be78: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17be78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17be7c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x17be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x17be80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17be80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17be84:
    // 0x17be84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17be84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17be88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BE88u;
    {
        const bool branch_taken_0x17be88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE88u;
        // 0x17be8c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be88) {
            ctx->pc = 0x17BE98u;
            goto label_17be98;
        }
    }
    ctx->pc = 0x17BE90u;
    // 0x17be90: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17BE90u;
    SET_GPR_U32(ctx, 31, 0x17BE98u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17BE90u, 0x17BE98u)) {
        return;
    }
    ctx->pc = 0x17BE98u;
label_17be98:
    // 0x17be98: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17be98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17be9c: 0x5480ffea  bnel        $a0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x17BE9Cu;
    {
        const bool branch_taken_0x17be9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17be9c) {
            ctx->pc = 0x17BEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BE9Cu;
            // 0x17bea0: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17be48;
        }
    }
    ctx->pc = 0x17BEA4u;
    // 0x17bea4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x17bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_17bea8:
    // 0x17bea8: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x17BEA8u;
    {
        const bool branch_taken_0x17bea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BEA8u;
        // 0x17beac: 0x26300008  addiu       $s0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bea8) {
            ctx->pc = 0x17BF14u;
            goto label_17bf14;
        }
    }
    ctx->pc = 0x17BEB0u;
    // 0x17beb0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x17beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17beb4: 0x0  nop
    ctx->pc = 0x17beb4u;
    // NOP
label_17beb8:
    // 0x17beb8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BEB8u;
    {
        const bool branch_taken_0x17beb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17beb8) {
            ctx->pc = 0x17BEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BEB8u;
            // 0x17bebc: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BECCu;
            goto label_17becc;
        }
    }
    ctx->pc = 0x17BEC0u;
    // 0x17bec0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17bec4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x17bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x17bec8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x17bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_17becc:
    // 0x17becc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BECCu;
    {
        const bool branch_taken_0x17becc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17becc) {
            ctx->pc = 0x17BED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BECCu;
            // 0x17bed0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BEE0u;
            goto label_17bee0;
        }
    }
    ctx->pc = 0x17BED4u;
    // 0x17bed4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17bed8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x17bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x17bedc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x17bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_17bee0:
    // 0x17bee0: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BEE0u;
    {
        const bool branch_taken_0x17bee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x17bee0) {
            ctx->pc = 0x17BEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BEE0u;
            // 0x17bee4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BEF4u;
            goto label_17bef4;
        }
    }
    ctx->pc = 0x17BEE8u;
    // 0x17bee8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17beec: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x17beecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x17bef0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17bef4:
    // 0x17bef4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17bef8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BEF8u;
    {
        const bool branch_taken_0x17bef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BEF8u;
        // 0x17befc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bef8) {
            ctx->pc = 0x17BF08u;
            goto label_17bf08;
        }
    }
    ctx->pc = 0x17BF00u;
    // 0x17bf00: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17BF00u;
    SET_GPR_U32(ctx, 31, 0x17BF08u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17BF00u, 0x17BF08u)) {
        return;
    }
    ctx->pc = 0x17BF08u;
label_17bf08:
    // 0x17bf08: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x17bf08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17bf0c: 0x5480ffea  bnel        $a0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x17BF0Cu;
    {
        const bool branch_taken_0x17bf0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bf0c) {
            ctx->pc = 0x17BF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BF0Cu;
            // 0x17bf10: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17beb8;
        }
    }
    ctx->pc = 0x17BF14u;
label_17bf14:
    // 0x17bf14: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x17bf14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17bf18: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x17bf18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x17bf1c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17BF1Cu;
    {
        const bool branch_taken_0x17bf1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF1Cu;
        // 0x17bf20: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf1c) {
            ctx->pc = 0x17BF40u;
            goto label_17bf40;
        }
    }
    ctx->pc = 0x17BF24u;
    // 0x17bf24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17bf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17bf28:
    // 0x17bf28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BF28u;
    {
        const bool branch_taken_0x17bf28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF28u;
        // 0x17bf2c: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf28) {
            ctx->pc = 0x17BF38u;
            goto label_17bf38;
        }
    }
    ctx->pc = 0x17BF30u;
    // 0x17bf30: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17BF30u;
    SET_GPR_U32(ctx, 31, 0x17BF38u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17BF30u, 0x17BF38u)) {
        return;
    }
    ctx->pc = 0x17BF38u;
label_17bf38:
    // 0x17bf38: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17BF38u;
    {
        const bool branch_taken_0x17bf38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF38u;
        // 0x17bf3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf38) {
            ctx->pc = 0x17BF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bf28;
        }
    }
    ctx->pc = 0x17BF40u;
label_17bf40:
    // 0x17bf40: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x17bf40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17bf44: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17BF44u;
    {
        const bool branch_taken_0x17bf44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF44u;
        // 0x17bf48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf44) {
            ctx->pc = 0x17BF6Cu;
            goto label_17bf6c;
        }
    }
    ctx->pc = 0x17BF4Cu;
    // 0x17bf4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17bf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17bf50:
    // 0x17bf50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BF50u;
    {
        const bool branch_taken_0x17bf50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF50u;
        // 0x17bf54: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf50) {
            ctx->pc = 0x17BF60u;
            goto label_17bf60;
        }
    }
    ctx->pc = 0x17BF58u;
    // 0x17bf58: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17BF58u;
    SET_GPR_U32(ctx, 31, 0x17BF60u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17BF58u, 0x17BF60u)) {
        return;
    }
    ctx->pc = 0x17BF60u;
label_17bf60:
    // 0x17bf60: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17BF60u;
    {
        const bool branch_taken_0x17bf60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF60u;
        // 0x17bf64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf60) {
            ctx->pc = 0x17BF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bf50;
        }
    }
    ctx->pc = 0x17BF68u;
    // 0x17bf68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17bf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17bf6c:
    // 0x17bf6c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17BF6Cu;
    SET_GPR_U32(ctx, 31, 0x17BF74u);
    ctx->pc = 0x17BF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF6Cu;
    // 0x17bf70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17BF6Cu, 0x17BF74u)) {
        return;
    }
    ctx->pc = 0x17BF74u;
label_17bf74:
    // 0x17bf74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17bf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf78: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17BF78u;
    SET_GPR_U32(ctx, 31, 0x17BF80u);
    ctx->pc = 0x17BF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF78u;
    // 0x17bf7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17BF78u, 0x17BF80u)) {
        return;
    }
    ctx->pc = 0x17BF80u;
label_17bf80:
    // 0x17bf80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17bf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf84: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17BF84u;
    SET_GPR_U32(ctx, 31, 0x17BF8Cu);
    ctx->pc = 0x17BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF84u;
    // 0x17bf88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17BF84u, 0x17BF8Cu)) {
        return;
    }
    ctx->pc = 0x17BF8Cu;
label_17bf8c:
    // 0x17bf8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17bf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf90: 0xc05c6c6  jal         func_171B18
    ctx->pc = 0x17BF90u;
    SET_GPR_U32(ctx, 31, 0x17BF98u);
    ctx->pc = 0x17BF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF90u;
    // 0x17bf94: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x171B18u, 0x17BF90u, 0x17BF98u)) {
        return;
    }
    ctx->pc = 0x17BF98u;
label_17bf98:
    // 0x17bf98: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x17bf98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17bf9c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x17bf9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17bfa0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x17bfa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17bfa4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17bfa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17bfa8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x17bfa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17bfac: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x17bfacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bfb0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x17bfb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bfb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bfb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x17BFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFB8u;
        // 0x17bfbc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BFC0u;
}
