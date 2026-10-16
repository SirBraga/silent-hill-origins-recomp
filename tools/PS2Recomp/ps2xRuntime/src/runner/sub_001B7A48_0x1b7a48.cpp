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

// Function: sub_001B7A48
// Address: 0x1b7a48 - 0x1b7d70
void sub_001B7A48_0x1b7a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7A48_0x1b7a48");
#endif

    switch (ctx->pc) {
        case 0x1b7a48u: goto label_1b7a48;
        case 0x1b7a4cu: goto label_1b7a4c;
        case 0x1b7a50u: goto label_1b7a50;
        case 0x1b7a54u: goto label_1b7a54;
        case 0x1b7a58u: goto label_1b7a58;
        case 0x1b7a5cu: goto label_1b7a5c;
        case 0x1b7a60u: goto label_1b7a60;
        case 0x1b7a64u: goto label_1b7a64;
        case 0x1b7a68u: goto label_1b7a68;
        case 0x1b7a6cu: goto label_1b7a6c;
        case 0x1b7a70u: goto label_1b7a70;
        case 0x1b7a74u: goto label_1b7a74;
        case 0x1b7a78u: goto label_1b7a78;
        case 0x1b7a7cu: goto label_1b7a7c;
        case 0x1b7a80u: goto label_1b7a80;
        case 0x1b7a84u: goto label_1b7a84;
        case 0x1b7a88u: goto label_1b7a88;
        case 0x1b7a8cu: goto label_1b7a8c;
        case 0x1b7a90u: goto label_1b7a90;
        case 0x1b7a94u: goto label_1b7a94;
        case 0x1b7a98u: goto label_1b7a98;
        case 0x1b7a9cu: goto label_1b7a9c;
        case 0x1b7aa0u: goto label_1b7aa0;
        case 0x1b7aa4u: goto label_1b7aa4;
        case 0x1b7aa8u: goto label_1b7aa8;
        case 0x1b7aacu: goto label_1b7aac;
        case 0x1b7ab0u: goto label_1b7ab0;
        case 0x1b7ab4u: goto label_1b7ab4;
        case 0x1b7ab8u: goto label_1b7ab8;
        case 0x1b7abcu: goto label_1b7abc;
        case 0x1b7ac0u: goto label_1b7ac0;
        case 0x1b7ac4u: goto label_1b7ac4;
        case 0x1b7ac8u: goto label_1b7ac8;
        case 0x1b7accu: goto label_1b7acc;
        case 0x1b7ad0u: goto label_1b7ad0;
        case 0x1b7ad4u: goto label_1b7ad4;
        case 0x1b7ad8u: goto label_1b7ad8;
        case 0x1b7adcu: goto label_1b7adc;
        case 0x1b7ae0u: goto label_1b7ae0;
        case 0x1b7ae4u: goto label_1b7ae4;
        case 0x1b7ae8u: goto label_1b7ae8;
        case 0x1b7aecu: goto label_1b7aec;
        case 0x1b7af0u: goto label_1b7af0;
        case 0x1b7af4u: goto label_1b7af4;
        case 0x1b7af8u: goto label_1b7af8;
        case 0x1b7afcu: goto label_1b7afc;
        case 0x1b7b00u: goto label_1b7b00;
        case 0x1b7b04u: goto label_1b7b04;
        case 0x1b7b08u: goto label_1b7b08;
        case 0x1b7b0cu: goto label_1b7b0c;
        case 0x1b7b10u: goto label_1b7b10;
        case 0x1b7b14u: goto label_1b7b14;
        case 0x1b7b18u: goto label_1b7b18;
        case 0x1b7b1cu: goto label_1b7b1c;
        case 0x1b7b20u: goto label_1b7b20;
        case 0x1b7b24u: goto label_1b7b24;
        case 0x1b7b28u: goto label_1b7b28;
        case 0x1b7b2cu: goto label_1b7b2c;
        case 0x1b7b30u: goto label_1b7b30;
        case 0x1b7b34u: goto label_1b7b34;
        case 0x1b7b38u: goto label_1b7b38;
        case 0x1b7b3cu: goto label_1b7b3c;
        case 0x1b7b40u: goto label_1b7b40;
        case 0x1b7b44u: goto label_1b7b44;
        case 0x1b7b48u: goto label_1b7b48;
        case 0x1b7b4cu: goto label_1b7b4c;
        case 0x1b7b50u: goto label_1b7b50;
        case 0x1b7b54u: goto label_1b7b54;
        case 0x1b7b58u: goto label_1b7b58;
        case 0x1b7b5cu: goto label_1b7b5c;
        case 0x1b7b60u: goto label_1b7b60;
        case 0x1b7b64u: goto label_1b7b64;
        case 0x1b7b68u: goto label_1b7b68;
        case 0x1b7b6cu: goto label_1b7b6c;
        case 0x1b7b70u: goto label_1b7b70;
        case 0x1b7b74u: goto label_1b7b74;
        case 0x1b7b78u: goto label_1b7b78;
        case 0x1b7b7cu: goto label_1b7b7c;
        case 0x1b7b80u: goto label_1b7b80;
        case 0x1b7b84u: goto label_1b7b84;
        case 0x1b7b88u: goto label_1b7b88;
        case 0x1b7b8cu: goto label_1b7b8c;
        case 0x1b7b90u: goto label_1b7b90;
        case 0x1b7b94u: goto label_1b7b94;
        case 0x1b7b98u: goto label_1b7b98;
        case 0x1b7b9cu: goto label_1b7b9c;
        case 0x1b7ba0u: goto label_1b7ba0;
        case 0x1b7ba4u: goto label_1b7ba4;
        case 0x1b7ba8u: goto label_1b7ba8;
        case 0x1b7bacu: goto label_1b7bac;
        case 0x1b7bb0u: goto label_1b7bb0;
        case 0x1b7bb4u: goto label_1b7bb4;
        case 0x1b7bb8u: goto label_1b7bb8;
        case 0x1b7bbcu: goto label_1b7bbc;
        case 0x1b7bc0u: goto label_1b7bc0;
        case 0x1b7bc4u: goto label_1b7bc4;
        case 0x1b7bc8u: goto label_1b7bc8;
        case 0x1b7bccu: goto label_1b7bcc;
        case 0x1b7bd0u: goto label_1b7bd0;
        case 0x1b7bd4u: goto label_1b7bd4;
        case 0x1b7bd8u: goto label_1b7bd8;
        case 0x1b7bdcu: goto label_1b7bdc;
        case 0x1b7be0u: goto label_1b7be0;
        case 0x1b7be4u: goto label_1b7be4;
        case 0x1b7be8u: goto label_1b7be8;
        case 0x1b7becu: goto label_1b7bec;
        case 0x1b7bf0u: goto label_1b7bf0;
        case 0x1b7bf4u: goto label_1b7bf4;
        case 0x1b7bf8u: goto label_1b7bf8;
        case 0x1b7bfcu: goto label_1b7bfc;
        case 0x1b7c00u: goto label_1b7c00;
        case 0x1b7c04u: goto label_1b7c04;
        case 0x1b7c08u: goto label_1b7c08;
        case 0x1b7c0cu: goto label_1b7c0c;
        case 0x1b7c10u: goto label_1b7c10;
        case 0x1b7c14u: goto label_1b7c14;
        case 0x1b7c18u: goto label_1b7c18;
        case 0x1b7c1cu: goto label_1b7c1c;
        case 0x1b7c20u: goto label_1b7c20;
        case 0x1b7c24u: goto label_1b7c24;
        case 0x1b7c28u: goto label_1b7c28;
        case 0x1b7c2cu: goto label_1b7c2c;
        case 0x1b7c30u: goto label_1b7c30;
        case 0x1b7c34u: goto label_1b7c34;
        case 0x1b7c38u: goto label_1b7c38;
        case 0x1b7c3cu: goto label_1b7c3c;
        case 0x1b7c40u: goto label_1b7c40;
        case 0x1b7c44u: goto label_1b7c44;
        case 0x1b7c48u: goto label_1b7c48;
        case 0x1b7c4cu: goto label_1b7c4c;
        case 0x1b7c50u: goto label_1b7c50;
        case 0x1b7c54u: goto label_1b7c54;
        case 0x1b7c58u: goto label_1b7c58;
        case 0x1b7c5cu: goto label_1b7c5c;
        case 0x1b7c60u: goto label_1b7c60;
        case 0x1b7c64u: goto label_1b7c64;
        case 0x1b7c68u: goto label_1b7c68;
        case 0x1b7c6cu: goto label_1b7c6c;
        case 0x1b7c70u: goto label_1b7c70;
        case 0x1b7c74u: goto label_1b7c74;
        case 0x1b7c78u: goto label_1b7c78;
        case 0x1b7c7cu: goto label_1b7c7c;
        case 0x1b7c80u: goto label_1b7c80;
        case 0x1b7c84u: goto label_1b7c84;
        case 0x1b7c88u: goto label_1b7c88;
        case 0x1b7c8cu: goto label_1b7c8c;
        case 0x1b7c90u: goto label_1b7c90;
        case 0x1b7c94u: goto label_1b7c94;
        case 0x1b7c98u: goto label_1b7c98;
        case 0x1b7c9cu: goto label_1b7c9c;
        case 0x1b7ca0u: goto label_1b7ca0;
        case 0x1b7ca4u: goto label_1b7ca4;
        case 0x1b7ca8u: goto label_1b7ca8;
        case 0x1b7cacu: goto label_1b7cac;
        case 0x1b7cb0u: goto label_1b7cb0;
        case 0x1b7cb4u: goto label_1b7cb4;
        case 0x1b7cb8u: goto label_1b7cb8;
        case 0x1b7cbcu: goto label_1b7cbc;
        case 0x1b7cc0u: goto label_1b7cc0;
        case 0x1b7cc4u: goto label_1b7cc4;
        case 0x1b7cc8u: goto label_1b7cc8;
        case 0x1b7cccu: goto label_1b7ccc;
        case 0x1b7cd0u: goto label_1b7cd0;
        case 0x1b7cd4u: goto label_1b7cd4;
        case 0x1b7cd8u: goto label_1b7cd8;
        case 0x1b7cdcu: goto label_1b7cdc;
        case 0x1b7ce0u: goto label_1b7ce0;
        case 0x1b7ce4u: goto label_1b7ce4;
        case 0x1b7ce8u: goto label_1b7ce8;
        case 0x1b7cecu: goto label_1b7cec;
        case 0x1b7cf0u: goto label_1b7cf0;
        case 0x1b7cf4u: goto label_1b7cf4;
        case 0x1b7cf8u: goto label_1b7cf8;
        case 0x1b7cfcu: goto label_1b7cfc;
        case 0x1b7d00u: goto label_1b7d00;
        case 0x1b7d04u: goto label_1b7d04;
        case 0x1b7d08u: goto label_1b7d08;
        case 0x1b7d0cu: goto label_1b7d0c;
        case 0x1b7d10u: goto label_1b7d10;
        case 0x1b7d14u: goto label_1b7d14;
        case 0x1b7d18u: goto label_1b7d18;
        case 0x1b7d1cu: goto label_1b7d1c;
        case 0x1b7d20u: goto label_1b7d20;
        case 0x1b7d24u: goto label_1b7d24;
        case 0x1b7d28u: goto label_1b7d28;
        case 0x1b7d2cu: goto label_1b7d2c;
        case 0x1b7d30u: goto label_1b7d30;
        case 0x1b7d34u: goto label_1b7d34;
        case 0x1b7d38u: goto label_1b7d38;
        case 0x1b7d3cu: goto label_1b7d3c;
        case 0x1b7d40u: goto label_1b7d40;
        case 0x1b7d44u: goto label_1b7d44;
        case 0x1b7d48u: goto label_1b7d48;
        case 0x1b7d4cu: goto label_1b7d4c;
        case 0x1b7d50u: goto label_1b7d50;
        case 0x1b7d54u: goto label_1b7d54;
        case 0x1b7d58u: goto label_1b7d58;
        case 0x1b7d5cu: goto label_1b7d5c;
        case 0x1b7d60u: goto label_1b7d60;
        case 0x1b7d64u: goto label_1b7d64;
        case 0x1b7d68u: goto label_1b7d68;
        case 0x1b7d6cu: goto label_1b7d6c;
        default: break;
    }

    ctx->pc = 0x1b7a48u;

