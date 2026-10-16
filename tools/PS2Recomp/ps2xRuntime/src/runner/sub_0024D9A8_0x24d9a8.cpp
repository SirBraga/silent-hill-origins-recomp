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

// Function: sub_0024D9A8
// Address: 0x24d9a8 - 0x24dab8
void sub_0024D9A8_0x24d9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D9A8_0x24d9a8");
#endif

    switch (ctx->pc) {
        case 0x24d9a8u: goto label_24d9a8;
        case 0x24d9acu: goto label_24d9ac;
        case 0x24d9b0u: goto label_24d9b0;
        case 0x24d9b4u: goto label_24d9b4;
        case 0x24d9b8u: goto label_24d9b8;
        case 0x24d9bcu: goto label_24d9bc;
        case 0x24d9c0u: goto label_24d9c0;
        case 0x24d9c4u: goto label_24d9c4;
        case 0x24d9c8u: goto label_24d9c8;
        case 0x24d9ccu: goto label_24d9cc;
        case 0x24d9d0u: goto label_24d9d0;
        case 0x24d9d4u: goto label_24d9d4;
        case 0x24d9d8u: goto label_24d9d8;
        case 0x24d9dcu: goto label_24d9dc;
        case 0x24d9e0u: goto label_24d9e0;
        case 0x24d9e4u: goto label_24d9e4;
        case 0x24d9e8u: goto label_24d9e8;
        case 0x24d9ecu: goto label_24d9ec;
        case 0x24d9f0u: goto label_24d9f0;
        case 0x24d9f4u: goto label_24d9f4;
        case 0x24d9f8u: goto label_24d9f8;
        case 0x24d9fcu: goto label_24d9fc;
        case 0x24da00u: goto label_24da00;
        case 0x24da04u: goto label_24da04;
        case 0x24da08u: goto label_24da08;
        case 0x24da0cu: goto label_24da0c;
        case 0x24da10u: goto label_24da10;
        case 0x24da14u: goto label_24da14;
        case 0x24da18u: goto label_24da18;
        case 0x24da1cu: goto label_24da1c;
        case 0x24da20u: goto label_24da20;
        case 0x24da24u: goto label_24da24;
        case 0x24da28u: goto label_24da28;
        case 0x24da2cu: goto label_24da2c;
        case 0x24da30u: goto label_24da30;
        case 0x24da34u: goto label_24da34;
        case 0x24da38u: goto label_24da38;
        case 0x24da3cu: goto label_24da3c;
        case 0x24da40u: goto label_24da40;
        case 0x24da44u: goto label_24da44;
        case 0x24da48u: goto label_24da48;
        case 0x24da4cu: goto label_24da4c;
        case 0x24da50u: goto label_24da50;
        case 0x24da54u: goto label_24da54;
        case 0x24da58u: goto label_24da58;
        case 0x24da5cu: goto label_24da5c;
        case 0x24da60u: goto label_24da60;
        case 0x24da64u: goto label_24da64;
        case 0x24da68u: goto label_24da68;
        case 0x24da6cu: goto label_24da6c;
        case 0x24da70u: goto label_24da70;
        case 0x24da74u: goto label_24da74;
        case 0x24da78u: goto label_24da78;
        case 0x24da7cu: goto label_24da7c;
        case 0x24da80u: goto label_24da80;
        case 0x24da84u: goto label_24da84;
        case 0x24da88u: goto label_24da88;
        case 0x24da8cu: goto label_24da8c;
        case 0x24da90u: goto label_24da90;
        case 0x24da94u: goto label_24da94;
        case 0x24da98u: goto label_24da98;
        case 0x24da9cu: goto label_24da9c;
        case 0x24daa0u: goto label_24daa0;
        case 0x24daa4u: goto label_24daa4;
        case 0x24daa8u: goto label_24daa8;
        case 0x24daacu: goto label_24daac;
        case 0x24dab0u: goto label_24dab0;
        case 0x24dab4u: goto label_24dab4;
        default: break;
    }

    ctx->pc = 0x24d9a8u;

