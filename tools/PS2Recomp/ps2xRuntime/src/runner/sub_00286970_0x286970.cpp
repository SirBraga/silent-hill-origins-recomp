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

// Function: sub_00286970
// Address: 0x286970 - 0x286b08
void sub_00286970_0x286970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286970_0x286970");
#endif

    switch (ctx->pc) {
        case 0x286970u: goto label_286970;
        case 0x286974u: goto label_286974;
        case 0x286978u: goto label_286978;
        case 0x28697cu: goto label_28697c;
        case 0x286980u: goto label_286980;
        case 0x286984u: goto label_286984;
        case 0x286988u: goto label_286988;
        case 0x28698cu: goto label_28698c;
        case 0x286990u: goto label_286990;
        case 0x286994u: goto label_286994;
        case 0x286998u: goto label_286998;
        case 0x28699cu: goto label_28699c;
        case 0x2869a0u: goto label_2869a0;
        case 0x2869a4u: goto label_2869a4;
        case 0x2869a8u: goto label_2869a8;
        case 0x2869acu: goto label_2869ac;
        case 0x2869b0u: goto label_2869b0;
        case 0x2869b4u: goto label_2869b4;
        case 0x2869b8u: goto label_2869b8;
        case 0x2869bcu: goto label_2869bc;
        case 0x2869c0u: goto label_2869c0;
        case 0x2869c4u: goto label_2869c4;
        case 0x2869c8u: goto label_2869c8;
        case 0x2869ccu: goto label_2869cc;
        case 0x2869d0u: goto label_2869d0;
        case 0x2869d4u: goto label_2869d4;
        case 0x2869d8u: goto label_2869d8;
        case 0x2869dcu: goto label_2869dc;
        case 0x2869e0u: goto label_2869e0;
        case 0x2869e4u: goto label_2869e4;
        case 0x2869e8u: goto label_2869e8;
        case 0x2869ecu: goto label_2869ec;
        case 0x2869f0u: goto label_2869f0;
        case 0x2869f4u: goto label_2869f4;
        case 0x2869f8u: goto label_2869f8;
        case 0x2869fcu: goto label_2869fc;
        case 0x286a00u: goto label_286a00;
        case 0x286a04u: goto label_286a04;
        case 0x286a08u: goto label_286a08;
        case 0x286a0cu: goto label_286a0c;
        case 0x286a10u: goto label_286a10;
        case 0x286a14u: goto label_286a14;
        case 0x286a18u: goto label_286a18;
        case 0x286a1cu: goto label_286a1c;
        case 0x286a20u: goto label_286a20;
        case 0x286a24u: goto label_286a24;
        case 0x286a28u: goto label_286a28;
        case 0x286a2cu: goto label_286a2c;
        case 0x286a30u: goto label_286a30;
        case 0x286a34u: goto label_286a34;
        case 0x286a38u: goto label_286a38;
        case 0x286a3cu: goto label_286a3c;
        case 0x286a40u: goto label_286a40;
        case 0x286a44u: goto label_286a44;
        case 0x286a48u: goto label_286a48;
        case 0x286a4cu: goto label_286a4c;
        case 0x286a50u: goto label_286a50;
        case 0x286a54u: goto label_286a54;
        case 0x286a58u: goto label_286a58;
        case 0x286a5cu: goto label_286a5c;
        case 0x286a60u: goto label_286a60;
        case 0x286a64u: goto label_286a64;
        case 0x286a68u: goto label_286a68;
        case 0x286a6cu: goto label_286a6c;
        case 0x286a70u: goto label_286a70;
        case 0x286a74u: goto label_286a74;
        case 0x286a78u: goto label_286a78;
        case 0x286a7cu: goto label_286a7c;
        case 0x286a80u: goto label_286a80;
        case 0x286a84u: goto label_286a84;
        case 0x286a88u: goto label_286a88;
        case 0x286a8cu: goto label_286a8c;
        case 0x286a90u: goto label_286a90;
        case 0x286a94u: goto label_286a94;
        case 0x286a98u: goto label_286a98;
        case 0x286a9cu: goto label_286a9c;
        case 0x286aa0u: goto label_286aa0;
        case 0x286aa4u: goto label_286aa4;
        case 0x286aa8u: goto label_286aa8;
        case 0x286aacu: goto label_286aac;
        case 0x286ab0u: goto label_286ab0;
        case 0x286ab4u: goto label_286ab4;
        case 0x286ab8u: goto label_286ab8;
        case 0x286abcu: goto label_286abc;
        case 0x286ac0u: goto label_286ac0;
        case 0x286ac4u: goto label_286ac4;
        case 0x286ac8u: goto label_286ac8;
        case 0x286accu: goto label_286acc;
        case 0x286ad0u: goto label_286ad0;
        case 0x286ad4u: goto label_286ad4;
        case 0x286ad8u: goto label_286ad8;
        case 0x286adcu: goto label_286adc;
        case 0x286ae0u: goto label_286ae0;
        case 0x286ae4u: goto label_286ae4;
        case 0x286ae8u: goto label_286ae8;
        case 0x286aecu: goto label_286aec;
        case 0x286af0u: goto label_286af0;
        case 0x286af4u: goto label_286af4;
        case 0x286af8u: goto label_286af8;
        case 0x286afcu: goto label_286afc;
        case 0x286b00u: goto label_286b00;
        case 0x286b04u: goto label_286b04;
        default: break;
    }

    ctx->pc = 0x286970u;

