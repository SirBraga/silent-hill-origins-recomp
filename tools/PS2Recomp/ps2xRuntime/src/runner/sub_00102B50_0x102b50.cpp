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

// Function: sub_00102B50
// Address: 0x102b50 - 0x102d98
void sub_00102B50_0x102b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102B50_0x102b50");
#endif

    switch (ctx->pc) {
        case 0x102b50u: goto label_102b50;
        case 0x102b54u: goto label_102b54;
        case 0x102b58u: goto label_102b58;
        case 0x102b5cu: goto label_102b5c;
        case 0x102b60u: goto label_102b60;
        case 0x102b64u: goto label_102b64;
        case 0x102b68u: goto label_102b68;
        case 0x102b6cu: goto label_102b6c;
        case 0x102b70u: goto label_102b70;
        case 0x102b74u: goto label_102b74;
        case 0x102b78u: goto label_102b78;
        case 0x102b7cu: goto label_102b7c;
        case 0x102b80u: goto label_102b80;
        case 0x102b84u: goto label_102b84;
        case 0x102b88u: goto label_102b88;
        case 0x102b8cu: goto label_102b8c;
        case 0x102b90u: goto label_102b90;
        case 0x102b94u: goto label_102b94;
        case 0x102b98u: goto label_102b98;
        case 0x102b9cu: goto label_102b9c;
        case 0x102ba0u: goto label_102ba0;
        case 0x102ba4u: goto label_102ba4;
        case 0x102ba8u: goto label_102ba8;
        case 0x102bacu: goto label_102bac;
        case 0x102bb0u: goto label_102bb0;
        case 0x102bb4u: goto label_102bb4;
        case 0x102bb8u: goto label_102bb8;
        case 0x102bbcu: goto label_102bbc;
        case 0x102bc0u: goto label_102bc0;
        case 0x102bc4u: goto label_102bc4;
        case 0x102bc8u: goto label_102bc8;
        case 0x102bccu: goto label_102bcc;
        case 0x102bd0u: goto label_102bd0;
        case 0x102bd4u: goto label_102bd4;
        case 0x102bd8u: goto label_102bd8;
        case 0x102bdcu: goto label_102bdc;
        case 0x102be0u: goto label_102be0;
        case 0x102be4u: goto label_102be4;
        case 0x102be8u: goto label_102be8;
        case 0x102becu: goto label_102bec;
        case 0x102bf0u: goto label_102bf0;
        case 0x102bf4u: goto label_102bf4;
        case 0x102bf8u: goto label_102bf8;
        case 0x102bfcu: goto label_102bfc;
        case 0x102c00u: goto label_102c00;
        case 0x102c04u: goto label_102c04;
        case 0x102c08u: goto label_102c08;
        case 0x102c0cu: goto label_102c0c;
        case 0x102c10u: goto label_102c10;
        case 0x102c14u: goto label_102c14;
        case 0x102c18u: goto label_102c18;
        case 0x102c1cu: goto label_102c1c;
        case 0x102c20u: goto label_102c20;
        case 0x102c24u: goto label_102c24;
        case 0x102c28u: goto label_102c28;
        case 0x102c2cu: goto label_102c2c;
        case 0x102c30u: goto label_102c30;
        case 0x102c34u: goto label_102c34;
        case 0x102c38u: goto label_102c38;
        case 0x102c3cu: goto label_102c3c;
        case 0x102c40u: goto label_102c40;
        case 0x102c44u: goto label_102c44;
        case 0x102c48u: goto label_102c48;
        case 0x102c4cu: goto label_102c4c;
        case 0x102c50u: goto label_102c50;
        case 0x102c54u: goto label_102c54;
        case 0x102c58u: goto label_102c58;
        case 0x102c5cu: goto label_102c5c;
        case 0x102c60u: goto label_102c60;
        case 0x102c64u: goto label_102c64;
        case 0x102c68u: goto label_102c68;
        case 0x102c6cu: goto label_102c6c;
        case 0x102c70u: goto label_102c70;
        case 0x102c74u: goto label_102c74;
        case 0x102c78u: goto label_102c78;
        case 0x102c7cu: goto label_102c7c;
        case 0x102c80u: goto label_102c80;
        case 0x102c84u: goto label_102c84;
        case 0x102c88u: goto label_102c88;
        case 0x102c8cu: goto label_102c8c;
        case 0x102c90u: goto label_102c90;
        case 0x102c94u: goto label_102c94;
        case 0x102c98u: goto label_102c98;
        case 0x102c9cu: goto label_102c9c;
        case 0x102ca0u: goto label_102ca0;
        case 0x102ca4u: goto label_102ca4;
        case 0x102ca8u: goto label_102ca8;
        case 0x102cacu: goto label_102cac;
        case 0x102cb0u: goto label_102cb0;
        case 0x102cb4u: goto label_102cb4;
        case 0x102cb8u: goto label_102cb8;
        case 0x102cbcu: goto label_102cbc;
        case 0x102cc0u: goto label_102cc0;
        case 0x102cc4u: goto label_102cc4;
        case 0x102cc8u: goto label_102cc8;
        case 0x102cccu: goto label_102ccc;
        case 0x102cd0u: goto label_102cd0;
        case 0x102cd4u: goto label_102cd4;
        case 0x102cd8u: goto label_102cd8;
        case 0x102cdcu: goto label_102cdc;
        case 0x102ce0u: goto label_102ce0;
        case 0x102ce4u: goto label_102ce4;
        case 0x102ce8u: goto label_102ce8;
        case 0x102cecu: goto label_102cec;
        case 0x102cf0u: goto label_102cf0;
        case 0x102cf4u: goto label_102cf4;
        case 0x102cf8u: goto label_102cf8;
        case 0x102cfcu: goto label_102cfc;
        case 0x102d00u: goto label_102d00;
        case 0x102d04u: goto label_102d04;
        case 0x102d08u: goto label_102d08;
        case 0x102d0cu: goto label_102d0c;
        case 0x102d10u: goto label_102d10;
        case 0x102d14u: goto label_102d14;
        case 0x102d18u: goto label_102d18;
        case 0x102d1cu: goto label_102d1c;
        case 0x102d20u: goto label_102d20;
        case 0x102d24u: goto label_102d24;
        case 0x102d28u: goto label_102d28;
        case 0x102d2cu: goto label_102d2c;
        case 0x102d30u: goto label_102d30;
        case 0x102d34u: goto label_102d34;
        case 0x102d38u: goto label_102d38;
        case 0x102d3cu: goto label_102d3c;
        case 0x102d40u: goto label_102d40;
        case 0x102d44u: goto label_102d44;
        case 0x102d48u: goto label_102d48;
        case 0x102d4cu: goto label_102d4c;
        case 0x102d50u: goto label_102d50;
        case 0x102d54u: goto label_102d54;
        case 0x102d58u: goto label_102d58;
        case 0x102d5cu: goto label_102d5c;
        case 0x102d60u: goto label_102d60;
        case 0x102d64u: goto label_102d64;
        case 0x102d68u: goto label_102d68;
        case 0x102d6cu: goto label_102d6c;
        case 0x102d70u: goto label_102d70;
        case 0x102d74u: goto label_102d74;
        case 0x102d78u: goto label_102d78;
        case 0x102d7cu: goto label_102d7c;
        case 0x102d80u: goto label_102d80;
        case 0x102d84u: goto label_102d84;
        case 0x102d88u: goto label_102d88;
        case 0x102d8cu: goto label_102d8c;
        case 0x102d90u: goto label_102d90;
        case 0x102d94u: goto label_102d94;
        default: break;
    }

    ctx->pc = 0x102b50u;