label_24d9a8:
    // 0x24d9a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24d9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24d9ac:
    // 0x24d9ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24d9b0:
    // 0x24d9b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24d9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_24d9b4:
    // 0x24d9b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24d9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_24d9b8:
    // 0x24d9b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24d9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24d9bc:
    // 0x24d9bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24d9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_24d9c0:
    // 0x24d9c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24d9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24d9c4:
    // 0x24d9c4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_24d9c8:
    if (ctx->pc == 0x24D9C8u) {
        ctx->pc = 0x24D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9C4u;
        // 0x24d9c8: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D9CCu;
        goto label_24d9cc;
    }
    ctx->pc = 0x24D9C4u;
    {
        const bool branch_taken_0x24d9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9C4u;
        // 0x24d9c8: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d9c4) {
            ctx->pc = 0x24DA00u;
            goto label_24da00;
        }
    }
    ctx->pc = 0x24D9CCu;
label_24d9cc:
    // 0x24d9cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24d9d0:
    if (ctx->pc == 0x24D9D0u) {
        ctx->pc = 0x24D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9CCu;
        // 0x24d9d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D9D4u;
        goto label_24d9d4;
    }
    ctx->pc = 0x24D9CCu;
    {
        const bool branch_taken_0x24d9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9CCu;
        // 0x24d9d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d9cc) {
            ctx->pc = 0x24D9E4u;
            goto label_24d9e4;
        }
    }
    ctx->pc = 0x24D9D4u;
label_24d9d4:
    // 0x24d9d4: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_24d9d8:
    if (ctx->pc == 0x24D9D8u) {
        ctx->pc = 0x24D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9D4u;
        // 0x24d9d8: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D9DCu;
        goto label_24d9dc;
    }
    ctx->pc = 0x24D9D4u;
    {
        const bool branch_taken_0x24d9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9D4u;
        // 0x24d9d8: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d9d4) {
            ctx->pc = 0x24DA50u;
            goto label_24da50;
        }
    }
    ctx->pc = 0x24D9DCu;
label_24d9dc:
    // 0x24d9dc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_24d9e0:
    if (ctx->pc == 0x24D9E0u) {
        ctx->pc = 0x24D9E4u;
        goto label_24d9e4;
    }
    ctx->pc = 0x24D9DCu;
    {
        const bool branch_taken_0x24d9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d9dc) {
            ctx->pc = 0x24DA58u;
            goto label_24da58;
        }
    }
    ctx->pc = 0x24D9E4u;
label_24d9e4:
    // 0x24d9e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24d9e8:
    // 0x24d9e8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_24d9ec:
    if (ctx->pc == 0x24D9ECu) {
        ctx->pc = 0x24D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9E8u;
        // 0x24d9ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D9F0u;
        goto label_24d9f0;
    }
    ctx->pc = 0x24D9E8u;
    {
        const bool branch_taken_0x24d9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9E8u;
        // 0x24d9ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d9e8) {
            ctx->pc = 0x24DA10u;
            goto label_24da10;
        }
    }
    ctx->pc = 0x24D9F0u;
label_24d9f0:
    // 0x24d9f0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_24d9f4:
    if (ctx->pc == 0x24D9F4u) {
        ctx->pc = 0x24D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9F0u;
        // 0x24d9f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D9F8u;
        goto label_24d9f8;
    }
    ctx->pc = 0x24D9F0u;
    {
        const bool branch_taken_0x24d9f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9F0u;
        // 0x24d9f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d9f0) {
            ctx->pc = 0x24DA3Cu;
            goto label_24da3c;
        }
    }
    ctx->pc = 0x24D9F8u;
label_24d9f8:
    // 0x24d9f8: 0x10000017  b           . + 4 + (0x17 << 2)
label_24d9fc:
    if (ctx->pc == 0x24D9FCu) {
        ctx->pc = 0x24D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9F8u;
        // 0x24d9fc: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA00u;
        goto label_24da00;
    }
    ctx->pc = 0x24D9F8u;
    {
        const bool branch_taken_0x24d9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9F8u;
        // 0x24d9fc: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d9f8) {
            ctx->pc = 0x24DA58u;
            goto label_24da58;
        }
    }
    ctx->pc = 0x24DA00u;
label_24da00:
    // 0x24da00: 0xc09cca4  jal         func_273290