label_286970:
    // 0x286970: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x286970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_286974:
    // 0x286974: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x286974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_286978:
    // 0x286978: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x286978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_28697c:
    // 0x28697c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x28697cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286980:
    // 0x286980: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x286980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_286984:
    // 0x286984: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x286984u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_286988:
    // 0x286988: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x286988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_28698c:
    // 0x28698c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x28698cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_286990:
    // 0x286990: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x286990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_286994:
    // 0x286994: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x286994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_286998:
    // 0x286998: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x286998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_28699c:
    // 0x28699c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x28699cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_2869a0:
    // 0x2869a0: 0x12c00047  beqz        $s6, . + 4 + (0x47 << 2)
label_2869a4:
    if (ctx->pc == 0x2869A4u) {
        ctx->pc = 0x2869A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869A0u;
        // 0x2869a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2869A8u;
        goto label_2869a8;
    }
    ctx->pc = 0x2869A0u;
    {
        const bool branch_taken_0x2869a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2869A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869A0u;
        // 0x2869a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869a0) {
            ctx->pc = 0x286AC0u;
            goto label_286ac0;
        }
    }
    ctx->pc = 0x2869A8u;
label_2869a8:
    // 0x2869a8: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x2869a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2869ac:
    // 0x2869ac: 0x18c00044  blez        $a2, . + 4 + (0x44 << 2)
label_2869b0:
    if (ctx->pc == 0x2869B0u) {
        ctx->pc = 0x2869B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869ACu;
        // 0x2869b0: 0x241e0003  addiu       $fp, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2869B4u;
        goto label_2869b4;
    }
    ctx->pc = 0x2869ACu;
    {
        const bool branch_taken_0x2869ac = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x2869B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869ACu;
        // 0x2869b0: 0x241e0003  addiu       $fp, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869ac) {
            ctx->pc = 0x286AC0u;
            goto label_286ac0;
        }
    }
    ctx->pc = 0x2869B4u;
label_2869b4:
    // 0x2869b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2869b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2869b8:
    // 0x2869b8: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x2869b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2869bc:
    // 0x2869bc: 0x0  nop
    ctx->pc = 0x2869bcu;
    // NOP