label_102b50:
    // 0x102b50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x102b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_102b54:
    // 0x102b54: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x102b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_102b58:
    // 0x102b58: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x102b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_102b5c:
    // 0x102b5c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x102b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_102b60:
    // 0x102b60: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x102b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_102b64:
    // 0x102b64: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x102b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_102b68:
    // 0x102b68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x102b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_102b6c:
    // 0x102b6c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x102b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_102b70:
    // 0x102b70: 0xc04094c  jal         func_102530
label_102b74:
    if (ctx->pc == 0x102B74u) {
        ctx->pc = 0x102B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B70u;
        // 0x102b74: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B78u;
        goto label_102b78;
    }
    ctx->pc = 0x102B70u;
    SET_GPR_U32(ctx, 31, 0x102B78u);
    ctx->pc = 0x102B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102B70u;
    // 0x102b74: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102530u, 0x102B70u, 0x102B78u)) {
        return;
    }
    ctx->pc = 0x102B78u;
label_102b78:
    // 0x102b78: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x102b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
label_102b7c:
    // 0x102b7c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x102b7cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_102b80:
    // 0x102b80: 0x8e230264  lw          $v1, 0x264($s1)
    ctx->pc = 0x102b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_102b84:
    // 0x102b84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x102b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_102b88:
    // 0x102b88: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x102b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_102b8c:
    // 0x102b8c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x102b8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_102b90:
    // 0x102b90: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_102b94:
    if (ctx->pc == 0x102B94u) {
        ctx->pc = 0x102B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B90u;
        // 0x102b94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102B98u;
        goto label_102b98;
    }
    ctx->pc = 0x102B90u;
    {
        const bool branch_taken_0x102b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102B90u;
        // 0x102b94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b90) {
            ctx->pc = 0x102BACu;
            goto label_102bac;
        }
    }
    ctx->pc = 0x102B98u;