label_24da04:
    if (ctx->pc == 0x24DA04u) {
        ctx->pc = 0x24DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA00u;
        // 0x24da04: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA08u;
        goto label_24da08;
    }
    ctx->pc = 0x24DA00u;
    SET_GPR_U32(ctx, 31, 0x24DA08u);
    ctx->pc = 0x24DA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DA00u;
    // 0x24da04: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273290u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273290u, 0x24DA00u, 0x24DA08u)) {
        return;
    }
    ctx->pc = 0x24DA08u;
label_24da08:
    // 0x24da08: 0x1000001a  b           . + 4 + (0x1A << 2)
label_24da0c:
    if (ctx->pc == 0x24DA0Cu) {
        ctx->pc = 0x24DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA08u;
        // 0x24da0c: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA10u;
        goto label_24da10;
    }
    ctx->pc = 0x24DA08u;
    {
        const bool branch_taken_0x24da08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA08u;
        // 0x24da0c: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da08) {
            ctx->pc = 0x24DA74u;
            goto label_24da74;
        }
    }
    ctx->pc = 0x24DA10u;
label_24da10:
    // 0x24da10: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x24da10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24da14:
    // 0x24da14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24da14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24da18:
    // 0x24da18: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_24da1c:
    if (ctx->pc == 0x24DA1Cu) {
        ctx->pc = 0x24DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA18u;
        // 0x24da1c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA20u;
        goto label_24da20;
    }
    ctx->pc = 0x24DA18u;
    {
        const bool branch_taken_0x24da18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA18u;
        // 0x24da1c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da18) {
            ctx->pc = 0x24DA74u;
            goto label_24da74;
        }
    }
    ctx->pc = 0x24DA20u;
label_24da20:
    // 0x24da20: 0x50a00015  beql        $a1, $zero, . + 4 + (0x15 << 2)
label_24da24:
    if (ctx->pc == 0x24DA24u) {
        ctx->pc = 0x24DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA20u;
        // 0x24da24: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA28u;
        goto label_24da28;
    }
    ctx->pc = 0x24DA20u;
    {
        const bool branch_taken_0x24da20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24da20) {
            ctx->pc = 0x24DA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DA20u;
            // 0x24da24: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DA78u;
            goto label_24da78;
        }
    }
    ctx->pc = 0x24DA28u;
label_24da28:
    // 0x24da28: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x24da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_24da2c:
    // 0x24da2c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x24da2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_24da30:
    // 0x24da30: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x24da30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24da34:
    // 0x24da34: 0x1000000f  b           . + 4 + (0xF << 2)
label_24da38:
    if (ctx->pc == 0x24DA38u) {
        ctx->pc = 0x24DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA34u;
        // 0x24da38: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA3Cu;
        goto label_24da3c;
    }
    ctx->pc = 0x24DA34u;
    {
        const bool branch_taken_0x24da34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA34u;
        // 0x24da38: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da34) {
            ctx->pc = 0x24DA74u;
            goto label_24da74;
        }
    }
    ctx->pc = 0x24DA3Cu;
label_24da3c:
    // 0x24da3c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24da40:
    // 0x24da40: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_24da44:
    if (ctx->pc == 0x24DA44u) {
        ctx->pc = 0x24DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA40u;
        // 0x24da44: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA48u;
        goto label_24da48;
    }
    ctx->pc = 0x24DA40u;
    {
        const bool branch_taken_0x24da40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA40u;
        // 0x24da44: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da40) {
            ctx->pc = 0x24DA74u;
            goto label_24da74;
        }
    }
    ctx->pc = 0x24DA48u;
label_24da48:
    // 0x24da48: 0x40f809  jalr        $v0
label_24da4c:
    if (ctx->pc == 0x24DA4Cu) {
        ctx->pc = 0x24DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA48u;
        // 0x24da4c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA50u;
        goto label_24da50;
    }
    ctx->pc = 0x24DA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24DA50u);
        ctx->pc = 0x24DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA48u;
        // 0x24da4c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DA48u, 0x24DA50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DA50u;
label_24da50:
    // 0x24da50: 0x10000008  b           . + 4 + (0x8 << 2)
