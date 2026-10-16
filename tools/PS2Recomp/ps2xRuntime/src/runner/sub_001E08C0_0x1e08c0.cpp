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

// Function: sub_001E08C0
// Address: 0x1e08c0 - 0x1e0b18
void sub_001E08C0_0x1e08c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E08C0_0x1e08c0");
#endif

    switch (ctx->pc) {
        case 0x1e0938u: goto label_1e0938;
        case 0x1e0958u: goto label_1e0958;
        case 0x1e0974u: goto label_1e0974;
        case 0x1e0988u: goto label_1e0988;
        case 0x1e09c8u: goto label_1e09c8;
        case 0x1e09d8u: goto label_1e09d8;
        case 0x1e09e8u: goto label_1e09e8;
        case 0x1e09f8u: goto label_1e09f8;
        case 0x1e0a08u: goto label_1e0a08;
        case 0x1e0a1cu: goto label_1e0a1c;
        case 0x1e0a40u: goto label_1e0a40;
        case 0x1e0a50u: goto label_1e0a50;
        case 0x1e0a60u: goto label_1e0a60;
        case 0x1e0a70u: goto label_1e0a70;
        case 0x1e0a80u: goto label_1e0a80;
        case 0x1e0a90u: goto label_1e0a90;
        case 0x1e0aa0u: goto label_1e0aa0;
        case 0x1e0ab0u: goto label_1e0ab0;
        case 0x1e0ac0u: goto label_1e0ac0;
        case 0x1e0ad0u: goto label_1e0ad0;
        case 0x1e0ae4u: goto label_1e0ae4;
        default: break;
    }

    ctx->pc = 0x1e08c0u;

    // 0x1e08c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e08c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e08c4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1e08c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1e08c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e08c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e08cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e08ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e08d0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1e08d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1e08d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e08d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e08d8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e08d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1e08dc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1e08dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1e08e0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1e08e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1e08e4: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E08E4u;
    {
        const bool branch_taken_0x1e08e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E08E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08E4u;
        // 0x1e08e8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e08e4) {
            ctx->pc = 0x1E0928u;
            goto label_1e0928;
        }
    }
    ctx->pc = 0x1E08ECu;
    // 0x1e08ec: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e08ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e08f0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1e08f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e08f4: 0x24021103  addiu       $v0, $zero, 0x1103
    ctx->pc = 0x1e08f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4355));
    // 0x1e08f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e08f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e08fc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E08FCu;
    {
        const bool branch_taken_0x1e08fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E0900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08FCu;
        // 0x1e0900: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e08fc) {
            ctx->pc = 0x1E090Cu;
            goto label_1e090c;
        }
    }
    ctx->pc = 0x1E0904u;
    // 0x1e0904: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x1e0904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1e0908: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1e0908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1e090c:
    // 0x1e090c: 0x24021104  addiu       $v0, $zero, 0x1104
    ctx->pc = 0x1e090cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4356));
    // 0x1e0910: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0910u;
    {
        const bool branch_taken_0x1e0910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e0910) {
            ctx->pc = 0x1E0920u;
            goto label_1e0920;
        }
    }
    ctx->pc = 0x1E0918u;
    // 0x1e0918: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x1e0918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1e091c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1e091cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1e0920:
    // 0x1e0920: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0920u;
    {
        const bool branch_taken_0x1e0920 = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x1e0920) {
            ctx->pc = 0x1E0930u;
            goto label_1e0930;
        }
    }
    ctx->pc = 0x1E0928u;
label_1e0928:
    // 0x1e0928: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1E0928u;
    {
        const bool branch_taken_0x1e0928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0928u;
        // 0x1e092c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0928) {
            ctx->pc = 0x1E0AF0u;
            goto label_1e0af0;
        }
    }
    ctx->pc = 0x1E0930u;
label_1e0930:
    // 0x1e0930: 0xc09275c  jal         func_249D70
    ctx->pc = 0x1E0930u;
    SET_GPR_U32(ctx, 31, 0x1E0938u);
    ctx->pc = 0x1E0934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0930u;
    // 0x1e0934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x1E0930u, 0x1E0938u)) {
        return;
    }
    ctx->pc = 0x1E0938u;