label_1b7a48:
    // 0x1b7a48: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1b7a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_1b7a4c:
    // 0x1b7a4c: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x1b7a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
label_1b7a50:
    // 0x1b7a50: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x1b7a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
label_1b7a54:
    // 0x1b7a54: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b7a54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b7a58:
    // 0x1b7a58: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b7a58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b7a5c:
    // 0x1b7a5c: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x1b7a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
label_1b7a60:
    // 0x1b7a60: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x1b7a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
label_1b7a64:
    // 0x1b7a64: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x1b7a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
label_1b7a68:
    // 0x1b7a68: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x1b7a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
label_1b7a6c:
    // 0x1b7a6c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1b7a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_1b7a70:
    // 0x1b7a70: 0xc06bc10  jal         func_1AF040
label_1b7a74:
    if (ctx->pc == 0x1B7A74u) {
        ctx->pc = 0x1B7A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A70u;
        // 0x1b7a74: 0xe7b40190  swc1        $f20, 0x190($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7A78u;
        goto label_1b7a78;
    }
    ctx->pc = 0x1B7A70u;
    SET_GPR_U32(ctx, 31, 0x1B7A78u);
    ctx->pc = 0x1B7A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7A70u;
    // 0x1b7a74: 0xe7b40190  swc1        $f20, 0x190($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1B7A70u, 0x1B7A78u)) {
        return;
    }
    ctx->pc = 0x1B7A78u;