label_2869c0:
    // 0x2869c0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2869c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2869c4:
    // 0x2869c4: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x2869c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2869c8:
    // 0x2869c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2869c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2869cc:
    // 0x2869cc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_2869d0:
    if (ctx->pc == 0x2869D0u) {
        ctx->pc = 0x2869D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869CCu;
        // 0x2869d0: 0x24b70001  addiu       $s7, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2869D4u;
        goto label_2869d4;
    }
    ctx->pc = 0x2869CCu;
    {
        const bool branch_taken_0x2869cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2869D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869CCu;
        // 0x2869d0: 0x24b70001  addiu       $s7, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869cc) {
            ctx->pc = 0x286AA4u;
            goto label_286aa4;
        }
    }
    ctx->pc = 0x2869D4u;
label_2869d4:
    // 0x2869d4: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_2869d8:
    if (ctx->pc == 0x2869D8u) {
        ctx->pc = 0x2869D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869D4u;
        // 0x2869d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2869DCu;
        goto label_2869dc;
    }
    ctx->pc = 0x2869D4u;
    {
        const bool branch_taken_0x2869d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2869D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869D4u;
        // 0x2869d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869d4) {
            ctx->pc = 0x286A9Cu;
            goto label_286a9c;
        }
    }
    ctx->pc = 0x2869DCu;
label_2869dc:
    // 0x2869dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2869dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2869e0:
    // 0x2869e0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2869e4:
    if (ctx->pc == 0x2869E4u) {
        ctx->pc = 0x2869E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869E0u;
        // 0x2869e4: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2869E8u;
        goto label_2869e8;
    }
    ctx->pc = 0x2869E0u;
    {
        const bool branch_taken_0x2869e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2869E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869E0u;
        // 0x2869e4: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869e0) {
            ctx->pc = 0x286A00u;
            goto label_286a00;
        }
    }
    ctx->pc = 0x2869E8u;
label_2869e8:
    // 0x2869e8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2869e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2869ec:
    // 0x2869ec: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x2869ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_2869f0:
    // 0x2869f0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2869f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2869f4:
    // 0x2869f4: 0x40f809  jalr        $v0
label_2869f8:
    if (ctx->pc == 0x2869F8u) {
        ctx->pc = 0x2869FCu;
        goto label_2869fc;
    }
    ctx->pc = 0x2869F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2869FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2869F4u, 0x2869FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2869FCu;
label_2869fc:
    // 0x2869fc: 0x24520005  addiu       $s2, $v0, 0x5
    ctx->pc = 0x2869fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_286a00:
    // 0x286a00: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x286a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_286a04:
    // 0x286a04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x286a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_286a08:
    // 0x286a08: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_286a0c:
    if (ctx->pc == 0x286A0Cu) {
        ctx->pc = 0x286A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A08u;
        // 0x286a0c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286A10u;
        goto label_286a10;
    }
    ctx->pc = 0x286A08u;
    {
        const bool branch_taken_0x286a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A08u;
        // 0x286a0c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a08) {
            ctx->pc = 0x286A3Cu;
            goto label_286a3c;
        }
    }
    ctx->pc = 0x286A10u;
label_286a10:
    // 0x286a10: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x286a10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_286a14:
    // 0x286a14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_286a18:
    if (ctx->pc == 0x286A18u) {
        ctx->pc = 0x286A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A14u;
        // 0x286a18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286A1Cu;
        goto label_286a1c;
    }
    ctx->pc = 0x286A14u;
    {
        const bool branch_taken_0x286a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A14u;
        // 0x286a18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a14) {
            ctx->pc = 0x286A2Cu;
            goto label_286a2c;
        }
    }
    ctx->pc = 0x286A1Cu;
label_286a1c:
    // 0x286a1c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_286a20:
    if (ctx->pc == 0x286A20u) {
        ctx->pc = 0x286A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A1Cu;
        // 0x286a20: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286A24u;
        goto label_286a24;
    }
    ctx->pc = 0x286A1Cu;
    {
        const bool branch_taken_0x286a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x286a1c) {
            ctx->pc = 0x286A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286A1Cu;
            // 0x286a20: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286A40u;
            goto label_286a40;
        }
    }
    ctx->pc = 0x286A24u;
label_286a24:
    // 0x286a24: 0x1000001e  b           . + 4 + (0x1E << 2)