label_1e0938:
    // 0x1e0938: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e0938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e093c: 0x8e740004  lw          $s4, 0x4($s3)
    ctx->pc = 0x1e093cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e0940: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x1e0940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1e0944: 0x1a800013  blez        $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E0944u;
    {
        const bool branch_taken_0x1e0944 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x1E0948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0944u;
        // 0x1e0948: 0x8c550008  lw          $s5, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0944) {
            ctx->pc = 0x1E0994u;
            goto label_1e0994;
        }
    }
    ctx->pc = 0x1E094Cu;
    // 0x1e094c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x1e094cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0950: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0954: 0x0  nop
    ctx->pc = 0x1e0954u;
    // NOP
label_1e0958:
    // 0x1e0958: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e0958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e095c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e095cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0960: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1e0960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e0964: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1e0964u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e0968: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e0968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1e096c: 0xc092782  jal         func_249E08
    ctx->pc = 0x1E096Cu;
    SET_GPR_U32(ctx, 31, 0x1E0974u);
    ctx->pc = 0x1E0970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E096Cu;
    // 0x1e0970: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x1E096Cu, 0x1E0974u)) {
        return;
    }
    ctx->pc = 0x1E0974u;
label_1e0974:
    // 0x1e0974: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1e0974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e0978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e097c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1e097cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e0980: 0xc09275c  jal         func_249D70
    ctx->pc = 0x1E0980u;
    SET_GPR_U32(ctx, 31, 0x1E0988u);
    ctx->pc = 0x1E0984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0980u;
    // 0x1e0984: 0x2158021  addu        $s0, $s0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x1E0980u, 0x1E0988u)) {
        return;
    }
    ctx->pc = 0x1E0988u;
label_1e0988:
    // 0x1e0988: 0x5640fff3  bnel        $s2, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1E0988u;
    {
        const bool branch_taken_0x1e0988 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0988) {
            ctx->pc = 0x1E098Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0988u;
            // 0x1e098c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0958;
        }
    }
    ctx->pc = 0x1E0990u;
    // 0x1e0990: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e0990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e0994:
    // 0x1e0994: 0x24031103  addiu       $v1, $zero, 0x1103
    ctx->pc = 0x1e0994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4355));
    // 0x1e0998: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e0998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e099c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E099Cu;
    {
        const bool branch_taken_0x1e099c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E09A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E099Cu;
        // 0x1e09a0: 0x24021104  addiu       $v0, $zero, 0x1104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e099c) {
            ctx->pc = 0x1E09B4u;
            goto label_1e09b4;
        }
    }
    ctx->pc = 0x1E09A4u;
    // 0x1e09a4: 0x10820021  beq         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E09A4u;
    {
        const bool branch_taken_0x1e09a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E09A4u;
        // 0x1e09a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e09a4) {
            ctx->pc = 0x1E0A2Cu;
            goto label_1e0a2c;
        }
    }
    ctx->pc = 0x1E09ACu;
    // 0x1e09ac: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1E09ACu;
    {
        const bool branch_taken_0x1e09ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E09B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E09ACu;
        // 0x1e09b0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e09ac) {
            ctx->pc = 0x1E0AF4u;
            goto label_1e0af4;
        }
    }
    ctx->pc = 0x1E09B4u;
label_1e09b4:
    // 0x1e09b4: 0x1a80004d  blez        $s4, . + 4 + (0x4D << 2)
    ctx->pc = 0x1E09B4u;
    {
        const bool branch_taken_0x1e09b4 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x1E09B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E09B4u;
        // 0x1e09b8: 0x8e700010  lw          $s0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e09b4) {
            ctx->pc = 0x1E0AECu;
            goto label_1e0aec;
        }
    }
    ctx->pc = 0x1E09BCu;
    // 0x1e09bc: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x1e09bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09c0: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x1e09c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1e09c4: 0x0  nop
    ctx->pc = 0x1e09c4u;
    // NOP
label_1e09c8:
    // 0x1e09c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e09c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09cc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1e09ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e09d0: 0xc092782  jal         func_249E08
    ctx->pc = 0x1E09D0u;
    SET_GPR_U32(ctx, 31, 0x1E09D8u);
    ctx->pc = 0x1E09D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E09D0u;
    // 0x1e09d4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x1E09D0u, 0x1E09D8u)) {
        return;
    }
    ctx->pc = 0x1E09D8u;
label_1e09d8:
    // 0x1e09d8: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x1e09d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1e09dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e09dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09e0: 0xc09278c  jal         func_249E30
    ctx->pc = 0x1E09E0u;
    SET_GPR_U32(ctx, 31, 0x1E09E8u);
    ctx->pc = 0x1E09E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E09E0u;
    // 0x1e09e4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x1E09E0u, 0x1E09E8u)) {
        return;
    }
    ctx->pc = 0x1E09E8u;
