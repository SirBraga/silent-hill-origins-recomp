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

// Function: sub_00304B30
// Address: 0x304b30 - 0x304d90
void sub_00304B30_0x304b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304B30_0x304b30");
#endif

    switch (ctx->pc) {
        case 0x304ba8u: goto label_304ba8;
        case 0x304c18u: goto label_304c18;
        case 0x304c1cu: goto label_304c1c;
        case 0x304c44u: goto label_304c44;
        case 0x304c5cu: goto label_304c5c;
        case 0x304c68u: goto label_304c68;
        case 0x304c78u: goto label_304c78;
        case 0x304c8cu: goto label_304c8c;
        case 0x304cc8u: goto label_304cc8;
        case 0x304cdcu: goto label_304cdc;
        case 0x304d08u: goto label_304d08;
        case 0x304d14u: goto label_304d14;
        case 0x304d2cu: goto label_304d2c;
        case 0x304d38u: goto label_304d38;
        default: break;
    }

    ctx->pc = 0x304b30u;

    // 0x304b30: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x304b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x304b34: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x304b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x304b38: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x304b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x304b3c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x304b3cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b40: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x304b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x304b44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x304b44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b48: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x304b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x304b4c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x304b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304b50: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x304b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x304b54: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x304b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x304b58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x304b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x304b5c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x304b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x304b60: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x304b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x304b64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x304b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x304b68: 0xffa700f8  sd          $a3, 0xF8($sp)
    ctx->pc = 0x304b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 7));
    // 0x304b6c: 0xffa80100  sd          $t0, 0x100($sp)
    ctx->pc = 0x304b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 8));
    // 0x304b70: 0xffa90108  sd          $t1, 0x108($sp)
    ctx->pc = 0x304b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 9));
    // 0x304b74: 0xffaa0110  sd          $t2, 0x110($sp)
    ctx->pc = 0x304b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 10));
    // 0x304b78: 0xffab0118  sd          $t3, 0x118($sp)
    ctx->pc = 0x304b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 11));
    // 0x304b7c: 0xe7ac00e8  swc1        $f12, 0xE8($sp)
    ctx->pc = 0x304b7cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x304b80: 0xe7ae00ec  swc1        $f14, 0xEC($sp)
    ctx->pc = 0x304b80u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x304b84: 0xe7b000f0  swc1        $f16, 0xF0($sp)
    ctx->pc = 0x304b84u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x304b88: 0x12600058  beqz        $s3, . + 4 + (0x58 << 2)
    ctx->pc = 0x304B88u;
    {
        const bool branch_taken_0x304b88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x304B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B88u;
        // 0x304b8c: 0xe7b200f4  swc1        $f18, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b88) {
            ctx->pc = 0x304CECu;
            goto label_304cec;
        }
    }
    ctx->pc = 0x304B90u;
    // 0x304b90: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x304b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x304b94: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x304B94u;
    {
        const bool branch_taken_0x304b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B94u;
        // 0x304b98: 0x27b200f8  addiu       $s2, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b94) {
            ctx->pc = 0x304D1Cu;
            goto label_304d1c;
        }
    }
    ctx->pc = 0x304B9Cu;
    // 0x304b9c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x304b9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304ba0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x304BA0u;
    {
        const bool branch_taken_0x304ba0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x304BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BA0u;
        // 0x304ba4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ba0) {
            ctx->pc = 0x304BC0u;
            goto label_304bc0;
        }
    }
    ctx->pc = 0x304BA8u;
label_304ba8:
    // 0x304ba8: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x304ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x304bac: 0x8e46fff8  lw          $a2, -0x8($s2)
    ctx->pc = 0x304bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967288)));
    // 0x304bb0: 0x0  nop
    ctx->pc = 0x304bb0u;
    // NOP
    // 0x304bb4: 0x0  nop
    ctx->pc = 0x304bb4u;
    // NOP
    // 0x304bb8: 0x14c0fffb  bnez        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x304BB8u;
    {
        const bool branch_taken_0x304bb8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x304BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BB8u;
        // 0x304bbc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304bb8) {
            ctx->pc = 0x304BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304ba8;
        }
    }
    ctx->pc = 0x304BC0u;