label_102b98:
    // 0x102b98: 0xc6200268  lwc1        $f0, 0x268($s1)
    ctx->pc = 0x102b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_102b9c:
    // 0x102b9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x102b9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_102ba0:
    // 0x102ba0: 0x0  nop
    ctx->pc = 0x102ba0u;
    // NOP
label_102ba4:
    // 0x102ba4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_102ba8:
    if (ctx->pc == 0x102BA8u) {
        ctx->pc = 0x102BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BA4u;
        // 0x102ba8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BACu;
        goto label_102bac;
    }
    ctx->pc = 0x102BA4u;
    {
        const bool branch_taken_0x102ba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x102ba4) {
            ctx->pc = 0x102BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102BA4u;
            // 0x102ba8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102BACu;
            goto label_102bac;
        }
    }
    ctx->pc = 0x102BACu;
label_102bac:
    // 0x102bac: 0x8e220290  lw          $v0, 0x290($s1)
    ctx->pc = 0x102bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
label_102bb0:
    // 0x102bb0: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
label_102bb4:
    if (ctx->pc == 0x102BB4u) {
        ctx->pc = 0x102BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BB0u;
        // 0x102bb4: 0xe6210268  swc1        $f1, 0x268($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 616), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BB8u;
        goto label_102bb8;
    }
    ctx->pc = 0x102BB0u;
    {
        const bool branch_taken_0x102bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BB0u;
        // 0x102bb4: 0xe6210268  swc1        $f1, 0x268($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x102bb0) {
            ctx->pc = 0x102D74u;
            goto label_102d74;
        }
    }
    ctx->pc = 0x102BB8u;
label_102bb8:
    // 0x102bb8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_102bbc:
    if (ctx->pc == 0x102BBCu) {
        ctx->pc = 0x102BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BB8u;
        // 0x102bbc: 0x8e22025c  lw          $v0, 0x25C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BC0u;
        goto label_102bc0;
    }
    ctx->pc = 0x102BB8u;
    {
        const bool branch_taken_0x102bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x102bb8) {
            ctx->pc = 0x102BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102BB8u;
            // 0x102bbc: 0x8e22025c  lw          $v0, 0x25C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102BCCu;
            goto label_102bcc;
        }
    }
    ctx->pc = 0x102BC0u;
label_102bc0:
    // 0x102bc0: 0x10a0006d  beqz        $a1, . + 4 + (0x6D << 2)
label_102bc4:
    if (ctx->pc == 0x102BC4u) {
        ctx->pc = 0x102BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BC0u;
        // 0x102bc4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BC8u;
        goto label_102bc8;
    }
    ctx->pc = 0x102BC0u;
    {
        const bool branch_taken_0x102bc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x102BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BC0u;
        // 0x102bc4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102bc0) {
            ctx->pc = 0x102D78u;
            goto label_102d78;
        }
    }
    ctx->pc = 0x102BC8u;