label_1e09e8:
    // 0x1e09e8: 0x2605000e  addiu       $a1, $s0, 0xE
    ctx->pc = 0x1e09e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x1e09ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e09ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09f0: 0xc09278c  jal         func_249E30
    ctx->pc = 0x1E09F0u;
    SET_GPR_U32(ctx, 31, 0x1E09F8u);
    ctx->pc = 0x1E09F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E09F0u;
    // 0x1e09f4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x1E09F0u, 0x1E09F8u)) {
        return;
    }
    ctx->pc = 0x1E09F8u;
label_1e09f8:
    // 0x1e09f8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e09f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e09fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e09fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a00: 0xc09278c  jal         func_249E30
    ctx->pc = 0x1E0A00u;
    SET_GPR_U32(ctx, 31, 0x1E0A08u);
    ctx->pc = 0x1E0A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0A00u;
    // 0x1e0a04: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x1E0A00u, 0x1E0A08u)) {
        return;
    }
    ctx->pc = 0x1E0A08u;
label_1e0a08:
    // 0x1e0a08: 0x26050012  addiu       $a1, $s0, 0x12
    ctx->pc = 0x1e0a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
    // 0x1e0a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e0a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0a14: 0xc09278c  jal         func_249E30
    ctx->pc = 0x1E0A14u;
    SET_GPR_U32(ctx, 31, 0x1E0A1Cu);
    ctx->pc = 0x1E0A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0A14u;
    // 0x1e0a18: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x1E0A14u, 0x1E0A1Cu)) {
        return;
    }
    ctx->pc = 0x1E0A1Cu;
label_1e0a1c:
    // 0x1e0a1c: 0x1640ffea  bnez        $s2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1E0A1Cu;
    {
        const bool branch_taken_0x1e0a1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A1Cu;
        // 0x1e0a20: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a1c) {
            ctx->pc = 0x1E09C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e09c8;
        }
    }
    ctx->pc = 0x1E0A24u;
    // 0x1e0a24: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1E0A24u;
    {
        const bool branch_taken_0x1e0a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A24u;
        // 0x1e0a28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a24) {
            ctx->pc = 0x1E0AF0u;
            goto label_1e0af0;
        }
    }
    ctx->pc = 0x1E0A2Cu;
label_1e0a2c:
    // 0x1e0a2c: 0x1a80002f  blez        $s4, . + 4 + (0x2F << 2)
    ctx->pc = 0x1E0A2Cu;
    {
        const bool branch_taken_0x1e0a2c = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x1E0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A2Cu;
        // 0x1e0a30: 0x8e700010  lw          $s0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a2c) {
            ctx->pc = 0x1E0AECu;
            goto label_1e0aec;
        }
    }
    ctx->pc = 0x1E0A34u;
    // 0x1e0a34: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x1e0a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a38: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x1e0a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1e0a3c: 0x0  nop
    ctx->pc = 0x1e0a3cu;
    // NOP
label_1e0a40:
    // 0x1e0a40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a44: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e0a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0a48: 0xc09278c  jal         func_249E30
    ctx->pc = 0x1E0A48u;
    SET_GPR_U32(ctx, 31, 0x1E0A50u);
    ctx->pc = 0x1E0A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0A48u;
    // 0x1e0a4c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x1E0A48u, 0x1E0A50u)) {
        return;
    }
    ctx->pc = 0x1E0A50u;
label_1e0a50:
    // 0x1e0a50: 0x2605000a  addiu       $a1, $s0, 0xA
    ctx->pc = 0x1e0a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x1e0a54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a58: 0xc09278c  jal         func_249E30
    ctx->pc = 0x1E0A58u;
    SET_GPR_U32(ctx, 31, 0x1E0A60u);
    ctx->pc = 0x1E0A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0A58u;
    // 0x1e0a5c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x1E0A58u, 0x1E0A60u)) {
        return;
    }
    ctx->pc = 0x1E0A60u;
label_1e0a60:
    // 0x1e0a60: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x1e0a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1e0a64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a68: 0xc09278c  jal         func_249E30
    ctx->pc = 0x1E0A68u;
    SET_GPR_U32(ctx, 31, 0x1E0A70u);
    ctx->pc = 0x1E0A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0A68u;
    // 0x1e0a6c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x1E0A68u, 0x1E0A70u)) {
        return;
    }
    ctx->pc = 0x1E0A70u;