label_304bc0:
    // 0x304bc0: 0x12c0005d  beqz        $s6, . + 4 + (0x5D << 2)
    ctx->pc = 0x304BC0u;
    {
        const bool branch_taken_0x304bc0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x304BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BC0u;
        // 0x304bc4: 0x8f849120  lw          $a0, -0x6EE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304bc0) {
            ctx->pc = 0x304D38u;
            goto label_304d38;
        }
    }
    ctx->pc = 0x304BC8u;
    // 0x304bc8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x304bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x304bcc: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x304bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x304bd0: 0x8e770004  lw          $s7, 0x4($s3)
    ctx->pc = 0x304bd0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x304bd4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x304bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x304bd8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x304bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x304bdc: 0x2f61821  addu        $v1, $s7, $s6
    ctx->pc = 0x304bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x304be0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x304be0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x304be4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x304BE4u;
    {
        const bool branch_taken_0x304be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BE4u;
        // 0x304be8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304be4) {
            ctx->pc = 0x304C00u;
            goto label_304c00;
        }
    }
    ctx->pc = 0x304BECu;
    // 0x304bec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304bf0: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x304bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x304bf4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x304BF4u;
    {
        const bool branch_taken_0x304bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BF4u;
        // 0x304bf8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304bf4) {
            ctx->pc = 0x304D00u;
            goto label_304d00;
        }
    }
    ctx->pc = 0x304BFCu;
    // 0x304bfc: 0x0  nop
    ctx->pc = 0x304bfcu;
    // NOP
label_304c00:
    // 0x304c00: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x304c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x304c04: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x304c04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304c08: 0x2e2a818  mult        $s5, $s7, $v0
    ctx->pc = 0x304c08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x304c0c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x304c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304c10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x304C10u;
    {
        const bool branch_taken_0x304c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C10u;
        // 0x304c14: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304c10) {
            ctx->pc = 0x304C2Cu;
            goto label_304c2c;
        }
    }
    ctx->pc = 0x304C18u;
label_304c18:
    // 0x304c18: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x304c18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_304c1c:
    // 0x304c1c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x304c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304c20: 0x8e46fff8  lw          $a2, -0x8($s2)
    ctx->pc = 0x304c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967288)));
    // 0x304c24: 0x26b50028  addiu       $s5, $s5, 0x28
    ctx->pc = 0x304c24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    // 0x304c28: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x304c28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_304c2c:
    // 0x304c2c: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x304C2Cu;
    {
        const bool branch_taken_0x304c2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x304C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C2Cu;
        // 0x304c30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304c2c) {
            ctx->pc = 0x304C8Cu;
            goto label_304c8c;
        }
    }
    ctx->pc = 0x304C34u;
    // 0x304c34: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x304c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x304c38: 0x558821  addu        $s1, $v0, $s5
    ctx->pc = 0x304c38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x304c3c: 0xc0c0ea2  jal         func_303A88
    ctx->pc = 0x304C3Cu;
    SET_GPR_U32(ctx, 31, 0x304C44u);
    ctx->pc = 0x304C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C3Cu;
    // 0x304c40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303A88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x303A88u, 0x304C3Cu, 0x304C44u)) {
        return;
    }
    ctx->pc = 0x304C44u;
label_304c44:
    // 0x304c44: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x304C44u;
    {
        const bool branch_taken_0x304c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304c44) {
            ctx->pc = 0x304C8Cu;
            goto label_304c8c;
        }
    }
    ctx->pc = 0x304C4Cu;
    // 0x304c4c: 0x1200fff2  beqz        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x304C4Cu;
    {
        const bool branch_taken_0x304c4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x304C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C4Cu;
        // 0x304c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304c4c) {
            ctx->pc = 0x304C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304c18;
        }
    }
    ctx->pc = 0x304C54u;
    // 0x304c54: 0xc0c1096  jal         func_304258
    ctx->pc = 0x304C54u;
    SET_GPR_U32(ctx, 31, 0x304C5Cu);
    ctx->pc = 0x304C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C54u;
    // 0x304c58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304258u, 0x304C54u, 0x304C5Cu)) {
        return;
    }
    ctx->pc = 0x304C5Cu;