label_1b7a78:
    // 0x1b7a78: 0x8e8502dc  lw          $a1, 0x2DC($s4)
    ctx->pc = 0x1b7a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 732)));
label_1b7a7c:
    // 0x1b7a7c: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
label_1b7a80:
    if (ctx->pc == 0x1B7A80u) {
        ctx->pc = 0x1B7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A7Cu;
        // 0x1b7a80: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7A84u;
        goto label_1b7a84;
    }
    ctx->pc = 0x1B7A7Cu;
    {
        const bool branch_taken_0x1b7a7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A7Cu;
        // 0x1b7a80: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a7c) {
            ctx->pc = 0x1B7B2Cu;
            goto label_1b7b2c;
        }
    }
    ctx->pc = 0x1B7A84u;
label_1b7a84:
    // 0x1b7a84: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1b7a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1b7a88:
    // 0x1b7a88: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b7a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1b7a8c:
    // 0x1b7a8c: 0x40f809  jalr        $v0
label_1b7a90:
    if (ctx->pc == 0x1B7A90u) {
        ctx->pc = 0x1B7A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A8Cu;
        // 0x1b7a90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7A94u;
        goto label_1b7a94;
    }
    ctx->pc = 0x1B7A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B7A94u);
        ctx->pc = 0x1B7A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A8Cu;
        // 0x1b7a90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7A8Cu, 0x1B7A94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7A94u;