label_1e0a70:
    // 0x1e0a70: 0x2605000e  addiu       $a1, $s0, 0xE
    ctx->pc = 0x1e0a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x1e0a74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a78: 0xc09278c  jal         func_249E30
    ctx->pc = 0x1E0A78u;
    SET_GPR_U32(ctx, 31, 0x1E0A80u);
    ctx->pc = 0x1E0A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0A78u;
    // 0x1e0a7c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x1E0A78u, 0x1E0A80u)) {
        return;
    }
    ctx->pc = 0x1E0A80u;
label_1e0a80:
    // 0x1e0a80: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e0a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e0a84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a88: 0xc09278c  jal         func_249E30
    ctx->pc = 0x1E0A88u;
    SET_GPR_U32(ctx, 31, 0x1E0A90u);
    ctx->pc = 0x1E0A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0A88u;
    // 0x1e0a8c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x1E0A88u, 0x1E0A90u)) {
        return;
    }
    ctx->pc = 0x1E0A90u;
label_1e0a90:
    // 0x1e0a90: 0x26050012  addiu       $a1, $s0, 0x12
    ctx->pc = 0x1e0a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
    // 0x1e0a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a98: 0xc09278c  jal         func_249E30
    ctx->pc = 0x1E0A98u;
    SET_GPR_U32(ctx, 31, 0x1E0AA0u);
    ctx->pc = 0x1E0A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0A98u;
    // 0x1e0a9c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x1E0A98u, 0x1E0AA0u)) {
        return;
    }
    ctx->pc = 0x1E0AA0u;
label_1e0aa0:
    // 0x1e0aa0: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x1e0aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1e0aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0aa8: 0xc09278c  jal         func_249E30
    ctx->pc = 0x1E0AA8u;
    SET_GPR_U32(ctx, 31, 0x1E0AB0u);
    ctx->pc = 0x1E0AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0AA8u;
    // 0x1e0aac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x1E0AA8u, 0x1E0AB0u)) {
        return;
    }
    ctx->pc = 0x1E0AB0u;
label_1e0ab0:
    // 0x1e0ab0: 0x26050016  addiu       $a1, $s0, 0x16
    ctx->pc = 0x1e0ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
    // 0x1e0ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ab8: 0xc09278c  jal         func_249E30
    ctx->pc = 0x1E0AB8u;
    SET_GPR_U32(ctx, 31, 0x1E0AC0u);
    ctx->pc = 0x1E0ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0AB8u;
    // 0x1e0abc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x1E0AB8u, 0x1E0AC0u)) {
        return;
    }
    ctx->pc = 0x1E0AC0u;
label_1e0ac0:
    // 0x1e0ac0: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x1e0ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1e0ac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ac8: 0xc09278c  jal         func_249E30
    ctx->pc = 0x1E0AC8u;
    SET_GPR_U32(ctx, 31, 0x1E0AD0u);
    ctx->pc = 0x1E0ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0AC8u;
    // 0x1e0acc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x1E0AC8u, 0x1E0AD0u)) {
        return;
    }
    ctx->pc = 0x1E0AD0u;
label_1e0ad0:
    // 0x1e0ad0: 0x2605001a  addiu       $a1, $s0, 0x1A
    ctx->pc = 0x1e0ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 26));
    // 0x1e0ad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e0ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ad8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e0ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0adc: 0xc09278c  jal         func_249E30
    ctx->pc = 0x1E0ADCu;
    SET_GPR_U32(ctx, 31, 0x1E0AE4u);
    ctx->pc = 0x1E0AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0ADCu;
    // 0x1e0ae0: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x1E0ADCu, 0x1E0AE4u)) {
        return;
    }
    ctx->pc = 0x1E0AE4u;
label_1e0ae4:
    // 0x1e0ae4: 0x1640ffd6  bnez        $s2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1E0AE4u;
    {
        const bool branch_taken_0x1e0ae4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AE4u;
        // 0x1e0ae8: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ae4) {
            ctx->pc = 0x1E0A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0a40;
        }
    }
    ctx->pc = 0x1E0AECu;
label_1e0aec:
    // 0x1e0aec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0af0:
    // 0x1e0af0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1e0af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e0af4:
    // 0x1e0af4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1e0af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e0af8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e0af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e0afc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e0afcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e0b00: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1e0b00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0b04: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1e0b04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0b08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B0Cu;
        // 0x1e0b10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0B14u;
    // 0x1e0b14: 0x0  nop
    ctx->pc = 0x1e0b14u;
    // NOP
    ctx->pc = 0x1e0b18u;
}
