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

// Function: sub_002D8BA0
// Address: 0x2d8ba0 - 0x2d8d40
void sub_002D8BA0_0x2d8ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8BA0_0x2d8ba0");
#endif

    switch (ctx->pc) {
        case 0x2d8be0u: goto label_2d8be0;
        case 0x2d8c58u: goto label_2d8c58;
        case 0x2d8c68u: goto label_2d8c68;
        case 0x2d8ca8u: goto label_2d8ca8;
        case 0x2d8d00u: goto label_2d8d00;
        default: break;
    }

    ctx->pc = 0x2d8ba0u;

    // 0x2d8ba0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d8ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d8ba4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2d8ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2d8ba8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2d8ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2d8bac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d8bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8bb0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2d8bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2d8bb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d8bb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8bb8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d8bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2d8bbc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2d8bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2d8bc0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2d8bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2d8bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d8bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d8bc8: 0x9642000c  lhu         $v0, 0xC($s2)
    ctx->pc = 0x2d8bc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2d8bcc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D8BCCu;
    {
        const bool branch_taken_0x2d8bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8BCCu;
        // 0x2d8bd0: 0x8e550004  lw          $s5, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8bcc) {
            ctx->pc = 0x2D8C78u;
            goto label_2d8c78;
        }
    }
    ctx->pc = 0x2D8BD4u;
    // 0x2d8bd4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d8bd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8bd8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2d8bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2d8bdc: 0x0  nop
    ctx->pc = 0x2d8bdcu;
    // NOP
label_2d8be0:
    // 0x2d8be0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2d8be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2d8be4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d8be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d8be8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x2d8be8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d8bec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d8becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d8bf0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2d8bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d8bf4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d8bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d8bf8: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2d8bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2d8bfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d8bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8c00: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d8c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d8c04: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2d8c04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8c08: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2d8c08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2d8c0c: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x2d8c0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d8c10: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2d8c10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x2d8c14: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x2d8c14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2d8c18: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x2d8c18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x2d8c1c: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x2d8c1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2d8c20: 0x7e030030  sq          $v1, 0x30($s0)
    ctx->pc = 0x2d8c20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    // 0x2d8c24: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2d8c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8c28: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d8c28u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d8c2c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2d8c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d8c30: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2d8c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8c34: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d8c34u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d8c38: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2d8c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d8c3c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2d8c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8c40: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d8c40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d8c44: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2d8c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d8c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d8c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c50: 0xc092f34  jal         func_24BCD0
    ctx->pc = 0x2D8C50u;
    SET_GPR_U32(ctx, 31, 0x2D8C58u);
    ctx->pc = 0x2D8C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C50u;
    // 0x2d8c54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x2D8C50u, 0x2D8C58u)) {
        return;
    }
    ctx->pc = 0x2D8C58u;
label_2d8c58:
    // 0x2d8c58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d8c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d8c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d8c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c60: 0xc092d94  jal         func_24B650
    ctx->pc = 0x2D8C60u;
    SET_GPR_U32(ctx, 31, 0x2D8C68u);
    ctx->pc = 0x2D8C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8C60u;
    // 0x2d8c64: 0x2673000c  addiu       $s3, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x2D8C60u, 0x2D8C68u)) {
        return;
    }
    ctx->pc = 0x2D8C68u;
label_2d8c68:
    // 0x2d8c68: 0x9643000c  lhu         $v1, 0xC($s2)
    ctx->pc = 0x2d8c68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2d8c6c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2d8c6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d8c70: 0x5460ffdb  bnel        $v1, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2D8C70u;
    {
        const bool branch_taken_0x2d8c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8c70) {
            ctx->pc = 0x2D8C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8C70u;
            // 0x2d8c74: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8be0;
        }
    }
    ctx->pc = 0x2D8C78u;
label_2d8c78:
    // 0x2d8c78: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2d8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d8c7c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d8c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d8c80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d8c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d8c84: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D8C84u;
    {
        const bool branch_taken_0x2d8c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C84u;
        // 0x2d8c88: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8c84) {
            ctx->pc = 0x2D8D1Cu;
            goto label_2d8d1c;
        }
    }
    ctx->pc = 0x2D8C8Cu;
    // 0x2d8c8c: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x2d8c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x2d8c90: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D8C90u;
    {
        const bool branch_taken_0x2d8c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C90u;
        // 0x2d8c94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8c90) {
            ctx->pc = 0x2D8D18u;
            goto label_2d8d18;
        }
    }
    ctx->pc = 0x2D8C98u;
    // 0x2d8c98: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x2d8c98u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x2d8c9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d8c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ca0: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x2d8ca0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x2d8ca4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d8ca4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8ca8:
    // 0x2d8ca8: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x2d8ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x2d8cac: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2d8cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2d8cb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8cb4: 0x10530012  beq         $v0, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D8CB4u;
    {
        const bool branch_taken_0x2d8cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2D8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8CB4u;
        // 0x2d8cb8: 0x22980  sll         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8cb4) {
            ctx->pc = 0x2D8D00u;
            goto label_2d8d00;
        }
    }
    ctx->pc = 0x2D8CBCu;
    // 0x2d8cbc: 0x8e470038  lw          $a3, 0x38($s2)
    ctx->pc = 0x2d8cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2d8cc0: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x2d8cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2d8cc4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2d8cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8cc8: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x2d8cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2d8ccc: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2d8cccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d8cd0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2d8cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2d8cd4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2d8cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2d8cd8: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x2d8cd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2d8cdc: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2d8cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x2d8ce0: 0x78e30020  lq          $v1, 0x20($a3)
    ctx->pc = 0x2d8ce0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2d8ce4: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x2d8ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x2d8ce8: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x2d8ce8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2d8cec: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2d8cecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x2d8cf0: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x2d8cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2d8cf4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2d8cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d8cf8: 0xc092fa4  jal         func_24BE90
    ctx->pc = 0x2D8CF8u;
    SET_GPR_U32(ctx, 31, 0x2D8D00u);
    ctx->pc = 0x2D8CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8CF8u;
    // 0x2d8cfc: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BE90u, 0x2D8CF8u, 0x2D8D00u)) {
        return;
    }
    ctx->pc = 0x2D8D00u;
label_2d8d00:
    // 0x2d8d00: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x2d8d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x2d8d04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d8d04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d8d08: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2d8d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2d8d0c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2d8d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d8d10: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2D8D10u;
    {
        const bool branch_taken_0x2d8d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D10u;
        // 0x2d8d14: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8d10) {
            ctx->pc = 0x2D8CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8ca8;
        }
    }
    ctx->pc = 0x2D8D18u;
label_2d8d18:
    // 0x2d8d18: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2d8d18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d8d1c:
    // 0x2d8d1c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2d8d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d8d20: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2d8d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d8d24: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2d8d24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d8d28: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d8d28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d8d2c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2d8d2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8d30: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2d8d30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d8d34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d8d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8d38: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8D38u;
        // 0x2d8d3c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8D40u;
}