label_1b7a94:
    // 0x1b7a94: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1b7a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1b7a98:
    // 0x1b7a98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b7a9c:
    // 0x1b7a9c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1b7a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b7aa0:
    // 0x1b7aa0: 0xc68002e0  lwc1        $f0, 0x2E0($s4)
    ctx->pc = 0x1b7aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7aa4:
    // 0x1b7aa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b7aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b7aa8:
    // 0x1b7aa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7aac:
    // 0x1b7aac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b7aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b7ab0:
    // 0x1b7ab0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7ab0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1b7ab4:
    // 0x1b7ab4: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x1b7ab4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_1b7ab8:
    // 0x1b7ab8: 0xc0c493d  jal         func_3124F4
label_1b7abc:
    if (ctx->pc == 0x1B7ABCu) {
        ctx->pc = 0x1B7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AB8u;
        // 0x1b7abc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7AC0u;
        goto label_1b7ac0;
    }
    ctx->pc = 0x1B7AB8u;
    SET_GPR_U32(ctx, 31, 0x1B7AC0u);
    ctx->pc = 0x1B7ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7AB8u;
    // 0x1b7abc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B7AB8u, 0x1B7AC0u)) {
        return;
    }
    ctx->pc = 0x1B7AC0u;
label_1b7ac0:
    // 0x1b7ac0: 0xc6b10080  lwc1        $f17, 0x80($s5)
    ctx->pc = 0x1b7ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_1b7ac4:
    // 0x1b7ac4: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x1b7ac4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b7ac8:
    // 0x1b7ac8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b7ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b7acc:
    // 0x1b7acc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7ad0:
    // 0x1b7ad0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b7ad4:
    // 0x1b7ad4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b7ad4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b7ad8:
    // 0x1b7ad8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b7ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b7adc:
    // 0x1b7adc: 0x46110443  div.s       $f17, $f0, $f17
    ctx->pc = 0x1b7adcu;
    ctx->f[17] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[17]);
label_1b7ae0:
    // 0x1b7ae0: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1b7ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
label_1b7ae4:
    // 0x1b7ae4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1b7ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1b7ae8:
    // 0x1b7ae8: 0xc6100008  lwc1        $f16, 0x8($s0)
    ctx->pc = 0x1b7ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1b7aec:
    // 0x1b7aec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b7aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b7af0:
    // 0x1b7af0: 0xa3b10012  sb          $s1, 0x12($sp)
    ctx->pc = 0x1b7af0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 17));
label_1b7af4:
    // 0x1b7af4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b7af4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b7af8:
    // 0x1b7af8: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x1b7af8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_1b7afc:
    // 0x1b7afc: 0x46006486  mov.s       $f18, $f12
    ctx->pc = 0x1b7afcu;
    ctx->f[18] = FPU_MOV_S(ctx->f[12]);
label_1b7b00:
    // 0x1b7b00: 0x460064c6  mov.s       $f19, $f12
    ctx->pc = 0x1b7b00u;
    ctx->f[19] = FPU_MOV_S(ctx->f[12]);
label_1b7b04:
    // 0x1b7b04: 0xa3a20013  sb          $v0, 0x13($sp)
    ctx->pc = 0x1b7b04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 2));
label_1b7b08:
    // 0x1b7b08: 0xa3b10010  sb          $s1, 0x10($sp)
    ctx->pc = 0x1b7b08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 17));
label_1b7b0c:
    // 0x1b7b0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b7b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7b10:
    // 0x1b7b10: 0xa3b10011  sb          $s1, 0x11($sp)
    ctx->pc = 0x1b7b10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 17));
label_1b7b14:
    // 0x1b7b14: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b7b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b7b18:
    // 0x1b7b18: 0xc06ce2a  jal         func_1B38A8
label_1b7b1c:
    if (ctx->pc == 0x1B7B1Cu) {
        ctx->pc = 0x1B7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B18u;
        // 0x1b7b1c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7B20u;
        goto label_1b7b20;
    }
    ctx->pc = 0x1B7B18u;
    SET_GPR_U32(ctx, 31, 0x1B7B20u);
    ctx->pc = 0x1B7B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7B18u;
    // 0x1b7b1c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1B7B18u, 0x1B7B20u)) {
        return;
    }
    ctx->pc = 0x1B7B20u;
label_1b7b20:
    // 0x1b7b20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b7b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b7b24:
    // 0x1b7b24: 0xc06cff8  jal         func_1B3FE0
label_1b7b28:
    if (ctx->pc == 0x1B7B28u) {
        ctx->pc = 0x1B7B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B24u;
        // 0x1b7b28: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7B2Cu;
        goto label_1b7b2c;
    }
    ctx->pc = 0x1B7B24u;
    SET_GPR_U32(ctx, 31, 0x1B7B2Cu);
    ctx->pc = 0x1B7B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7B24u;
    // 0x1b7b28: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1B7B24u, 0x1B7B2Cu)) {
        return;
    }
    ctx->pc = 0x1B7B2Cu;