label_304c5c:
    // 0x304c5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x304c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304c60: 0xc0c10a4  jal         func_304290
    ctx->pc = 0x304C60u;
    SET_GPR_U32(ctx, 31, 0x304C68u);
    ctx->pc = 0x304C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C60u;
    // 0x304c64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304290u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304290u, 0x304C60u, 0x304C68u)) {
        return;
    }
    ctx->pc = 0x304C68u;
label_304c68:
    // 0x304c68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x304c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304c6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x304c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304c70: 0xc0c1364  jal         func_304D90
    ctx->pc = 0x304C70u;
    SET_GPR_U32(ctx, 31, 0x304C78u);
    ctx->pc = 0x304C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C70u;
    // 0x304c74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x304D90u, 0x304C70u, 0x304C78u)) {
        return;
    }
    ctx->pc = 0x304C78u;
label_304c78:
    // 0x304c78: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x304C78u;
    {
        const bool branch_taken_0x304c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304c78) {
            ctx->pc = 0x304C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304C78u;
            // 0x304c7c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304c1c;
        }
    }
    ctx->pc = 0x304C80u;
    // 0x304c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304c84: 0xc0922f8  jal         func_248BE0
    ctx->pc = 0x304C84u;
    SET_GPR_U32(ctx, 31, 0x304C8Cu);
    ctx->pc = 0x304C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C84u;
    // 0x304c88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248BE0u, 0x304C84u, 0x304C8Cu)) {
        return;
    }
    ctx->pc = 0x304C8Cu;
label_304c8c:
    // 0x304c8c: 0x16960005  bne         $s4, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x304C8Cu;
    {
        const bool branch_taken_0x304c8c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 22));
        ctx->pc = 0x304C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C8Cu;
        // 0x304c90: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304c8c) {
            ctx->pc = 0x304CA4u;
            goto label_304ca4;
        }
    }
    ctx->pc = 0x304C94u;
    // 0x304c94: 0x57c00001  bnel        $fp, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x304C94u;
    {
        const bool branch_taken_0x304c94 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x304c94) {
            ctx->pc = 0x304C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304C94u;
            // 0x304c98: 0xafd70000  sw          $s7, 0x0($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304C9Cu;
            goto label_304c9c;
        }
    }
    ctx->pc = 0x304C9Cu;
label_304c9c:
    // 0x304c9c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x304C9Cu;
    {
        const bool branch_taken_0x304c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C9Cu;
        // 0x304ca0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304c9c) {
            ctx->pc = 0x304D3Cu;
            goto label_304d3c;
        }
    }
    ctx->pc = 0x304CA4u;
label_304ca4:
    // 0x304ca4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x304ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x304ca8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x304ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x304cac: 0x12820022  beq         $s4, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x304CACu;
    {
        const bool branch_taken_0x304cac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x304CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304CACu;
        // 0x304cb0: 0x2971821  addu        $v1, $s4, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304cac) {
            ctx->pc = 0x304D38u;
            goto label_304d38;
        }
    }
    ctx->pc = 0x304CB4u;
    // 0x304cb4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x304cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x304cb8: 0x628018  mult        $s0, $v1, $v0
    ctx->pc = 0x304cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x304cbc: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x304cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x304cc0: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x304cc0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x304cc4: 0x0  nop
    ctx->pc = 0x304cc4u;
    // NOP
label_304cc8:
    // 0x304cc8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x304cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x304ccc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x304cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304cd0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x304cd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x304cd4: 0xc0922f8  jal         func_248BE0
    ctx->pc = 0x304CD4u;
    SET_GPR_U32(ctx, 31, 0x304CDCu);
    ctx->pc = 0x304CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304CD4u;
    // 0x304cd8: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248BE0u, 0x304CD4u, 0x304CDCu)) {
        return;
    }
    ctx->pc = 0x304CDCu;