label_286a28:
    if (ctx->pc == 0x286A28u) {
        ctx->pc = 0x286A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A24u;
        // 0x286a28: 0x8ec60000  lw          $a2, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286A2Cu;
        goto label_286a2c;
    }
    ctx->pc = 0x286A24u;
    {
        const bool branch_taken_0x286a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A24u;
        // 0x286a28: 0x8ec60000  lw          $a2, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a24) {
            ctx->pc = 0x286AA0u;
            goto label_286aa0;
        }
    }
    ctx->pc = 0x286A2Cu;
label_286a2c:
    // 0x286a2c: 0x507e0007  beql        $v1, $fp, . + 4 + (0x7 << 2)
label_286a30:
    if (ctx->pc == 0x286A30u) {
        ctx->pc = 0x286A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A2Cu;
        // 0x286a30: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286A34u;
        goto label_286a34;
    }
    ctx->pc = 0x286A2Cu;
    {
        const bool branch_taken_0x286a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        if (branch_taken_0x286a2c) {
            ctx->pc = 0x286A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286A2Cu;
            // 0x286a30: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286A4Cu;
            goto label_286a4c;
        }
    }
    ctx->pc = 0x286A34u;
label_286a34:
    // 0x286a34: 0x1000001a  b           . + 4 + (0x1A << 2)
label_286a38:
    if (ctx->pc == 0x286A38u) {
        ctx->pc = 0x286A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A34u;
        // 0x286a38: 0x8ec60000  lw          $a2, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286A3Cu;
        goto label_286a3c;
    }
    ctx->pc = 0x286A34u;
    {
        const bool branch_taken_0x286a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A34u;
        // 0x286a38: 0x8ec60000  lw          $a2, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a34) {
            ctx->pc = 0x286AA0u;
            goto label_286aa0;
        }
    }
    ctx->pc = 0x286A3Cu;
label_286a3c:
    // 0x286a3c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x286a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_286a40:
    // 0x286a40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x286a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_286a44:
    // 0x286a44: 0x10000015  b           . + 4 + (0x15 << 2)
label_286a48:
    if (ctx->pc == 0x286A48u) {
        ctx->pc = 0x286A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A44u;
        // 0x286a48: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286A4Cu;
        goto label_286a4c;
    }
    ctx->pc = 0x286A44u;
    {
        const bool branch_taken_0x286a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A44u;
        // 0x286a48: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a44) {
            ctx->pc = 0x286A9Cu;
            goto label_286a9c;
        }
    }
    ctx->pc = 0x286A4Cu;
label_286a4c:
    // 0x286a4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x286a4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286a50:
    // 0x286a50: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_286a54:
    if (ctx->pc == 0x286A54u) {
        ctx->pc = 0x286A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A50u;
        // 0x286a54: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286A58u;
        goto label_286a58;
    }
    ctx->pc = 0x286A50u;
    {
        const bool branch_taken_0x286a50 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x286A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A50u;
        // 0x286a54: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a50) {
            ctx->pc = 0x286A9Cu;
            goto label_286a9c;
        }
    }
    ctx->pc = 0x286A58u;
label_286a58:
    // 0x286a58: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x286a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_286a5c:
    // 0x286a5c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x286a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_286a60:
    // 0x286a60: 0x24740fc8  addiu       $s4, $v1, 0xFC8
    ctx->pc = 0x286a60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_286a64:
    // 0x286a64: 0x0  nop
    ctx->pc = 0x286a64u;
    // NOP
label_286a68:
    // 0x286a68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x286a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_286a6c:
    // 0x286a6c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_286a70:
    if (ctx->pc == 0x286A70u) {
        ctx->pc = 0x286A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A6Cu;
        // 0x286a70: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286A74u;
        goto label_286a74;
    }
    ctx->pc = 0x286A6Cu;
    {
        const bool branch_taken_0x286a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A6Cu;
        // 0x286a70: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a6c) {
            ctx->pc = 0x286A88u;
            goto label_286a88;
        }
    }
    ctx->pc = 0x286A74u;