label_1b7b2c:
    // 0x1b7b2c: 0x8e820260  lw          $v0, 0x260($s4)
    ctx->pc = 0x1b7b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 608)));
label_1b7b30:
    // 0x1b7b30: 0x14400085  bnez        $v0, . + 4 + (0x85 << 2)
label_1b7b34:
    if (ctx->pc == 0x1B7B34u) {
        ctx->pc = 0x1B7B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B30u;
        // 0x1b7b34: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7B38u;
        goto label_1b7b38;
    }
    ctx->pc = 0x1B7B30u;
    {
        const bool branch_taken_0x1b7b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B30u;
        // 0x1b7b34: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b30) {
            ctx->pc = 0x1B7D48u;
            goto label_1b7d48;
        }
    }
    ctx->pc = 0x1B7B38u;
label_1b7b38:
    // 0x1b7b38: 0x8e840280  lw          $a0, 0x280($s4)
    ctx->pc = 0x1b7b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 640)));
label_1b7b3c:
    // 0x1b7b3c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1b7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1b7b40:
    // 0x1b7b40: 0x244786a0  addiu       $a3, $v0, -0x7960
    ctx->pc = 0x1b7b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936224));
label_1b7b44:
    // 0x1b7b44: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1b7b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1b7b48:
    // 0x1b7b48: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1b7b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1b7b4c:
    // 0x1b7b4c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1b7b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1b7b50:
    // 0x1b7b50: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1b7b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1b7b54:
    // 0x1b7b54: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x1b7b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b7b58:
    // 0x1b7b58: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x1b7b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b7b5c:
    // 0x1b7b5c: 0xb3a5001f  sdl         $a1, 0x1F($sp)
    ctx->pc = 0x1b7b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b7b60:
    // 0x1b7b60: 0xb7a50018  sdr         $a1, 0x18($sp)
    ctx->pc = 0x1b7b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b7b64:
    // 0x1b7b64: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x1b7b64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
label_1b7b68:
    // 0x1b7b68: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
label_1b7b6c:
    if (ctx->pc == 0x1B7B6Cu) {
        ctx->pc = 0x1B7B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B68u;
        // 0x1b7b6c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7B70u;
        goto label_1b7b70;
    }
    ctx->pc = 0x1B7B68u;
    {
        const bool branch_taken_0x1b7b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b68) {
            ctx->pc = 0x1B7B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7B68u;
            // 0x1b7b6c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7BC8u;
            goto label_1b7bc8;
        }
    }
    ctx->pc = 0x1B7B70u;
label_1b7b70:
    // 0x1b7b70: 0x8e820284  lw          $v0, 0x284($s4)
    ctx->pc = 0x1b7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 644)));
label_1b7b74:
    // 0x1b7b74: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1b7b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1b7b78:
    // 0x1b7b78: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x1b7b78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
label_1b7b7c:
    // 0x1b7b7c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_1b7b80:
    if (ctx->pc == 0x1B7B80u) {
        ctx->pc = 0x1B7B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B7Cu;
        // 0x1b7b80: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7B84u;
        goto label_1b7b84;
    }
    ctx->pc = 0x1B7B7Cu;
    {
        const bool branch_taken_0x1b7b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B7Cu;
        // 0x1b7b80: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b7c) {
            ctx->pc = 0x1B7BC4u;
            goto label_1b7bc4;
        }
    }
    ctx->pc = 0x1B7B84u;
label_1b7b84:
    // 0x1b7b84: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1b7b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b7b88:
    // 0x1b7b88: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1b7b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b7b8c:
    // 0x1b7b8c: 0x0  nop
    ctx->pc = 0x1b7b8cu;
    // NOP
label_1b7b90:
    // 0x1b7b90: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1b7b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_1b7b94:
    // 0x1b7b94: 0xc085bc2  jal         func_216F08
label_1b7b98:
    if (ctx->pc == 0x1B7B98u) {
        ctx->pc = 0x1B7B9Cu;
        goto label_1b7b9c;
    }
    ctx->pc = 0x1B7B94u;
    SET_GPR_U32(ctx, 31, 0x1B7B9Cu);
    ctx->pc = 0x216F08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216F08u, 0x1B7B94u, 0x1B7B9Cu)) {
        return;
    }
    ctx->pc = 0x1B7B9Cu;
label_1b7b9c:
    // 0x1b7b9c: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x1b7b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
label_1b7ba0:
    // 0x1b7ba0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b7ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b7ba4:
    // 0x1b7ba4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b7ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b7ba8:
    // 0x1b7ba8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b7ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b7bac:
    // 0x1b7bac: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x1b7bacu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_1b7bb0:
    // 0x1b7bb0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1b7bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7bb4:
    // 0x1b7bb4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1b7bb4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1b7bb8:
    // 0x1b7bb8: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x1b7bb8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_1b7bbc:
    // 0x1b7bbc: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x1b7bbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_1b7bc0:
    // 0x1b7bc0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1b7bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1b7bc4:
    // 0x1b7bc4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b7bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b7bc8:
    // 0x1b7bc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7bcc:
    // 0x1b7bcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b7bd0:
    // 0x1b7bd0: 0xc0c493d  jal         func_3124F4
