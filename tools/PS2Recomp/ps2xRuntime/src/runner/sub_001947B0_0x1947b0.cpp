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

// Function: sub_001947B0
// Address: 0x1947b0 - 0x1948e0
void sub_001947B0_0x1947b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001947B0_0x1947b0");
#endif

    switch (ctx->pc) {
        case 0x19485cu: goto label_19485c;
        case 0x194864u: goto label_194864;
        case 0x19486cu: goto label_19486c;
        case 0x194874u: goto label_194874;
        case 0x194878u: goto label_194878;
        case 0x194884u: goto label_194884;
        case 0x194898u: goto label_194898;
        case 0x1948c0u: goto label_1948c0;
        default: break;
    }

    ctx->pc = 0x1947b0u;

    // 0x1947b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1947b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1947b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1947b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1947b8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1947b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1947bc: 0x244235d0  addiu       $v0, $v0, 0x35D0
    ctx->pc = 0x1947bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13776));
    // 0x1947c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1947c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1947c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1947c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1947c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1947c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1947cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1947ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1947d0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1947d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1947d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1947d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1947d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1947d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1947dc: 0x246332d0  addiu       $v1, $v1, 0x32D0
    ctx->pc = 0x1947dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13008));
    // 0x1947e0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1947e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1947e4: 0x26070028  addiu       $a3, $s0, 0x28
    ctx->pc = 0x1947e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1947e8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1947e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1947ec: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x1947ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1947f0: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x1947f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x1947f4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1947f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1947f8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1947f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1947fc: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x1947fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x194800: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x194800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x194804: 0x2484f7a8  addiu       $a0, $a0, -0x858
    ctx->pc = 0x194804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965160));
    // 0x194808: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x194808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19480c: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x19480cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x194810: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x194810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x194814: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x194814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x194818: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x194818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x19481c: 0x24c69a60  addiu       $a2, $a2, -0x65A0
    ctx->pc = 0x19481cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941280));
    // 0x194820: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x194820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x194824: 0x24a59a40  addiu       $a1, $a1, -0x65C0
    ctx->pc = 0x194824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941248));
    // 0x194828: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x194828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x19482c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x19482cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x194830: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x194830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x194834: 0x261100b0  addiu       $s1, $s0, 0xB0
    ctx->pc = 0x194834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x194838: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x194838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x19483c: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x19483cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x194840: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x194840u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x194844: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x194844u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x194848: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x194848u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x19484c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x19484cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x194850: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x194850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x194854: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x194854u;
    SET_GPR_U32(ctx, 31, 0x19485Cu);
    ctx->pc = 0x194858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194854u;
    // 0x194858: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x194854u, 0x19485Cu)) {
        return;
    }
    ctx->pc = 0x19485Cu;
label_19485c:
    // 0x19485c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19485Cu;
    SET_GPR_U32(ctx, 31, 0x194864u);
    ctx->pc = 0x194860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19485Cu;
    // 0x194860: 0x26040098  addiu       $a0, $s0, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19485Cu, 0x194864u)) {
        return;
    }
    ctx->pc = 0x194864u;
label_194864:
    // 0x194864: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x194864u;
    SET_GPR_U32(ctx, 31, 0x19486Cu);
    ctx->pc = 0x194868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194864u;
    // 0x194868: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x194864u, 0x19486Cu)) {
        return;
    }
    ctx->pc = 0x19486Cu;
label_19486c:
    // 0x19486c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19486Cu;
    SET_GPR_U32(ctx, 31, 0x194874u);
    ctx->pc = 0x194870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19486Cu;
    // 0x194870: 0x260400a8  addiu       $a0, $s0, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19486Cu, 0x194874u)) {
        return;
    }
    ctx->pc = 0x194874u;
label_194874:
    // 0x194874: 0x0  nop
    ctx->pc = 0x194874u;
    // NOP
label_194878:
    // 0x194878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19487c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19487Cu;
    SET_GPR_U32(ctx, 31, 0x194884u);
    ctx->pc = 0x194880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19487Cu;
    // 0x194880: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19487Cu, 0x194884u)) {
        return;
    }
    ctx->pc = 0x194884u;
label_194884:
    // 0x194884: 0x0  nop
    ctx->pc = 0x194884u;
    // NOP
    // 0x194888: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x194888u;
    {
        const bool branch_taken_0x194888 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194888u;
        // 0x19488c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194888) {
            ctx->pc = 0x194878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194878;
        }
    }
    ctx->pc = 0x194890u;
    // 0x194890: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x194890u;
    SET_GPR_U32(ctx, 31, 0x194898u);
    ctx->pc = 0x194894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194890u;
    // 0x194894: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x194890u, 0x194898u)) {
        return;
    }
    ctx->pc = 0x194898u;
label_194898:
    // 0x194898: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x194898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19489c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x19489cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1948a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1948a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1948a4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1948a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1948a8: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x1948a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1948ac: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1948acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1948b0: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1948b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1948b4: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x1948b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x1948b8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1948B8u;
    SET_GPR_U32(ctx, 31, 0x1948C0u);
    ctx->pc = 0x1948BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1948B8u;
    // 0x1948bc: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1948B8u, 0x1948C0u)) {
        return;
    }
    ctx->pc = 0x1948C0u;
label_1948c0:
    // 0x1948c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1948c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1948c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1948c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1948c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1948c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1948cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1948ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1948d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1948d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1948d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1948d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1948d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1948D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1948DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948D8u;
        // 0x1948dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1948D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1948E0u;
}