label_102bc8:
    // 0x102bc8: 0x8e22025c  lw          $v0, 0x25C($s1)
    ctx->pc = 0x102bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_102bcc:
    // 0x102bcc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x102bccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102bd0:
    // 0x102bd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x102bd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102bd4:
    // 0x102bd4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_102bd8:
    if (ctx->pc == 0x102BD8u) {
        ctx->pc = 0x102BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BD4u;
        // 0x102bd8: 0x3c150034  lui         $s5, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BDCu;
        goto label_102bdc;
    }
    ctx->pc = 0x102BD4u;
    {
        const bool branch_taken_0x102bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BD4u;
        // 0x102bd8: 0x3c150034  lui         $s5, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102bd4) {
            ctx->pc = 0x102C38u;
            goto label_102c38;
        }
    }
    ctx->pc = 0x102BDCu;
label_102bdc:
    // 0x102bdc: 0x2630021c  addiu       $s0, $s1, 0x21C
    ctx->pc = 0x102bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 540));
label_102be0:
    // 0x102be0: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x102be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_102be4:
    // 0x102be4: 0x0  nop
    ctx->pc = 0x102be4u;
    // NOP
label_102be8:
    // 0x102be8: 0x8ea48668  lw          $a0, -0x7998($s5)
    ctx->pc = 0x102be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
label_102bec:
    // 0x102bec: 0xc0595fa  jal         func_1657E8
label_102bf0:
    if (ctx->pc == 0x102BF0u) {
        ctx->pc = 0x102BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BECu;
        // 0x102bf0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BF4u;
        goto label_102bf4;
    }
    ctx->pc = 0x102BECu;
    SET_GPR_U32(ctx, 31, 0x102BF4u);
    ctx->pc = 0x102BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BECu;
    // 0x102bf0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1657E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1657E8u, 0x102BECu, 0x102BF4u)) {
        return;
    }
    ctx->pc = 0x102BF4u;
label_102bf4:
    // 0x102bf4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_102bf8:
    if (ctx->pc == 0x102BF8u) {
        ctx->pc = 0x102BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BF4u;
        // 0x102bf8: 0x8ea48668  lw          $a0, -0x7998($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102BFCu;
        goto label_102bfc;
    }
    ctx->pc = 0x102BF4u;
    {
        const bool branch_taken_0x102bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BF4u;
        // 0x102bf8: 0x8ea48668  lw          $a0, -0x7998($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102bf4) {
            ctx->pc = 0x102C0Cu;
            goto label_102c0c;
        }
    }
    ctx->pc = 0x102BFCu;
label_102bfc:
    // 0x102bfc: 0xc05960a  jal         func_165828
label_102c00:
    if (ctx->pc == 0x102C00u) {
        ctx->pc = 0x102C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102BFCu;
        // 0x102c00: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C04u;
        goto label_102c04;
    }
    ctx->pc = 0x102BFCu;
    SET_GPR_U32(ctx, 31, 0x102C04u);
    ctx->pc = 0x102C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102BFCu;
    // 0x102c00: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165828u, 0x102BFCu, 0x102C04u)) {
        return;
    }
    ctx->pc = 0x102C04u;
label_102c04:
    // 0x102c04: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_102c08:
    if (ctx->pc == 0x102C08u) {
        ctx->pc = 0x102C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C04u;
        // 0x102c08: 0x8ea48668  lw          $a0, -0x7998($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C0Cu;
        goto label_102c0c;
    }
    ctx->pc = 0x102C04u;
    {
        const bool branch_taken_0x102c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C04u;
        // 0x102c08: 0x8ea48668  lw          $a0, -0x7998($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c04) {
            ctx->pc = 0x102C24u;
            goto label_102c24;
        }
    }
    ctx->pc = 0x102C0Cu;
label_102c0c:
    // 0x102c0c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x102c0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_102c10:
    // 0x102c10: 0xc059092  jal         func_164248
label_102c14:
    if (ctx->pc == 0x102C14u) {
        ctx->pc = 0x102C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C10u;
        // 0x102c14: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C18u;
        goto label_102c18;
    }
    ctx->pc = 0x102C10u;
    SET_GPR_U32(ctx, 31, 0x102C18u);
    ctx->pc = 0x102C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102C10u;
    // 0x102c14: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x102C10u, 0x102C18u)) {
        return;
    }
    ctx->pc = 0x102C18u;