label_1b7bd4:
    if (ctx->pc == 0x1B7BD4u) {
        ctx->pc = 0x1B7BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7BD0u;
        // 0x1b7bd4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7BD8u;
        goto label_1b7bd8;
    }
    ctx->pc = 0x1B7BD0u;
    SET_GPR_U32(ctx, 31, 0x1B7BD8u);
    ctx->pc = 0x1B7BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BD0u;
    // 0x1b7bd4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B7BD0u, 0x1B7BD8u)) {
        return;
    }
    ctx->pc = 0x1B7BD8u;
label_1b7bd8:
    // 0x1b7bd8: 0xc68002e8  lwc1        $f0, 0x2E8($s4)
    ctx->pc = 0x1b7bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7bdc:
    // 0x1b7bdc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b7bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b7be0:
    // 0x1b7be0: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1b7be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1b7be4:
    // 0x1b7be4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b7be8:
    // 0x1b7be8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1b7be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b7bec:
    // 0x1b7bec: 0xa3a20032  sb          $v0, 0x32($sp)
    ctx->pc = 0x1b7becu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 50), (uint8_t)GPR_U32(ctx, 2));
label_1b7bf0:
    // 0x1b7bf0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1b7bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b7bf4:
    // 0x1b7bf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b7bf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b7bf8:
    // 0x1b7bf8: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x1b7bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
label_1b7bfc:
    // 0x1b7bfc: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x1b7bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
label_1b7c00:
    // 0x1b7c00: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x1b7c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
label_1b7c04:
    // 0x1b7c04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b7c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b7c08:
    // 0x1b7c08: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b7c08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1b7c0c:
    // 0x1b7c0c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b7c0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1b7c10:
    // 0x1b7c10: 0x8e840288  lw          $a0, 0x288($s4)
    ctx->pc = 0x1b7c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 648)));
label_1b7c14:
    // 0x1b7c14: 0x8e850268  lw          $a1, 0x268($s4)
    ctx->pc = 0x1b7c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 616)));
label_1b7c18:
    // 0x1b7c18: 0xa3a20033  sb          $v0, 0x33($sp)
    ctx->pc = 0x1b7c18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 51), (uint8_t)GPR_U32(ctx, 2));
label_1b7c1c:
    // 0x1b7c1c: 0x8ba20033  lwl         $v0, 0x33($sp)
    ctx->pc = 0x1b7c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_1b7c20:
    // 0x1b7c20: 0x9ba20030  lwr         $v0, 0x30($sp)
    ctx->pc = 0x1b7c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_1b7c24:
    // 0x1b7c24: 0xaba20023  swl         $v0, 0x23($sp)
    ctx->pc = 0x1b7c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1b7c28:
    // 0x1b7c28: 0xbba20020  swr         $v0, 0x20($sp)
    ctx->pc = 0x1b7c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1b7c2c:
    // 0x1b7c2c: 0xc085cec  jal         func_2173B0
label_1b7c30:
    if (ctx->pc == 0x1B7C30u) {
        ctx->pc = 0x1B7C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C2Cu;
        // 0x1b7c30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7C34u;
        goto label_1b7c34;
    }
    ctx->pc = 0x1B7C2Cu;
    SET_GPR_U32(ctx, 31, 0x1B7C34u);
    ctx->pc = 0x1B7C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C2Cu;
    // 0x1b7c30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1B7C2Cu, 0x1B7C34u)) {
        return;
    }
    ctx->pc = 0x1B7C34u;
label_1b7c34:
    // 0x1b7c34: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1b7c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1b7c38:
    // 0x1b7c38: 0x2467cd70  addiu       $a3, $v1, -0x3290
    ctx->pc = 0x1b7c38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954352));
label_1b7c3c:
    // 0x1b7c3c: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x1b7c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_1b7c40:
    // 0x1b7c40: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x1b7c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_1b7c44:
    // 0x1b7c44: 0xaba40033  swl         $a0, 0x33($sp)
    ctx->pc = 0x1b7c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1b7c48:
    // 0x1b7c48: 0xbba40030  swr         $a0, 0x30($sp)
    ctx->pc = 0x1b7c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1b7c4c:
    // 0x1b7c4c: 0xae82026c  sw          $v0, 0x26C($s4)
    ctx->pc = 0x1b7c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 620), GPR_U32(ctx, 2));
label_1b7c50:
    // 0x1b7c50: 0x93a30023  lbu         $v1, 0x23($sp)
    ctx->pc = 0x1b7c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
label_1b7c54:
    // 0x1b7c54: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1b7c58:
    if (ctx->pc == 0x1B7C58u) {
        ctx->pc = 0x1B7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C54u;
        // 0x1b7c58: 0xa3a30033  sb          $v1, 0x33($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 51), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7C5Cu;
        goto label_1b7c5c;
    }
    ctx->pc = 0x1B7C54u;
    {
        const bool branch_taken_0x1b7c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C54u;
        // 0x1b7c58: 0xa3a30033  sb          $v1, 0x33($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 51), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c54) {
            ctx->pc = 0x1B7C9Cu;
            goto label_1b7c9c;
        }
    }
    ctx->pc = 0x1B7C5Cu;