label_286a74:
    // 0x286a74: 0x8e8200f4  lw          $v0, 0xF4($s4)
    ctx->pc = 0x286a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
label_286a78:
    // 0x286a78: 0x40f809  jalr        $v0
label_286a7c:
    if (ctx->pc == 0x286A7Cu) {
        ctx->pc = 0x286A80u;
        goto label_286a80;
    }
    ctx->pc = 0x286A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x286A80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286A78u, 0x286A80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286A80u;
label_286a80:
    // 0x286a80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_286a84:
    // 0x286a84: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x286a84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_286a88:
    // 0x286a88: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x286a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_286a8c:
    // 0x286a8c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x286a8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_286a90:
    // 0x286a90: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x286a90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_286a94:
    // 0x286a94: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_286a98:
    if (ctx->pc == 0x286A98u) {
        ctx->pc = 0x286A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A94u;
        // 0x286a98: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286A9Cu;
        goto label_286a9c;
    }
    ctx->pc = 0x286A94u;
    {
        const bool branch_taken_0x286a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A94u;
        // 0x286a98: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a94) {
            ctx->pc = 0x286A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286a68;
        }
    }
    ctx->pc = 0x286A9Cu;
label_286a9c:
    // 0x286a9c: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x286a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_286aa0:
    // 0x286aa0: 0x2b2a821  addu        $s5, $s5, $s2
    ctx->pc = 0x286aa0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_286aa4:
    // 0x286aa4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x286aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_286aa8:
    // 0x286aa8: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x286aa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_286aac:
    // 0x286aac: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
label_286ab0:
    if (ctx->pc == 0x286AB0u) {
        ctx->pc = 0x286AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AACu;
        // 0x286ab0: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286AB4u;
        goto label_286ab4;
    }
    ctx->pc = 0x286AACu;
    {
        const bool branch_taken_0x286aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286aac) {
            ctx->pc = 0x286AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286AACu;
            // 0x286ab0: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2869C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2869c0;
        }
    }
    ctx->pc = 0x286AB4u;
label_286ab4:
    // 0x286ab4: 0x26a30004  addiu       $v1, $s5, 0x4
    ctx->pc = 0x286ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_286ab8:
    // 0x286ab8: 0x2aa20001  slti        $v0, $s5, 0x1
    ctx->pc = 0x286ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)1) ? 1 : 0);
label_286abc:
    // 0x286abc: 0x62a80a  movz        $s5, $v1, $v0
    ctx->pc = 0x286abcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3));
label_286ac0:
    // 0x286ac0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x286ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_286ac4:
    // 0x286ac4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x286ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_286ac8:
    // 0x286ac8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x286ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_286acc:
    // 0x286acc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x286accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_286ad0:
    // 0x286ad0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x286ad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_286ad4:
    // 0x286ad4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x286ad4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_286ad8:
    // 0x286ad8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x286ad8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_286adc:
    // 0x286adc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x286adcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_286ae0:
    // 0x286ae0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x286ae0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_286ae4:
    // 0x286ae4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x286ae4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_286ae8:
    // 0x286ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x286ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_286aec:
    // 0x286aec: 0x3e00008  jr          $ra
label_286af0:
    if (ctx->pc == 0x286AF0u) {
        ctx->pc = 0x286AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AECu;
        // 0x286af0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286AF4u;
        goto label_286af4;
    }
    ctx->pc = 0x286AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AECu;
        // 0x286af0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286AF4u;
label_286af4:
    // 0x286af4: 0x0  nop
    ctx->pc = 0x286af4u;
    // NOP
label_286af8:
    // 0x286af8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x286af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_286afc:
    // 0x286afc: 0x0  nop
    ctx->pc = 0x286afcu;
    // NOP
label_286b00:
    // 0x286b00: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x286b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_286b04:
    // 0x286b04: 0x0  nop
    ctx->pc = 0x286b04u;
    // NOP
    ctx->pc = 0x286b08u;
}