label_24da54:
    if (ctx->pc == 0x24DA54u) {
        ctx->pc = 0x24DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA50u;
        // 0x24da54: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA58u;
        goto label_24da58;
    }
    ctx->pc = 0x24DA50u;
    {
        const bool branch_taken_0x24da50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA50u;
        // 0x24da54: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da50) {
            ctx->pc = 0x24DA74u;
            goto label_24da74;
        }
    }
    ctx->pc = 0x24DA58u;
label_24da58:
    // 0x24da58: 0xc092848  jal         func_24A120
label_24da5c:
    if (ctx->pc == 0x24DA5Cu) {
        ctx->pc = 0x24DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA58u;
        // 0x24da5c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA60u;
        goto label_24da60;
    }
    ctx->pc = 0x24DA58u;
    SET_GPR_U32(ctx, 31, 0x24DA60u);
    ctx->pc = 0x24DA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DA58u;
    // 0x24da5c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24DA58u, 0x24DA60u)) {
        return;
    }
    ctx->pc = 0x24DA60u;
label_24da60:
    // 0x24da60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24da60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24da64:
    // 0x24da64: 0xc09281a  jal         func_24A068
label_24da68:
    if (ctx->pc == 0x24DA68u) {
        ctx->pc = 0x24DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA64u;
        // 0x24da68: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA6Cu;
        goto label_24da6c;
    }
    ctx->pc = 0x24DA64u;
    SET_GPR_U32(ctx, 31, 0x24DA6Cu);
    ctx->pc = 0x24DA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DA64u;
    // 0x24da68: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24DA64u, 0x24DA6Cu)) {
        return;
    }
    ctx->pc = 0x24DA6Cu;
label_24da6c:
    // 0x24da6c: 0x1000000d  b           . + 4 + (0xD << 2)
label_24da70:
    if (ctx->pc == 0x24DA70u) {
        ctx->pc = 0x24DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA6Cu;
        // 0x24da70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA74u;
        goto label_24da74;
    }
    ctx->pc = 0x24DA6Cu;
    {
        const bool branch_taken_0x24da6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA6Cu;
        // 0x24da70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da6c) {
            ctx->pc = 0x24DAA4u;
            goto label_24daa4;
        }
    }
    ctx->pc = 0x24DA74u;
label_24da74:
    // 0x24da74: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x24da74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_24da78:
    // 0x24da78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_24da7c:
    if (ctx->pc == 0x24DA7Cu) {
        ctx->pc = 0x24DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA78u;
        // 0x24da7c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DA80u;
        goto label_24da80;
    }
    ctx->pc = 0x24DA78u;
    {
        const bool branch_taken_0x24da78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA78u;
        // 0x24da7c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da78) {
            ctx->pc = 0x24DAA0u;
            goto label_24daa0;
        }
    }
    ctx->pc = 0x24DA80u;
label_24da80:
    // 0x24da80: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x24da80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_24da84:
    // 0x24da84: 0x8cc63f70  lw          $a2, 0x3F70($a2)
    ctx->pc = 0x24da84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16240)));
label_24da88:
    // 0x24da88: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x24da88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_24da8c:
    // 0x24da8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24da8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24da90:
    // 0x24da90: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x24da90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_24da94:
    // 0x24da94: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x24da94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_24da98:
    // 0x24da98: 0x40f809  jalr        $v0
label_24da9c:
    if (ctx->pc == 0x24DA9Cu) {
        ctx->pc = 0x24DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA98u;
        // 0x24da9c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DAA0u;
        goto label_24daa0;
    }
    ctx->pc = 0x24DA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24DAA0u);
        ctx->pc = 0x24DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA98u;
        // 0x24da9c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DA98u, 0x24DAA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24DAA0u;
label_24daa0:
    // 0x24daa0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24daa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24daa4:
    // 0x24daa4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24daa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24daa8:
    // 0x24daa8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24daa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24daac:
    // 0x24daac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24daacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24dab0:
    // 0x24dab0: 0x3e00008  jr          $ra
label_24dab4:
    if (ctx->pc == 0x24DAB4u) {
        ctx->pc = 0x24DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAB0u;
        // 0x24dab4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24DAB8u;
        goto label_fallthrough_0x24dab0;
    }
    ctx->pc = 0x24DAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAB0u;
        // 0x24dab4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24dab0:
    ctx->pc = 0x24DAB8u;
}