label_1b7c5c:
    // 0x1b7c5c: 0x8e8602a4  lw          $a2, 0x2A4($s4)
    ctx->pc = 0x1b7c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 676)));
label_1b7c60:
    // 0x1b7c60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b7c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7c64:
    // 0x1b7c64: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b7c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b7c68:
    // 0x1b7c68: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b7c68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b7c6c:
    // 0x1b7c6c: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b7c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b7c70:
    // 0x1b7c70: 0x60f809  jalr        $v1
label_1b7c74:
    if (ctx->pc == 0x1B7C74u) {
        ctx->pc = 0x1B7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C70u;
        // 0x1b7c74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7C78u;
        goto label_1b7c78;
    }
    ctx->pc = 0x1B7C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B7C78u);
        ctx->pc = 0x1B7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C70u;
        // 0x1b7c74: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7C70u, 0x1B7C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7C78u;
label_1b7c78:
    // 0x1b7c78: 0x8e8602a4  lw          $a2, 0x2A4($s4)
    ctx->pc = 0x1b7c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 676)));
label_1b7c7c:
    // 0x1b7c7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b7c80:
    // 0x1b7c80: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b7c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b7c84:
    // 0x1b7c84: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1b7c84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1b7c88:
    // 0x1b7c88: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1b7c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1b7c8c:
    // 0x1b7c8c: 0x60f809  jalr        $v1
label_1b7c90:
    if (ctx->pc == 0x1B7C90u) {
        ctx->pc = 0x1B7C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C8Cu;
        // 0x1b7c90: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7C94u;
        goto label_1b7c94;
    }
    ctx->pc = 0x1B7C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B7C94u);
        ctx->pc = 0x1B7C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C8Cu;
        // 0x1b7c90: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7C8Cu, 0x1B7C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7C94u;
label_1b7c94:
    // 0x1b7c94: 0x1000000e  b           . + 4 + (0xE << 2)
label_1b7c98:
    if (ctx->pc == 0x1B7C98u) {
        ctx->pc = 0x1B7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C94u;
        // 0x1b7c98: 0x8e820270  lw          $v0, 0x270($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7C9Cu;
        goto label_1b7c9c;
    }
    ctx->pc = 0x1B7C94u;
    {
        const bool branch_taken_0x1b7c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C94u;
        // 0x1b7c98: 0x8e820270  lw          $v0, 0x270($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c94) {
            ctx->pc = 0x1B7CD0u;
            goto label_1b7cd0;
        }
    }
    ctx->pc = 0x1B7C9Cu;
label_1b7c9c:
    // 0x1b7c9c: 0x8e8602a4  lw          $a2, 0x2A4($s4)
    ctx->pc = 0x1b7c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 676)));
label_1b7ca0:
    // 0x1b7ca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7ca4:
    // 0x1b7ca4: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b7ca8:
    // 0x1b7ca8: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b7ca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b7cac:
    // 0x1b7cac: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b7cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b7cb0:
    // 0x1b7cb0: 0x60f809  jalr        $v1
label_1b7cb4:
    if (ctx->pc == 0x1B7CB4u) {
        ctx->pc = 0x1B7CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CB0u;
        // 0x1b7cb4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7CB8u;
        goto label_1b7cb8;
    }
    ctx->pc = 0x1B7CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B7CB8u);
        ctx->pc = 0x1B7CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CB0u;
        // 0x1b7cb4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7CB0u, 0x1B7CB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7CB8u;
label_1b7cb8:
    // 0x1b7cb8: 0x8e8202a4  lw          $v0, 0x2A4($s4)
    ctx->pc = 0x1b7cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 676)));
label_1b7cbc:
    // 0x1b7cbc: 0xc68002d8  lwc1        $f0, 0x2D8($s4)
    ctx->pc = 0x1b7cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7cc0:
    // 0x1b7cc0: 0xae8002bc  sw          $zero, 0x2BC($s4)
    ctx->pc = 0x1b7cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 700), GPR_U32(ctx, 0));
label_1b7cc4:
    // 0x1b7cc4: 0xae8002c4  sw          $zero, 0x2C4($s4)
    ctx->pc = 0x1b7cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 708), GPR_U32(ctx, 0));
label_1b7cc8:
    // 0x1b7cc8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1b7cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b7ccc:
    // 0x1b7ccc: 0x8e820270  lw          $v0, 0x270($s4)
    ctx->pc = 0x1b7cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 624)));
label_1b7cd0:
    // 0x1b7cd0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1b7cd4:
    if (ctx->pc == 0x1B7CD4u) {
        ctx->pc = 0x1B7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CD0u;
        // 0x1b7cd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7CD8u;
        goto label_1b7cd8;
    }
    ctx->pc = 0x1B7CD0u;
    {
        const bool branch_taken_0x1b7cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CD0u;
        // 0x1b7cd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7cd0) {
            ctx->pc = 0x1B7D14u;
            goto label_1b7d14;
        }
    }
    ctx->pc = 0x1B7CD8u;