label_304cdc:
    // 0x304cdc: 0x1691fffa  bne         $s4, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x304CDCu;
    {
        const bool branch_taken_0x304cdc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 17));
        ctx->pc = 0x304CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304CDCu;
        // 0x304ce0: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304cdc) {
            ctx->pc = 0x304CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304cc8;
        }
    }
    ctx->pc = 0x304CE4u;
    // 0x304ce4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x304CE4u;
    {
        const bool branch_taken_0x304ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304CE4u;
        // 0x304ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ce4) {
            ctx->pc = 0x304D3Cu;
            goto label_304d3c;
        }
    }
    ctx->pc = 0x304CECu;
label_304cec:
    // 0x304cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304cf0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x304cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x304cf4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x304cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x304cf8: 0x34840016  ori         $a0, $a0, 0x16
    ctx->pc = 0x304cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    // 0x304cfc: 0x0  nop
    ctx->pc = 0x304cfcu;
    // NOP
label_304d00:
    // 0x304d00: 0xc092848  jal         func_24A120
    ctx->pc = 0x304D00u;
    SET_GPR_U32(ctx, 31, 0x304D08u);
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x304D00u, 0x304D08u)) {
        return;
    }
    ctx->pc = 0x304D08u;
label_304d08:
    // 0x304d08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x304d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304d0c: 0xc09281a  jal         func_24A068
    ctx->pc = 0x304D0Cu;
    SET_GPR_U32(ctx, 31, 0x304D14u);
    ctx->pc = 0x304D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304D0Cu;
    // 0x304d10: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x304D0Cu, 0x304D14u)) {
        return;
    }
    ctx->pc = 0x304D14u;
label_304d14:
    // 0x304d14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x304D14u;
    {
        const bool branch_taken_0x304d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D14u;
        // 0x304d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304d14) {
            ctx->pc = 0x304D3Cu;
            goto label_304d3c;
        }
    }
    ctx->pc = 0x304D1Cu;
label_304d1c:
    // 0x304d1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304d20: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x304d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x304d24: 0xc092848  jal         func_24A120
    ctx->pc = 0x304D24u;
    SET_GPR_U32(ctx, 31, 0x304D2Cu);
    ctx->pc = 0x304D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304D24u;
    // 0x304d28: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x304D24u, 0x304D2Cu)) {
        return;
    }
    ctx->pc = 0x304D2Cu;
label_304d2c:
    // 0x304d2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x304d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304d30: 0xc09281a  jal         func_24A068
    ctx->pc = 0x304D30u;
    SET_GPR_U32(ctx, 31, 0x304D38u);
    ctx->pc = 0x304D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304D30u;
    // 0x304d34: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x304D30u, 0x304D38u)) {
        return;
    }
    ctx->pc = 0x304D38u;
label_304d38:
    // 0x304d38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x304d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304d3c:
    // 0x304d3c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x304d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x304d40: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x304d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x304d44: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x304d44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x304d48: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x304d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x304d4c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x304d4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x304d50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x304d50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x304d54: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x304d54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x304d58: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x304d58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x304d5c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x304d5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304d60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x304d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304d64: 0x3e00008  jr          $ra
    ctx->pc = 0x304D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D64u;
        // 0x304d68: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304D6Cu;
    // 0x304d6c: 0x0  nop
    ctx->pc = 0x304d6cu;
    // NOP
    // 0x304d70: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x304d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x304d74: 0x0  nop
    ctx->pc = 0x304d74u;
    // NOP
    // 0x304d78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x304d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x304d7c: 0x0  nop
    ctx->pc = 0x304d7cu;
    // NOP
    // 0x304d80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x304d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x304d84: 0x0  nop
    ctx->pc = 0x304d84u;
    // NOP
    // 0x304d88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x304d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x304d8c: 0x0  nop
    ctx->pc = 0x304d8cu;
    // NOP
    ctx->pc = 0x304d90u;
}
