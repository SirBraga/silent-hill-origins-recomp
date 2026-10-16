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

// Function: sub_001666F8
// Address: 0x1666f8 - 0x166828
void sub_001666F8_0x1666f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001666F8_0x1666f8");
#endif

    switch (ctx->pc) {
        case 0x166744u: goto label_166744;
        case 0x166760u: goto label_166760;
        case 0x166788u: goto label_166788;
        case 0x1667a4u: goto label_1667a4;
        case 0x1667c0u: goto label_1667c0;
        case 0x1667f8u: goto label_1667f8;
        default: break;
    }

    ctx->pc = 0x1666f8u;

    // 0x1666f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1666f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1666fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1666fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x166700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x166700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166704: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x166704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x166708: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x166708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x16670c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x16670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x166710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x166710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166714: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x166714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x166718: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x166718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16671c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x166720: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x166720u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166724: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x166724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x166728: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x166728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16672c: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x16672cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x166730: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x166730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x166734: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x166734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x166738: 0xae260048  sw          $a2, 0x48($s1)
    ctx->pc = 0x166738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 6));
    // 0x16673c: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16673Cu;
    SET_GPR_U32(ctx, 31, 0x166744u);
    ctx->pc = 0x166740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16673Cu;
    // 0x166740: 0x8c461a68  lw          $a2, 0x1A68($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16673Cu, 0x166744u)) {
        return;
    }
    ctx->pc = 0x166744u;
label_166744:
    // 0x166744: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x166744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166748: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x166748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16674c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x16674Cu;
    {
        const bool branch_taken_0x16674c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16674Cu;
        // 0x166750: 0x3c140069  lui         $s4, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16674c) {
            ctx->pc = 0x166808u;
            goto label_166808;
        }
    }
    ctx->pc = 0x166754u;
    // 0x166754: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x166754u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x166758: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x166758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16675c: 0x0  nop
    ctx->pc = 0x16675cu;
    // NOP
label_166760:
    // 0x166760: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x166760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x166764: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x166764u;
    {
        const bool branch_taken_0x166764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166764u;
        // 0x166768: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166764) {
            ctx->pc = 0x1667E0u;
            goto label_1667e0;
        }
    }
    ctx->pc = 0x16676Cu;
    // 0x16676c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x16676cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x166770: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x166770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x166774: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x166774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x166778: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x166778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16677c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16677cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166780: 0xc08063c  jal         func_2018F0
    ctx->pc = 0x166780u;
    SET_GPR_U32(ctx, 31, 0x166788u);
    ctx->pc = 0x166784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166780u;
    // 0x166784: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x166780u, 0x166788u)) {
        return;
    }
    ctx->pc = 0x166788u;
label_166788:
    // 0x166788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x166788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16678c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16678Cu;
    {
        const bool branch_taken_0x16678c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x166790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16678Cu;
        // 0x166790: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16678c) {
            ctx->pc = 0x1667DCu;
            goto label_1667dc;
        }
    }
    ctx->pc = 0x166794u;
    // 0x166794: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x166794u;
    {
        const bool branch_taken_0x166794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x166798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166794u;
        // 0x166798: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166794) {
            ctx->pc = 0x1667E0u;
            goto label_1667e0;
        }
    }
    ctx->pc = 0x16679Cu;
    // 0x16679c: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x16679Cu;
    SET_GPR_U32(ctx, 31, 0x1667A4u);
    ctx->pc = 0x1667A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16679Cu;
    // 0x1667a0: 0x26843f00  addiu       $a0, $s4, 0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x16679Cu, 0x1667A4u)) {
        return;
    }
    ctx->pc = 0x1667A4u;
label_1667a4:
    // 0x1667a4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1667A4u;
    {
        const bool branch_taken_0x1667a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1667A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667A4u;
        // 0x1667a8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667a4) {
            ctx->pc = 0x1667E0u;
            goto label_1667e0;
        }
    }
    ctx->pc = 0x1667ACu;
    // 0x1667ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1667acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1667b0: 0x1653000c  bne         $s2, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x1667B0u;
    {
        const bool branch_taken_0x1667b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1667B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667B0u;
        // 0x1667b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667b0) {
            ctx->pc = 0x1667E4u;
            goto label_1667e4;
        }
    }
    ctx->pc = 0x1667B8u;
    // 0x1667b8: 0xc095596  jal         func_255658
    ctx->pc = 0x1667B8u;
    SET_GPR_U32(ctx, 31, 0x1667C0u);
    ctx->pc = 0x1667BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1667B8u;
    // 0x1667bc: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255658u, 0x1667B8u, 0x1667C0u)) {
        return;
    }
    ctx->pc = 0x1667C0u;
label_1667c0:
    // 0x1667c0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x1667c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x1667c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1667c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1667c8: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x1667c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x1667cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1667ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1667d0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1667d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1667d4: 0xae240030  sw          $a0, 0x30($s1)
    ctx->pc = 0x1667d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
    // 0x1667d8: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x1667d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_1667dc:
    // 0x1667dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1667dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1667e0:
    // 0x1667e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1667e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1667e4:
    // 0x1667e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1667e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1667e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1667e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1667ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1667ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1667f0: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1667F0u;
    SET_GPR_U32(ctx, 31, 0x1667F8u);
    ctx->pc = 0x1667F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1667F0u;
    // 0x1667f4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1667F0u, 0x1667F8u)) {
        return;
    }
    ctx->pc = 0x1667F8u;
label_1667f8:
    // 0x1667f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1667f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1667fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1667fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166800: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x166800u;
    {
        const bool branch_taken_0x166800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x166804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166800u;
        // 0x166804: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166800) {
            ctx->pc = 0x166760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166760;
        }
    }
    ctx->pc = 0x166808u;
label_166808:
    // 0x166808: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x166808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16680c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x16680cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x166810: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x166810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x166814: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x166814u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166818: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x166818u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16681c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16681cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166820: 0x3e00008  jr          $ra
    ctx->pc = 0x166820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166820u;
        // 0x166824: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166828u;
}