label_102c18:
    // 0x102c18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x102c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_102c1c:
    // 0x102c1c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x102c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_102c20:
    // 0x102c20: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x102c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_102c24:
    // 0x102c24: 0x8e22025c  lw          $v0, 0x25C($s1)
    ctx->pc = 0x102c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_102c28:
    // 0x102c28: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x102c28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_102c2c:
    // 0x102c2c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x102c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_102c30:
    // 0x102c30: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_102c34:
    if (ctx->pc == 0x102C34u) {
        ctx->pc = 0x102C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C30u;
        // 0x102c34: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C38u;
        goto label_102c38;
    }
    ctx->pc = 0x102C30u;
    {
        const bool branch_taken_0x102c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C30u;
        // 0x102c34: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c30) {
            ctx->pc = 0x102BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102be8;
        }
    }
    ctx->pc = 0x102C38u;
label_102c38:
    // 0x102c38: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_102c3c:
    if (ctx->pc == 0x102C3Cu) {
        ctx->pc = 0x102C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C38u;
        // 0x102c3c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C40u;
        goto label_102c40;
    }
    ctx->pc = 0x102C38u;
    {
        const bool branch_taken_0x102c38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C38u;
        // 0x102c3c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c38) {
            ctx->pc = 0x102C64u;
            goto label_102c64;
        }
    }
    ctx->pc = 0x102C40u;
label_102c40:
    // 0x102c40: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x102c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_102c44:
    // 0x102c44: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x102c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_102c48:
    // 0x102c48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_102c4c:
    // 0x102c4c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x102c4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_102c50:
    // 0x102c50: 0xc040e20  jal         func_103880
label_102c54:
    if (ctx->pc == 0x102C54u) {
        ctx->pc = 0x102C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C50u;
        // 0x102c54: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C58u;
        goto label_102c58;
    }
    ctx->pc = 0x102C50u;
    SET_GPR_U32(ctx, 31, 0x102C58u);
    ctx->pc = 0x102C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102C50u;
    // 0x102c54: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x103880u, 0x102C50u, 0x102C58u)) {
        return;
    }
    ctx->pc = 0x102C58u;
label_102c58:
    // 0x102c58: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x102c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_102c5c:
    // 0x102c5c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_102c60:
    if (ctx->pc == 0x102C60u) {
        ctx->pc = 0x102C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C5Cu;
        // 0x102c60: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C64u;
        goto label_102c64;
    }
    ctx->pc = 0x102C5Cu;
    {
        const bool branch_taken_0x102c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102c5c) {
            ctx->pc = 0x102C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102C5Cu;
            // 0x102c60: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102c48;
        }
    }
    ctx->pc = 0x102C64u;
label_102c64:
    // 0x102c64: 0x8e240198  lw          $a0, 0x198($s1)
    ctx->pc = 0x102c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
label_102c68:
    // 0x102c68: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x102c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_102c6c:
    // 0x102c6c: 0x8e2501a4  lw          $a1, 0x1A4($s1)
    ctx->pc = 0x102c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
label_102c70:
    // 0x102c70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x102c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_102c74:
    // 0x102c74: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x102c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_102c78:
    // 0x102c78: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_102c7c:
    if (ctx->pc == 0x102C7Cu) {
        ctx->pc = 0x102C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C78u;
        // 0x102c7c: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C80u;
        goto label_102c80;
    }
    ctx->pc = 0x102C78u;
    {
        const bool branch_taken_0x102c78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x102C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C78u;
        // 0x102c7c: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c78) {
            ctx->pc = 0x102C94u;
            goto label_102c94;
        }
    }
    ctx->pc = 0x102C80u;
label_102c80:
    // 0x102c80: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x102c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_102c84:
    // 0x102c84: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
label_102c88:
    if (ctx->pc == 0x102C88u) {
        ctx->pc = 0x102C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C84u;
        // 0x102c88: 0xae220260  sw          $v0, 0x260($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C8Cu;
        goto label_102c8c;
    }
    ctx->pc = 0x102C84u;
    {
        const bool branch_taken_0x102c84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x102c84) {
            ctx->pc = 0x102C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102C84u;
            // 0x102c88: 0xae220260  sw          $v0, 0x260($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102C9Cu;
            goto label_102c9c;
        }
    }
    ctx->pc = 0x102C8Cu;