label_1b7cd8:
    // 0x1b7cd8: 0x8e8602a8  lw          $a2, 0x2A8($s4)
    ctx->pc = 0x1b7cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 680)));
label_1b7cdc:
    // 0x1b7cdc: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b7cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b7ce0:
    // 0x1b7ce0: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b7ce0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b7ce4:
    // 0x1b7ce4: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b7ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b7ce8:
    // 0x1b7ce8: 0x60f809  jalr        $v1
label_1b7cec:
    if (ctx->pc == 0x1B7CECu) {
        ctx->pc = 0x1B7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CE8u;
        // 0x1b7cec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7CF0u;
        goto label_1b7cf0;
    }
    ctx->pc = 0x1B7CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B7CF0u);
        ctx->pc = 0x1B7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CE8u;
        // 0x1b7cec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7CE8u, 0x1B7CF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7CF0u;
label_1b7cf0:
    // 0x1b7cf0: 0x8e8602a8  lw          $a2, 0x2A8($s4)
    ctx->pc = 0x1b7cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 680)));
label_1b7cf4:
    // 0x1b7cf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b7cf8:
    // 0x1b7cf8: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b7cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b7cfc:
    // 0x1b7cfc: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x1b7cfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_1b7d00:
    // 0x1b7d00: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x1b7d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1b7d04:
    // 0x1b7d04: 0x60f809  jalr        $v1
label_1b7d08:
    if (ctx->pc == 0x1B7D08u) {
        ctx->pc = 0x1B7D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D04u;
        // 0x1b7d08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7D0Cu;
        goto label_1b7d0c;
    }
    ctx->pc = 0x1B7D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B7D0Cu);
        ctx->pc = 0x1B7D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D04u;
        // 0x1b7d08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7D04u, 0x1B7D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7D0Cu;
label_1b7d0c:
    // 0x1b7d0c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1b7d10:
    if (ctx->pc == 0x1B7D10u) {
        ctx->pc = 0x1B7D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D0Cu;
        // 0x1b7d10: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7D14u;
        goto label_1b7d14;
    }
    ctx->pc = 0x1B7D0Cu;
    {
        const bool branch_taken_0x1b7d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D0Cu;
        // 0x1b7d10: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d0c) {
            ctx->pc = 0x1B7D48u;
            goto label_1b7d48;
        }
    }
    ctx->pc = 0x1B7D14u;
label_1b7d14:
    // 0x1b7d14: 0x8e8602a8  lw          $a2, 0x2A8($s4)
    ctx->pc = 0x1b7d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 680)));
label_1b7d18:
    // 0x1b7d18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7d1c:
    // 0x1b7d1c: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b7d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b7d20:
    // 0x1b7d20: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1b7d20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1b7d24:
    // 0x1b7d24: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1b7d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1b7d28:
    // 0x1b7d28: 0x60f809  jalr        $v1
label_1b7d2c:
    if (ctx->pc == 0x1B7D2Cu) {
        ctx->pc = 0x1B7D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D28u;
        // 0x1b7d2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7D30u;
        goto label_1b7d30;
    }
    ctx->pc = 0x1B7D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B7D30u);
        ctx->pc = 0x1B7D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D28u;
        // 0x1b7d2c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7D28u, 0x1B7D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7D30u;
label_1b7d30:
    // 0x1b7d30: 0xc68002d4  lwc1        $f0, 0x2D4($s4)
    ctx->pc = 0x1b7d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b7d34:
    // 0x1b7d34: 0x8e8202a8  lw          $v0, 0x2A8($s4)
    ctx->pc = 0x1b7d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 680)));
label_1b7d38:
    // 0x1b7d38: 0xae8002b8  sw          $zero, 0x2B8($s4)
    ctx->pc = 0x1b7d38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 696), GPR_U32(ctx, 0));
label_1b7d3c:
    // 0x1b7d3c: 0xae8002c0  sw          $zero, 0x2C0($s4)
    ctx->pc = 0x1b7d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 704), GPR_U32(ctx, 0));
label_1b7d40:
    // 0x1b7d40: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1b7d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b7d44:
    // 0x1b7d44: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x1b7d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1b7d48:
    // 0x1b7d48: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x1b7d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1b7d4c:
    // 0x1b7d4c: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x1b7d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1b7d50:
    // 0x1b7d50: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x1b7d50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1b7d54:
    // 0x1b7d54: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x1b7d54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1b7d58:
    // 0x1b7d58: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x1b7d58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1b7d5c:
    // 0x1b7d5c: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1b7d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_1b7d60:
    // 0x1b7d60: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x1b7d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b7d64:
    // 0x1b7d64: 0x3e00008  jr          $ra
label_1b7d68:
    if (ctx->pc == 0x1B7D68u) {
        ctx->pc = 0x1B7D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D64u;
        // 0x1b7d68: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7D6Cu;
        goto label_1b7d6c;
    }
    ctx->pc = 0x1B7D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D64u;
        // 0x1b7d68: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7D6Cu;
label_1b7d6c:
    // 0x1b7d6c: 0x0  nop
    ctx->pc = 0x1b7d6cu;
    // NOP
    ctx->pc = 0x1b7d70u;
}
