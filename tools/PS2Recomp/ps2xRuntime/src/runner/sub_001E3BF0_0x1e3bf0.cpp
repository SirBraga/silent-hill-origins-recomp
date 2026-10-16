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

// Function: sub_001E3BF0
// Address: 0x1e3bf0 - 0x1e3d10
void sub_001E3BF0_0x1e3bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3BF0_0x1e3bf0");
#endif

    switch (ctx->pc) {
        case 0x1e3c40u: goto label_1e3c40;
        case 0x1e3c90u: goto label_1e3c90;
        case 0x1e3ca4u: goto label_1e3ca4;
        case 0x1e3cb8u: goto label_1e3cb8;
        case 0x1e3cccu: goto label_1e3ccc;
        default: break;
    }

    ctx->pc = 0x1e3bf0u;

    // 0x1e3bf0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e3bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e3bf4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1e3bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1e3bf8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1e3bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1e3bfc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e3bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1e3c00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e3c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3c04: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e3c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e3c08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e3c08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3c0c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1e3c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1e3c10: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e3c10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3c14: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1e3c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1e3c18: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1e3c18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3c1c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1e3c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1e3c20: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x1e3c20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e3c24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3c28: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1e3c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1e3c2c: 0x8e920010  lw          $s2, 0x10($s4)
    ctx->pc = 0x1e3c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1e3c30: 0x8e960004  lw          $s6, 0x4($s4)
    ctx->pc = 0x1e3c30u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1e3c34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E3C34u;
    {
        const bool branch_taken_0x1e3c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C34u;
        // 0x1e3c38: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c34) {
            ctx->pc = 0x1E3C78u;
            goto label_1e3c78;
        }
    }
    ctx->pc = 0x1E3C3Cu;
    // 0x1e3c3c: 0x0  nop
    ctx->pc = 0x1e3c3cu;
    // NOP
label_1e3c40:
    // 0x1e3c40: 0x10570004  beq         $v0, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3C40u;
    {
        const bool branch_taken_0x1e3c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x1E3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C40u;
        // 0x1e3c44: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c40) {
            ctx->pc = 0x1E3C54u;
            goto label_1e3c54;
        }
    }
    ctx->pc = 0x1E3C48u;
    // 0x1e3c48: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1e3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e3c4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3C4Cu;
    {
        const bool branch_taken_0x1e3c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C4Cu;
        // 0x1e3c50: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c4c) {
            ctx->pc = 0x1E3C58u;
            goto label_1e3c58;
        }
    }
    ctx->pc = 0x1E3C54u;
label_1e3c54:
    // 0x1e3c54: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1e3c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1e3c58:
    // 0x1e3c58: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1e3c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3c5c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e3c5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e3c60: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1e3c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1e3c64: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x1e3c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3c68: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x1e3c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1e3c6c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1e3c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3c70: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1e3c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1e3c74: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e3c74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1e3c78:
    // 0x1e3c78: 0x276102a  slt         $v0, $s3, $s6
    ctx->pc = 0x1e3c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1e3c7c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E3C7Cu;
    {
        const bool branch_taken_0x1e3c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C7Cu;
        // 0x1e3c80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c7c) {
            ctx->pc = 0x1E3CD8u;
            goto label_1e3cd8;
        }
    }
    ctx->pc = 0x1E3C84u;
    // 0x1e3c84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e3c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3c88: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x1E3C88u;
    SET_GPR_U32(ctx, 31, 0x1E3C90u);
    ctx->pc = 0x1E3C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3C88u;
    // 0x1e3c8c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1E3C88u, 0x1E3C90u)) {
        return;
    }
    ctx->pc = 0x1E3C90u;
label_1e3c90:
    // 0x1e3c90: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E3C90u;
    {
        const bool branch_taken_0x1e3c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C90u;
        // 0x1e3c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c90) {
            ctx->pc = 0x1E3CD4u;
            goto label_1e3cd4;
        }
    }
    ctx->pc = 0x1E3C98u;
    // 0x1e3c98: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1e3c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e3c9c: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x1E3C9Cu;
    SET_GPR_U32(ctx, 31, 0x1E3CA4u);
    ctx->pc = 0x1E3CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3C9Cu;
    // 0x1e3ca0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x1E3C9Cu, 0x1E3CA4u)) {
        return;
    }
    ctx->pc = 0x1E3CA4u;
label_1e3ca4:
    // 0x1e3ca4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E3CA4u;
    {
        const bool branch_taken_0x1e3ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CA4u;
        // 0x1e3ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ca4) {
            ctx->pc = 0x1E3CD4u;
            goto label_1e3cd4;
        }
    }
    ctx->pc = 0x1E3CACu;
    // 0x1e3cac: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x1e3cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1e3cb0: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x1E3CB0u;
    SET_GPR_U32(ctx, 31, 0x1E3CB8u);
    ctx->pc = 0x1E3CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3CB0u;
    // 0x1e3cb4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x1E3CB0u, 0x1E3CB8u)) {
        return;
    }
    ctx->pc = 0x1E3CB8u;
label_1e3cb8:
    // 0x1e3cb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3CB8u;
    {
        const bool branch_taken_0x1e3cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CB8u;
        // 0x1e3cbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3cb8) {
            ctx->pc = 0x1E3CD4u;
            goto label_1e3cd4;
        }
    }
    ctx->pc = 0x1E3CC0u;
    // 0x1e3cc0: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x1e3cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1e3cc4: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x1E3CC4u;
    SET_GPR_U32(ctx, 31, 0x1E3CCCu);
    ctx->pc = 0x1E3CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3CC4u;
    // 0x1e3cc8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x1E3CC4u, 0x1E3CCCu)) {
        return;
    }
    ctx->pc = 0x1E3CCCu;
label_1e3ccc:
    // 0x1e3ccc: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1E3CCCu;
    {
        const bool branch_taken_0x1e3ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CCCu;
        // 0x1e3cd0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ccc) {
            ctx->pc = 0x1E3C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3c40;
        }
    }
    ctx->pc = 0x1E3CD4u;
label_1e3cd4:
    // 0x1e3cd4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1e3cd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3cd8:
    // 0x1e3cd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e3cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3cdc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1e3cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e3ce0: 0x295100b  movn        $v0, $s4, $s5
    ctx->pc = 0x1e3ce0u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20));
    // 0x1e3ce4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1e3ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e3ce8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1e3ce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e3cec: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e3cecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e3cf0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e3cf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e3cf4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1e3cf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3cf8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1e3cf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3cfc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1e3cfcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3d00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3d04: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D04u;
        // 0x1e3d08: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3D0Cu;
    // 0x1e3d0c: 0x0  nop
    ctx->pc = 0x1e3d0cu;
    // NOP
    ctx->pc = 0x1e3d10u;
}