label_102c8c:
    // 0x102c8c: 0x10000003  b           . + 4 + (0x3 << 2)
label_102c90:
    if (ctx->pc == 0x102C90u) {
        ctx->pc = 0x102C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C8Cu;
        // 0x102c90: 0xae250260  sw          $a1, 0x260($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102C94u;
        goto label_102c94;
    }
    ctx->pc = 0x102C8Cu;
    {
        const bool branch_taken_0x102c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C8Cu;
        // 0x102c90: 0xae250260  sw          $a1, 0x260($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c8c) {
            ctx->pc = 0x102C9Cu;
            goto label_102c9c;
        }
    }
    ctx->pc = 0x102C94u;
label_102c94:
    // 0x102c94: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x102c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_102c98:
    // 0x102c98: 0xae220260  sw          $v0, 0x260($s1)
    ctx->pc = 0x102c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
label_102c9c:
    // 0x102c9c: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x102c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_102ca0:
    // 0x102ca0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x102ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_102ca4:
    // 0x102ca4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x102ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102ca8:
    // 0x102ca8: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x102ca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_102cac:
    // 0x102cac: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x102cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_102cb0:
    // 0x102cb0: 0x40f809  jalr        $v0
label_102cb4:
    if (ctx->pc == 0x102CB4u) {
        ctx->pc = 0x102CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CB0u;
        // 0x102cb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102CB8u;
        goto label_102cb8;
    }
    ctx->pc = 0x102CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x102CB8u);
        ctx->pc = 0x102CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CB0u;
        // 0x102cb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102CB0u, 0x102CB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102CB8u;
label_102cb8:
    // 0x102cb8: 0x8e250260  lw          $a1, 0x260($s1)
    ctx->pc = 0x102cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_102cbc:
    // 0x102cbc: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x102cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_102cc0:
    // 0x102cc0: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x102cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_102cc4:
    // 0x102cc4: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x102cc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_102cc8:
    // 0x102cc8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x102cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_102ccc:
    // 0x102ccc: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x102cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_102cd0:
    // 0x102cd0: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_102cd4:
    if (ctx->pc == 0x102CD4u) {
        ctx->pc = 0x102CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CD0u;
        // 0x102cd4: 0x8eb58668  lw          $s5, -0x7998($s5) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102CD8u;
        goto label_102cd8;
    }
    ctx->pc = 0x102CD0u;
    {
        const bool branch_taken_0x102cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CD0u;
        // 0x102cd4: 0x8eb58668  lw          $s5, -0x7998($s5) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102cd0) {
            ctx->pc = 0x102D74u;
            goto label_102d74;
        }
    }
    ctx->pc = 0x102CD8u;
label_102cd8:
    // 0x102cd8: 0x24120060  addiu       $s2, $zero, 0x60
    ctx->pc = 0x102cd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_102cdc:
    // 0x102cdc: 0x26340004  addiu       $s4, $s1, 0x4
    ctx->pc = 0x102cdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_102ce0:
    // 0x102ce0: 0x2633021c  addiu       $s3, $s1, 0x21C
    ctx->pc = 0x102ce0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 540));
label_102ce4:
    // 0x102ce4: 0x8e22025c  lw          $v0, 0x25C($s1)
    ctx->pc = 0x102ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_102ce8:
    // 0x102ce8: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x102ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_102cec:
    // 0x102cec: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_102cf0:
    if (ctx->pc == 0x102CF0u) {
        ctx->pc = 0x102CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CECu;
        // 0x102cf0: 0xb21818  mult        $v1, $a1, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x102CF4u;
        goto label_102cf4;
    }
    ctx->pc = 0x102CECu;
    {
        const bool branch_taken_0x102cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CECu;
        // 0x102cf0: 0xb21818  mult        $v1, $a1, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x102cec) {
            ctx->pc = 0x102D50u;
            goto label_102d50;
        }
    }
    ctx->pc = 0x102CF4u;
