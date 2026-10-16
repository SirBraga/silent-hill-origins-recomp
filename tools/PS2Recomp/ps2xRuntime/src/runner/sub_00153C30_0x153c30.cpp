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

// Function: sub_00153C30
// Address: 0x153c30 - 0x153d20
void sub_00153C30_0x153c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153C30_0x153c30");
#endif

    switch (ctx->pc) {
        case 0x153c78u: goto label_153c78;
        case 0x153c94u: goto label_153c94;
        case 0x153cb4u: goto label_153cb4;
        case 0x153cd0u: goto label_153cd0;
        case 0x153d08u: goto label_153d08;
        default: break;
    }

    ctx->pc = 0x153c30u;

    // 0x153c30: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x153c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x153c34: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x153c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x153c38: 0x8c45bda8  lw          $a1, -0x4258($v0)
    ctx->pc = 0x153c38u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6CBDA8u));
    // 0x153c3c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x153c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x153c40: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x153c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x153c44: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x153c44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x153c48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x153c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c4c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x153c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x153c50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x153c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x153c54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153c58: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x153c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x153c5c: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x153C5Cu;
    {
        const bool branch_taken_0x153c5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x153C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C5Cu;
        // 0x153c60: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c5c) {
            ctx->pc = 0x153C78u;
            goto label_153c78;
        }
    }
    ctx->pc = 0x153C64u;
    // 0x153c64: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x153c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x153c68: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x153C68u;
    {
        const bool branch_taken_0x153c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153c68) {
            ctx->pc = 0x153C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153C68u;
            // 0x153c6c: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153C7Cu;
            goto label_153c7c;
        }
    }
    ctx->pc = 0x153C70u;
    // 0x153c70: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x153C70u;
    SET_GPR_U32(ctx, 31, 0x153C78u);
    ctx->pc = 0x153C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153C70u;
    // 0x153c74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x153C70u, 0x153C78u)) {
        return;
    }
    ctx->pc = 0x153C78u;
label_153c78:
    // 0x153c78: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x153c78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_153c7c:
    // 0x153c7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c80: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x153c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x153c84: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x153c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
    // 0x153c88: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x153c88u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x153c8c: 0xc054f48  jal         func_153D20
    ctx->pc = 0x153C8Cu;
    SET_GPR_U32(ctx, 31, 0x153C94u);
    ctx->pc = 0x153C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153C8Cu;
    // 0x153c90: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153D20u, 0x153C8Cu, 0x153C94u)) {
        return;
    }
    ctx->pc = 0x153C94u;
label_153c94:
    // 0x153c94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x153c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c98: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x153c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x153c9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x153C9Cu;
    {
        const bool branch_taken_0x153c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C9Cu;
        // 0x153ca0: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c9c) {
            ctx->pc = 0x153CB8u;
            goto label_153cb8;
        }
    }
    ctx->pc = 0x153CA4u;
    // 0x153ca4: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x153CA4u;
    {
        const bool branch_taken_0x153ca4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x153ca4) {
            ctx->pc = 0x153CB8u;
            goto label_153cb8;
        }
    }
    ctx->pc = 0x153CACu;
    // 0x153cac: 0xc054ce8  jal         func_1533A0
    ctx->pc = 0x153CACu;
    SET_GPR_U32(ctx, 31, 0x153CB4u);
    ctx->pc = 0x153CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153CACu;
    // 0x153cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1533A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1533A0u, 0x153CACu, 0x153CB4u)) {
        return;
    }
    ctx->pc = 0x153CB4u;
label_153cb4:
    // 0x153cb4: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x153cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_153cb8:
    // 0x153cb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x153CB8u;
    {
        const bool branch_taken_0x153cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CB8u;
        // 0x153cbc: 0x32020020  andi        $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153cb8) {
            ctx->pc = 0x153CD4u;
            goto label_153cd4;
        }
    }
    ctx->pc = 0x153CC0u;
    // 0x153cc0: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x153CC0u;
    {
        const bool branch_taken_0x153cc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x153cc0) {
            ctx->pc = 0x153CD4u;
            goto label_153cd4;
        }
    }
    ctx->pc = 0x153CC8u;
    // 0x153cc8: 0xc054d14  jal         func_153450
    ctx->pc = 0x153CC8u;
    SET_GPR_U32(ctx, 31, 0x153CD0u);
    ctx->pc = 0x153CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153CC8u;
    // 0x153ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153450u, 0x153CC8u, 0x153CD0u)) {
        return;
    }
    ctx->pc = 0x153CD0u;
label_153cd0:
    // 0x153cd0: 0x32020020  andi        $v0, $s0, 0x20
    ctx->pc = 0x153cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
label_153cd4:
    // 0x153cd4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x153CD4u;
    {
        const bool branch_taken_0x153cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CD4u;
        // 0x153cd8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153cd4) {
            ctx->pc = 0x153D0Cu;
            goto label_153d0c;
        }
    }
    ctx->pc = 0x153CDCu;
    // 0x153cdc: 0xc6210088  lwc1        $f1, 0x88($s1)
    ctx->pc = 0x153cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153ce0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x153ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x153ce4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x153ce4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x153ce8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153cec: 0x0  nop
    ctx->pc = 0x153cecu;
    // NOP
    // 0x153cf0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x153cf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153cf4: 0x0  nop
    ctx->pc = 0x153cf4u;
    // NOP
    // 0x153cf8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x153CF8u;
    {
        const bool branch_taken_0x153cf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153cf8) {
            ctx->pc = 0x153CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153CF8u;
            // 0x153cfc: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153D10u;
            goto label_153d10;
        }
    }
    ctx->pc = 0x153D00u;
    // 0x153d00: 0xc054f8e  jal         func_153E38
    ctx->pc = 0x153D00u;
    SET_GPR_U32(ctx, 31, 0x153D08u);
    ctx->pc = 0x153D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153D00u;
    // 0x153d04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153E38u, 0x153D00u, 0x153D08u)) {
        return;
    }
    ctx->pc = 0x153D08u;
label_153d08:
    // 0x153d08: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x153d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_153d0c:
    // 0x153d0c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x153d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_153d10:
    // 0x153d10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x153d10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153d14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153d18: 0x3e00008  jr          $ra
    ctx->pc = 0x153D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D18u;
        // 0x153d1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153D20u;
}