label_102cf4:
    // 0x102cf4: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x102cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_102cf8:
    // 0x102cf8: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x102cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_102cfc:
    // 0x102cfc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x102cfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_102d00:
    // 0x102d00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x102d00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102d04:
    // 0x102d04: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x102d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_102d08:
    // 0x102d08: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x102d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_102d0c:
    // 0x102d0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x102d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_102d10:
    // 0x102d10: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x102d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_102d14:
    // 0x102d14: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x102d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_102d18:
    // 0x102d18: 0x94680048  lhu         $t0, 0x48($v1)
    ctx->pc = 0x102d18u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_102d1c:
    // 0x102d1c: 0xc0596ae  jal         func_165AB8
label_102d20:
    if (ctx->pc == 0x102D20u) {
        ctx->pc = 0x102D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D1Cu;
        // 0x102d20: 0x8c450028  lw          $a1, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102D24u;
        goto label_102d24;
    }
    ctx->pc = 0x102D1Cu;
    SET_GPR_U32(ctx, 31, 0x102D24u);
    ctx->pc = 0x102D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102D1Cu;
    // 0x102d20: 0x8c450028  lw          $a1, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AB8u, 0x102D1Cu, 0x102D24u)) {
        return;
    }
    ctx->pc = 0x102D24u;
label_102d24:
    // 0x102d24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x102d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102d28:
    // 0x102d28: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x102d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_102d2c:
    // 0x102d2c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_102d30:
    if (ctx->pc == 0x102D30u) {
        ctx->pc = 0x102D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D2Cu;
        // 0x102d30: 0x8e250260  lw          $a1, 0x260($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102D34u;
        goto label_102d34;
    }
    ctx->pc = 0x102D2Cu;
    {
        const bool branch_taken_0x102d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102d2c) {
            ctx->pc = 0x102D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102D2Cu;
            // 0x102d30: 0x8e250260  lw          $a1, 0x260($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102D54u;
            goto label_102d54;
        }
    }
    ctx->pc = 0x102D34u;
label_102d34:
    // 0x102d34: 0x8e22025c  lw          $v0, 0x25C($s1)
    ctx->pc = 0x102d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_102d38:
    // 0x102d38: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x102d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_102d3c:
    // 0x102d3c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x102d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_102d40:
    // 0x102d40: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x102d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_102d44:
    // 0x102d44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_102d48:
    // 0x102d48: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x102d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_102d4c:
    // 0x102d4c: 0xae22025c  sw          $v0, 0x25C($s1)
    ctx->pc = 0x102d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 2));
label_102d50:
    // 0x102d50: 0x8e250260  lw          $a1, 0x260($s1)
    ctx->pc = 0x102d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_102d54:
    // 0x102d54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x102d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_102d58:
    // 0x102d58: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x102d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_102d5c:
    // 0x102d5c: 0xb21018  mult        $v0, $a1, $s2
    ctx->pc = 0x102d5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_102d60:
    // 0x102d60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x102d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_102d64:
    // 0x102d64: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x102d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_102d68:
    // 0x102d68: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x102d68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_102d6c:
    // 0x102d6c: 0x5460ffde  bnel        $v1, $zero, . + 4 + (-0x22 << 2)
label_102d70:
    if (ctx->pc == 0x102D70u) {
        ctx->pc = 0x102D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D6Cu;
        // 0x102d70: 0x8e22025c  lw          $v0, 0x25C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102D74u;
        goto label_102d74;
    }
    ctx->pc = 0x102D6Cu;
    {
        const bool branch_taken_0x102d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x102d6c) {
            ctx->pc = 0x102D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102D6Cu;
            // 0x102d70: 0x8e22025c  lw          $v0, 0x25C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102ce8;
        }
    }
    ctx->pc = 0x102D74u;
label_102d74:
    // 0x102d74: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x102d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_102d78:
    // 0x102d78: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x102d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_102d7c:
    // 0x102d7c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x102d7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_102d80:
    // 0x102d80: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x102d80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_102d84:
    // 0x102d84: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x102d84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_102d88:
    // 0x102d88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x102d88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_102d8c:
    // 0x102d8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x102d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_102d90:
    // 0x102d90: 0x3e00008  jr          $ra
label_102d94:
    if (ctx->pc == 0x102D94u) {
        ctx->pc = 0x102D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D90u;
        // 0x102d94: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102D98u;
        goto label_fallthrough_0x102d90;
    }
    ctx->pc = 0x102D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D90u;
        // 0x102d94: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x102d90:
    ctx->pc = 0x102D98u;
}
