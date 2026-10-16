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

// Function: sub_001BF938
// Address: 0x1bf938 - 0x1bfba0
void sub_001BF938_0x1bf938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF938_0x1bf938");
#endif

    switch (ctx->pc) {
        case 0x1bf938u: goto label_1bf938;
        case 0x1bf93cu: goto label_1bf93c;
        case 0x1bf940u: goto label_1bf940;
        case 0x1bf944u: goto label_1bf944;
        case 0x1bf948u: goto label_1bf948;
        case 0x1bf94cu: goto label_1bf94c;
        case 0x1bf950u: goto label_1bf950;
        case 0x1bf954u: goto label_1bf954;
        case 0x1bf958u: goto label_1bf958;
        case 0x1bf95cu: goto label_1bf95c;
        case 0x1bf960u: goto label_1bf960;
        case 0x1bf964u: goto label_1bf964;
        case 0x1bf968u: goto label_1bf968;
        case 0x1bf96cu: goto label_1bf96c;
        case 0x1bf970u: goto label_1bf970;
        case 0x1bf974u: goto label_1bf974;
        case 0x1bf978u: goto label_1bf978;
        case 0x1bf97cu: goto label_1bf97c;
        case 0x1bf980u: goto label_1bf980;
        case 0x1bf984u: goto label_1bf984;
        case 0x1bf988u: goto label_1bf988;
        case 0x1bf98cu: goto label_1bf98c;
        case 0x1bf990u: goto label_1bf990;
        case 0x1bf994u: goto label_1bf994;
        case 0x1bf998u: goto label_1bf998;
        case 0x1bf99cu: goto label_1bf99c;
        case 0x1bf9a0u: goto label_1bf9a0;
        case 0x1bf9a4u: goto label_1bf9a4;
        case 0x1bf9a8u: goto label_1bf9a8;
        case 0x1bf9acu: goto label_1bf9ac;
        case 0x1bf9b0u: goto label_1bf9b0;
        case 0x1bf9b4u: goto label_1bf9b4;
        case 0x1bf9b8u: goto label_1bf9b8;
        case 0x1bf9bcu: goto label_1bf9bc;
        case 0x1bf9c0u: goto label_1bf9c0;
        case 0x1bf9c4u: goto label_1bf9c4;
        case 0x1bf9c8u: goto label_1bf9c8;
        case 0x1bf9ccu: goto label_1bf9cc;
        case 0x1bf9d0u: goto label_1bf9d0;
        case 0x1bf9d4u: goto label_1bf9d4;
        case 0x1bf9d8u: goto label_1bf9d8;
        case 0x1bf9dcu: goto label_1bf9dc;
        case 0x1bf9e0u: goto label_1bf9e0;
        case 0x1bf9e4u: goto label_1bf9e4;
        case 0x1bf9e8u: goto label_1bf9e8;
        case 0x1bf9ecu: goto label_1bf9ec;
        case 0x1bf9f0u: goto label_1bf9f0;
        case 0x1bf9f4u: goto label_1bf9f4;
        case 0x1bf9f8u: goto label_1bf9f8;
        case 0x1bf9fcu: goto label_1bf9fc;
        case 0x1bfa00u: goto label_1bfa00;
        case 0x1bfa04u: goto label_1bfa04;
        case 0x1bfa08u: goto label_1bfa08;
        case 0x1bfa0cu: goto label_1bfa0c;
        case 0x1bfa10u: goto label_1bfa10;
        case 0x1bfa14u: goto label_1bfa14;
        case 0x1bfa18u: goto label_1bfa18;
        case 0x1bfa1cu: goto label_1bfa1c;
        case 0x1bfa20u: goto label_1bfa20;
        case 0x1bfa24u: goto label_1bfa24;
        case 0x1bfa28u: goto label_1bfa28;
        case 0x1bfa2cu: goto label_1bfa2c;
        case 0x1bfa30u: goto label_1bfa30;
        case 0x1bfa34u: goto label_1bfa34;
        case 0x1bfa38u: goto label_1bfa38;
        case 0x1bfa3cu: goto label_1bfa3c;
        case 0x1bfa40u: goto label_1bfa40;
        case 0x1bfa44u: goto label_1bfa44;
        case 0x1bfa48u: goto label_1bfa48;
        case 0x1bfa4cu: goto label_1bfa4c;
        case 0x1bfa50u: goto label_1bfa50;
        case 0x1bfa54u: goto label_1bfa54;
        case 0x1bfa58u: goto label_1bfa58;
        case 0x1bfa5cu: goto label_1bfa5c;
        case 0x1bfa60u: goto label_1bfa60;
        case 0x1bfa64u: goto label_1bfa64;
        case 0x1bfa68u: goto label_1bfa68;
        case 0x1bfa6cu: goto label_1bfa6c;
        case 0x1bfa70u: goto label_1bfa70;
        case 0x1bfa74u: goto label_1bfa74;
        case 0x1bfa78u: goto label_1bfa78;
        case 0x1bfa7cu: goto label_1bfa7c;
        case 0x1bfa80u: goto label_1bfa80;
        case 0x1bfa84u: goto label_1bfa84;
        case 0x1bfa88u: goto label_1bfa88;
        case 0x1bfa8cu: goto label_1bfa8c;
        case 0x1bfa90u: goto label_1bfa90;
        case 0x1bfa94u: goto label_1bfa94;
        case 0x1bfa98u: goto label_1bfa98;
        case 0x1bfa9cu: goto label_1bfa9c;
        case 0x1bfaa0u: goto label_1bfaa0;
        case 0x1bfaa4u: goto label_1bfaa4;
        case 0x1bfaa8u: goto label_1bfaa8;
        case 0x1bfaacu: goto label_1bfaac;
        case 0x1bfab0u: goto label_1bfab0;
        case 0x1bfab4u: goto label_1bfab4;
        case 0x1bfab8u: goto label_1bfab8;
        case 0x1bfabcu: goto label_1bfabc;
        case 0x1bfac0u: goto label_1bfac0;
        case 0x1bfac4u: goto label_1bfac4;
        case 0x1bfac8u: goto label_1bfac8;
        case 0x1bfaccu: goto label_1bfacc;
        case 0x1bfad0u: goto label_1bfad0;
        case 0x1bfad4u: goto label_1bfad4;
        case 0x1bfad8u: goto label_1bfad8;
        case 0x1bfadcu: goto label_1bfadc;
        case 0x1bfae0u: goto label_1bfae0;
        case 0x1bfae4u: goto label_1bfae4;
        case 0x1bfae8u: goto label_1bfae8;
        case 0x1bfaecu: goto label_1bfaec;
        case 0x1bfaf0u: goto label_1bfaf0;
        case 0x1bfaf4u: goto label_1bfaf4;
        case 0x1bfaf8u: goto label_1bfaf8;
        case 0x1bfafcu: goto label_1bfafc;
        case 0x1bfb00u: goto label_1bfb00;
        case 0x1bfb04u: goto label_1bfb04;
        case 0x1bfb08u: goto label_1bfb08;
        case 0x1bfb0cu: goto label_1bfb0c;
        case 0x1bfb10u: goto label_1bfb10;
        case 0x1bfb14u: goto label_1bfb14;
        case 0x1bfb18u: goto label_1bfb18;
        case 0x1bfb1cu: goto label_1bfb1c;
        case 0x1bfb20u: goto label_1bfb20;
        case 0x1bfb24u: goto label_1bfb24;
        case 0x1bfb28u: goto label_1bfb28;
        case 0x1bfb2cu: goto label_1bfb2c;
        case 0x1bfb30u: goto label_1bfb30;
        case 0x1bfb34u: goto label_1bfb34;
        case 0x1bfb38u: goto label_1bfb38;
        case 0x1bfb3cu: goto label_1bfb3c;
        case 0x1bfb40u: goto label_1bfb40;
        case 0x1bfb44u: goto label_1bfb44;
        case 0x1bfb48u: goto label_1bfb48;
        case 0x1bfb4cu: goto label_1bfb4c;
        case 0x1bfb50u: goto label_1bfb50;
        case 0x1bfb54u: goto label_1bfb54;
        case 0x1bfb58u: goto label_1bfb58;
        case 0x1bfb5cu: goto label_1bfb5c;
        case 0x1bfb60u: goto label_1bfb60;
        case 0x1bfb64u: goto label_1bfb64;
        case 0x1bfb68u: goto label_1bfb68;
        case 0x1bfb6cu: goto label_1bfb6c;
        case 0x1bfb70u: goto label_1bfb70;
        case 0x1bfb74u: goto label_1bfb74;
        case 0x1bfb78u: goto label_1bfb78;
        case 0x1bfb7cu: goto label_1bfb7c;
        case 0x1bfb80u: goto label_1bfb80;
        case 0x1bfb84u: goto label_1bfb84;
        case 0x1bfb88u: goto label_1bfb88;
        case 0x1bfb8cu: goto label_1bfb8c;
        case 0x1bfb90u: goto label_1bfb90;
        case 0x1bfb94u: goto label_1bfb94;
        case 0x1bfb98u: goto label_1bfb98;
        case 0x1bfb9cu: goto label_1bfb9c;
        default: break;
    }

    ctx->pc = 0x1bf938u;

label_1bf938:
    // 0x1bf938: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1bf938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1bf93c:
    // 0x1bf93c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1bf93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1bf940:
    // 0x1bf940: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1bf940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1bf944:
    // 0x1bf944: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bf944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bf948:
    // 0x1bf948: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bf948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf94c:
    // 0x1bf94c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1bf94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1bf950:
    // 0x1bf950: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1bf950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1bf954:
    // 0x1bf954: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bf954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1bf958:
    // 0x1bf958: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x1bf958u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1bf95c:
    // 0x1bf95c: 0xc06bc10  jal         func_1AF040
label_1bf960:
    if (ctx->pc == 0x1BF960u) {
        ctx->pc = 0x1BF960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF95Cu;
        // 0x1bf960: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF964u;
        goto label_1bf964;
    }
    ctx->pc = 0x1BF95Cu;
    SET_GPR_U32(ctx, 31, 0x1BF964u);
    ctx->pc = 0x1BF960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF95Cu;
    // 0x1bf960: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1BF95Cu, 0x1BF964u)) {
        return;
    }
    ctx->pc = 0x1BF964u;
label_1bf964:
    // 0x1bf964: 0x52000085  beql        $s0, $zero, . + 4 + (0x85 << 2)
label_1bf968:
    if (ctx->pc == 0x1BF968u) {
        ctx->pc = 0x1BF968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF964u;
        // 0x1bf968: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF96Cu;
        goto label_1bf96c;
    }
    ctx->pc = 0x1BF964u;
    {
        const bool branch_taken_0x1bf964 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf964) {
            ctx->pc = 0x1BF968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF964u;
            // 0x1bf968: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFB7Cu;
            goto label_1bfb7c;
        }
    }
    ctx->pc = 0x1BF96Cu;
label_1bf96c:
    // 0x1bf96c: 0x8e22030c  lw          $v0, 0x30C($s1)
    ctx->pc = 0x1bf96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
label_1bf970:
    // 0x1bf970: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
label_1bf974:
    if (ctx->pc == 0x1BF974u) {
        ctx->pc = 0x1BF974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF970u;
        // 0x1bf974: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF978u;
        goto label_1bf978;
    }
    ctx->pc = 0x1BF970u;
    {
        const bool branch_taken_0x1bf970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF970u;
        // 0x1bf974: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf970) {
            ctx->pc = 0x1BFB78u;
            goto label_1bfb78;
        }
    }
    ctx->pc = 0x1BF978u;
label_1bf978:
    // 0x1bf978: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x1bf978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bf97c:
    // 0x1bf97c: 0x24520fd8  addiu       $s2, $v0, 0xFD8
    ctx->pc = 0x1bf97cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
label_1bf980:
    // 0x1bf980: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1bf980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf984:
    // 0x1bf984: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bf984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bf988:
    // 0x1bf988: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1bf988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1bf98c:
    // 0x1bf98c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1bf98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bf990:
    // 0x1bf990: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1bf990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1bf994:
    // 0x1bf994: 0x0  nop
    ctx->pc = 0x1bf994u;
    // NOP
label_1bf998:
    // 0x1bf998: 0x0  nop
    ctx->pc = 0x1bf998u;
    // NOP
label_1bf99c:
    // 0x1bf99c: 0x4600ad03  div.s       $f20, $f21, $f0
    ctx->pc = 0x1bf99cu;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
label_1bf9a0:
    // 0x1bf9a0: 0x40f809  jalr        $v0
label_1bf9a4:
    if (ctx->pc == 0x1BF9A4u) {
        ctx->pc = 0x1BF9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9A0u;
        // 0x1bf9a4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9A8u;
        goto label_1bf9a8;
    }
    ctx->pc = 0x1BF9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF9A8u);
        ctx->pc = 0x1BF9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9A0u;
        // 0x1bf9a4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF9A0u, 0x1BF9A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF9A8u;
label_1bf9a8:
    // 0x1bf9a8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1bf9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1bf9ac:
    // 0x1bf9ac: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1bf9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1bf9b0:
    // 0x1bf9b0: 0x40f809  jalr        $v0
label_1bf9b4:
    if (ctx->pc == 0x1BF9B4u) {
        ctx->pc = 0x1BF9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9B0u;
        // 0x1bf9b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9B8u;
        goto label_1bf9b8;
    }
    ctx->pc = 0x1BF9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF9B8u);
        ctx->pc = 0x1BF9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9B0u;
        // 0x1bf9b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF9B0u, 0x1BF9B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF9B8u;
label_1bf9b8:
    // 0x1bf9b8: 0x8e230274  lw          $v1, 0x274($s1)
    ctx->pc = 0x1bf9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_1bf9bc:
    // 0x1bf9bc: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_1bf9c0:
    if (ctx->pc == 0x1BF9C0u) {
        ctx->pc = 0x1BF9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9BCu;
        // 0x1bf9c0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9C4u;
        goto label_1bf9c4;
    }
    ctx->pc = 0x1BF9BCu;
    {
        const bool branch_taken_0x1bf9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9BCu;
        // 0x1bf9c0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf9bc) {
            ctx->pc = 0x1BFAA8u;
            goto label_1bfaa8;
        }
    }
    ctx->pc = 0x1BF9C4u;
label_1bf9c4:
    // 0x1bf9c4: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x1bf9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
label_1bf9c8:
    // 0x1bf9c8: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x1bf9c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
label_1bf9cc:
    // 0x1bf9cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bf9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bf9d0:
    // 0x1bf9d0: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x1bf9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
label_1bf9d4:
    // 0x1bf9d4: 0x8c640198  lw          $a0, 0x198($v1)
    ctx->pc = 0x1bf9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
label_1bf9d8:
    // 0x1bf9d8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1bf9dc:
    if (ctx->pc == 0x1BF9DCu) {
        ctx->pc = 0x1BF9E0u;
        goto label_1bf9e0;
    }
    ctx->pc = 0x1BF9D8u;
    {
        const bool branch_taken_0x1bf9d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf9d8) {
            ctx->pc = 0x1BF9ECu;
            goto label_1bf9ec;
        }
    }
    ctx->pc = 0x1BF9E0u;
label_1bf9e0:
    // 0x1bf9e0: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x1bf9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
label_1bf9e4:
    // 0x1bf9e4: 0x3421924a  ori         $at, $at, 0x924A
    ctx->pc = 0x1bf9e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37450);
label_1bf9e8:
    // 0x1bf9e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bf9e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bf9ec:
    // 0x1bf9ec: 0x3c0144f0  lui         $at, 0x44F0
    ctx->pc = 0x1bf9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17648 << 16));
label_1bf9f0:
    // 0x1bf9f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bf9f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bf9f4:
    // 0x1bf9f4: 0xc62d0008  lwc1        $f13, 0x8($s1)
    ctx->pc = 0x1bf9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bf9f8:
    // 0x1bf9f8: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1bf9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bf9fc:
    // 0x1bf9fc: 0x0  nop
    ctx->pc = 0x1bf9fcu;
    // NOP
label_1bfa00:
    // 0x1bfa00: 0x0  nop
    ctx->pc = 0x1bfa00u;
    // NOP
label_1bfa04:
    // 0x1bfa04: 0x46016b43  div.s       $f13, $f13, $f1
    ctx->pc = 0x1bfa04u;
    ctx->f[13] = FPU_DIV_S(ctx, ctx->f[13], ctx->f[1]);
label_1bfa08:
    // 0x1bfa08: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1bfa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bfa0c:
    // 0x1bfa0c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1bfa0cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_1bfa10:
    // 0x1bfa10: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1bfa10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1bfa14:
    // 0x1bfa14: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1bfa14u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_1bfa18:
    // 0x1bfa18: 0x460d6303  div.s       $f12, $f12, $f13
    ctx->pc = 0x1bfa18u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[13]);
label_1bfa1c:
    // 0x1bfa1c: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x1bfa1cu;
    ctx->f[13] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[13]);
label_1bfa20:
    // 0x1bfa20: 0x460273c3  div.s       $f15, $f14, $f2
    ctx->pc = 0x1bfa20u;
    ctx->f[15] = FPU_DIV_S(ctx, ctx->f[14], ctx->f[2]);
label_1bfa24:
    // 0x1bfa24: 0xc065706  jal         func_195C18
label_1bfa28:
    if (ctx->pc == 0x1BFA28u) {
        ctx->pc = 0x1BFA2Cu;
        goto label_1bfa2c;
    }
    ctx->pc = 0x1BFA24u;
    SET_GPR_U32(ctx, 31, 0x1BFA2Cu);
    ctx->pc = 0x195C18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x195C18u, 0x1BFA24u, 0x1BFA2Cu)) {
        return;
    }
    ctx->pc = 0x1BFA2Cu;
label_1bfa2c:
    // 0x1bfa2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bfa30:
    // 0x1bfa30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bfa30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bfa34:
    // 0x1bfa34: 0xc07060e  jal         func_1C1838
label_1bfa38:
    if (ctx->pc == 0x1BFA38u) {
        ctx->pc = 0x1BFA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA34u;
        // 0x1bfa38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA3Cu;
        goto label_1bfa3c;
    }
    ctx->pc = 0x1BFA34u;
    SET_GPR_U32(ctx, 31, 0x1BFA3Cu);
    ctx->pc = 0x1BFA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA34u;
    // 0x1bfa38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C1838u, 0x1BFA34u, 0x1BFA3Cu)) {
        return;
    }
    ctx->pc = 0x1BFA3Cu;
label_1bfa3c:
    // 0x1bfa3c: 0x8e230260  lw          $v1, 0x260($s1)
    ctx->pc = 0x1bfa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_1bfa40:
    // 0x1bfa40: 0x8e220268  lw          $v0, 0x268($s1)
    ctx->pc = 0x1bfa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 616)));
label_1bfa44:
    // 0x1bfa44: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_1bfa48:
    if (ctx->pc == 0x1BFA48u) {
        ctx->pc = 0x1BFA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA44u;
        // 0x1bfa48: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA4Cu;
        goto label_1bfa4c;
    }
    ctx->pc = 0x1BFA44u;
    {
        const bool branch_taken_0x1bfa44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bfa44) {
            ctx->pc = 0x1BFA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFA44u;
            // 0x1bfa48: 0x8e22026c  lw          $v0, 0x26C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFA68u;
            goto label_1bfa68;
        }
    }
    ctx->pc = 0x1BFA4Cu;
label_1bfa4c:
    // 0x1bfa4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bfa4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bfa50:
    // 0x1bfa50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bfa54:
    // 0x1bfa54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bfa54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1bfa58:
    // 0x1bfa58: 0xc070662  jal         func_1C1988
label_1bfa5c:
    if (ctx->pc == 0x1BFA5Cu) {
        ctx->pc = 0x1BFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA58u;
        // 0x1bfa5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA60u;
        goto label_1bfa60;
    }
    ctx->pc = 0x1BFA58u;
    SET_GPR_U32(ctx, 31, 0x1BFA60u);
    ctx->pc = 0x1BFA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA58u;
    // 0x1bfa5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C1988u, 0x1BFA58u, 0x1BFA60u)) {
        return;
    }
    ctx->pc = 0x1BFA60u;
label_1bfa60:
    // 0x1bfa60: 0x1000000b  b           . + 4 + (0xB << 2)
label_1bfa64:
    if (ctx->pc == 0x1BFA64u) {
        ctx->pc = 0x1BFA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA60u;
        // 0x1bfa64: 0x922202a3  lbu         $v0, 0x2A3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 675)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA68u;
        goto label_1bfa68;
    }
    ctx->pc = 0x1BFA60u;
    {
        const bool branch_taken_0x1bfa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA60u;
        // 0x1bfa64: 0x922202a3  lbu         $v0, 0x2A3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 675)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa60) {
            ctx->pc = 0x1BFA90u;
            goto label_1bfa90;
        }
    }
    ctx->pc = 0x1BFA68u;
label_1bfa68:
    // 0x1bfa68: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
label_1bfa6c:
    if (ctx->pc == 0x1BFA6Cu) {
        ctx->pc = 0x1BFA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA68u;
        // 0x1bfa6c: 0x922202a3  lbu         $v0, 0x2A3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 675)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA70u;
        goto label_1bfa70;
    }
    ctx->pc = 0x1BFA68u;
    {
        const bool branch_taken_0x1bfa68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bfa68) {
            ctx->pc = 0x1BFA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFA68u;
            // 0x1bfa6c: 0x922202a3  lbu         $v0, 0x2A3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 675)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFA90u;
            goto label_1bfa90;
        }
    }
    ctx->pc = 0x1BFA70u;
label_1bfa70:
    // 0x1bfa70: 0x8e220270  lw          $v0, 0x270($s1)
    ctx->pc = 0x1bfa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_1bfa74:
    // 0x1bfa74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1bfa78:
    if (ctx->pc == 0x1BFA78u) {
        ctx->pc = 0x1BFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA74u;
        // 0x1bfa78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA7Cu;
        goto label_1bfa7c;
    }
    ctx->pc = 0x1BFA74u;
    {
        const bool branch_taken_0x1bfa74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA74u;
        // 0x1bfa78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa74) {
            ctx->pc = 0x1BFA8Cu;
            goto label_1bfa8c;
        }
    }
    ctx->pc = 0x1BFA7Cu;
label_1bfa7c:
    // 0x1bfa7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bfa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bfa80:
    // 0x1bfa80: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bfa80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1bfa84:
    // 0x1bfa84: 0xc070662  jal         func_1C1988
label_1bfa88:
    if (ctx->pc == 0x1BFA88u) {
        ctx->pc = 0x1BFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA84u;
        // 0x1bfa88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA8Cu;
        goto label_1bfa8c;
    }
    ctx->pc = 0x1BFA84u;
    SET_GPR_U32(ctx, 31, 0x1BFA8Cu);
    ctx->pc = 0x1BFA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA84u;
    // 0x1bfa88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C1988u, 0x1BFA84u, 0x1BFA8Cu)) {
        return;
    }
    ctx->pc = 0x1BFA8Cu;
label_1bfa8c:
    // 0x1bfa8c: 0x922202a3  lbu         $v0, 0x2A3($s1)
    ctx->pc = 0x1bfa8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 675)));
label_1bfa90:
    // 0x1bfa90: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1bfa94:
    if (ctx->pc == 0x1BFA94u) {
        ctx->pc = 0x1BFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA90u;
        // 0x1bfa94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA98u;
        goto label_1bfa98;
    }
    ctx->pc = 0x1BFA90u;
    {
        const bool branch_taken_0x1bfa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA90u;
        // 0x1bfa94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa90) {
            ctx->pc = 0x1BFB64u;
            goto label_1bfb64;
        }
    }
    ctx->pc = 0x1BFA98u;
label_1bfa98:
    // 0x1bfa98: 0xc06fee8  jal         func_1BFBA0
label_1bfa9c:
    if (ctx->pc == 0x1BFA9Cu) {
        ctx->pc = 0x1BFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA98u;
        // 0x1bfa9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFAA0u;
        goto label_1bfaa0;
    }
    ctx->pc = 0x1BFA98u;
    SET_GPR_U32(ctx, 31, 0x1BFAA0u);
    ctx->pc = 0x1BFA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA98u;
    // 0x1bfa9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFBA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BFBA0u, 0x1BFA98u, 0x1BFAA0u)) {
        return;
    }
    ctx->pc = 0x1BFAA0u;
label_1bfaa0:
    // 0x1bfaa0: 0x10000031  b           . + 4 + (0x31 << 2)
label_1bfaa4:
    if (ctx->pc == 0x1BFAA4u) {
        ctx->pc = 0x1BFAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAA0u;
        // 0x1bfaa4: 0x26630fd8  addiu       $v1, $s3, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFAA8u;
        goto label_1bfaa8;
    }
    ctx->pc = 0x1BFAA0u;
    {
        const bool branch_taken_0x1bfaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAA0u;
        // 0x1bfaa4: 0x26630fd8  addiu       $v1, $s3, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfaa0) {
            ctx->pc = 0x1BFB68u;
            goto label_1bfb68;
        }
    }
    ctx->pc = 0x1BFAA8u;
label_1bfaa8:
    // 0x1bfaa8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1bfaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1bfaac:
    // 0x1bfaac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bfaacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfab0:
    // 0x1bfab0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bfab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfab4:
    // 0x1bfab4: 0x40f809  jalr        $v0
label_1bfab8:
    if (ctx->pc == 0x1BFAB8u) {
        ctx->pc = 0x1BFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAB4u;
        // 0x1bfab8: 0x26300150  addiu       $s0, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFABCu;
        goto label_1bfabc;
    }
    ctx->pc = 0x1BFAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFABCu);
        ctx->pc = 0x1BFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAB4u;
        // 0x1bfab8: 0x26300150  addiu       $s0, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFAB4u, 0x1BFABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BFABCu;
label_1bfabc:
    // 0x1bfabc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bfabcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bfac0:
    // 0x1bfac0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1bfac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1bfac4:
    // 0x1bfac4: 0xc6500008  lwc1        $f16, 0x8($s2)
    ctx->pc = 0x1bfac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1bfac8:
    // 0x1bfac8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bfac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfacc:
    // 0x1bfacc: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1bfaccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
label_1bfad0:
    // 0x1bfad0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1bfad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1bfad4:
    // 0x1bfad4: 0x46006486  mov.s       $f18, $f12
    ctx->pc = 0x1bfad4u;
    ctx->f[18] = FPU_MOV_S(ctx->f[12]);
label_1bfad8:
    // 0x1bfad8: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x1bfad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
label_1bfadc:
    // 0x1bfadc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1bfadcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1bfae0:
    // 0x1bfae0: 0x460064c6  mov.s       $f19, $f12
    ctx->pc = 0x1bfae0u;
    ctx->f[19] = FPU_MOV_S(ctx->f[12]);
label_1bfae4:
    // 0x1bfae4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1bfae4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1bfae8:
    // 0x1bfae8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1bfae8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
label_1bfaec:
    // 0x1bfaec: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x1bfaecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1bfaf0:
    // 0x1bfaf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bfaf4:
    // 0x1bfaf4: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1bfaf4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1bfaf8:
    // 0x1bfaf8: 0xc06ce2a  jal         func_1B38A8
label_1bfafc:
    if (ctx->pc == 0x1BFAFCu) {
        ctx->pc = 0x1BFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAF8u;
        // 0x1bfafc: 0x24a5dd48  addiu       $a1, $a1, -0x22B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB00u;
        goto label_1bfb00;
    }
    ctx->pc = 0x1BFAF8u;
    SET_GPR_U32(ctx, 31, 0x1BFB00u);
    ctx->pc = 0x1BFAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFAF8u;
    // 0x1bfafc: 0x24a5dd48  addiu       $a1, $a1, -0x22B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1BFAF8u, 0x1BFB00u)) {
        return;
    }
    ctx->pc = 0x1BFB00u;
label_1bfb00:
    // 0x1bfb00: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1bfb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bfb04:
    // 0x1bfb04: 0xc06cff8  jal         func_1B3FE0
label_1bfb08:
    if (ctx->pc == 0x1BFB08u) {
        ctx->pc = 0x1BFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB04u;
        // 0x1bfb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB0Cu;
        goto label_1bfb0c;
    }
    ctx->pc = 0x1BFB04u;
    SET_GPR_U32(ctx, 31, 0x1BFB0Cu);
    ctx->pc = 0x1BFB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB04u;
    // 0x1bfb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1BFB04u, 0x1BFB0Cu)) {
        return;
    }
    ctx->pc = 0x1BFB0Cu;
label_1bfb0c:
    // 0x1bfb0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1bfb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1bfb10:
    // 0x1bfb10: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1bfb10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1bfb14:
    // 0x1bfb14: 0x2447dbf0  addiu       $a3, $v0, -0x2410
    ctx->pc = 0x1bfb14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958064));
label_1bfb18:
    // 0x1bfb18: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1bfb18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1bfb1c:
    // 0x1bfb1c: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1bfb1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1bfb20:
    // 0x1bfb20: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1bfb20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1bfb24:
    // 0x1bfb24: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1bfb24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1bfb28:
    // 0x1bfb28: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x1bfb28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bfb2c:
    // 0x1bfb2c: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x1bfb2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bfb30:
    // 0x1bfb30: 0xb3a5001f  sdl         $a1, 0x1F($sp)
    ctx->pc = 0x1bfb30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bfb34:
    // 0x1bfb34: 0xb7a50018  sdr         $a1, 0x18($sp)
    ctx->pc = 0x1bfb34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1bfb38:
    // 0x1bfb38: 0xc085ba8  jal         func_216EA0
label_1bfb3c:
    if (ctx->pc == 0x1BFB3Cu) {
        ctx->pc = 0x1BFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB38u;
        // 0x1bfb3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB40u;
        goto label_1bfb40;
    }
    ctx->pc = 0x1BFB38u;
    SET_GPR_U32(ctx, 31, 0x1BFB40u);
    ctx->pc = 0x1BFB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB38u;
    // 0x1bfb3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x1BFB38u, 0x1BFB40u)) {
        return;
    }
    ctx->pc = 0x1BFB40u;
label_1bfb40:
    // 0x1bfb40: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x1bfb40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_1bfb44:
    // 0x1bfb44: 0x8e25027c  lw          $a1, 0x27C($s1)
    ctx->pc = 0x1bfb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
label_1bfb48:
    // 0x1bfb48: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1bfb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1bfb4c:
    // 0x1bfb4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bfb4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bfb50:
    // 0x1bfb50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bfb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bfb54:
    // 0x1bfb54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bfb54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bfb58:
    // 0x1bfb58: 0x24e7dd40  addiu       $a3, $a3, -0x22C0
    ctx->pc = 0x1bfb58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958400));
label_1bfb5c:
    // 0x1bfb5c: 0xc085cec  jal         func_2173B0
label_1bfb60:
    if (ctx->pc == 0x1BFB60u) {
        ctx->pc = 0x1BFB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB5Cu;
        // 0x1bfb60: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB64u;
        goto label_1bfb64;
    }
    ctx->pc = 0x1BFB5Cu;
    SET_GPR_U32(ctx, 31, 0x1BFB64u);
    ctx->pc = 0x1BFB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB5Cu;
    // 0x1bfb60: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1BFB5Cu, 0x1BFB64u)) {
        return;
    }
    ctx->pc = 0x1BFB64u;
label_1bfb64:
    // 0x1bfb64: 0x26630fd8  addiu       $v1, $s3, 0xFD8
    ctx->pc = 0x1bfb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4056));
label_1bfb68:
    // 0x1bfb68: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1bfb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1bfb6c:
    // 0x1bfb6c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1bfb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1bfb70:
    // 0x1bfb70: 0x40f809  jalr        $v0
label_1bfb74:
    if (ctx->pc == 0x1BFB74u) {
        ctx->pc = 0x1BFB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB70u;
        // 0x1bfb74: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB78u;
        goto label_1bfb78;
    }
    ctx->pc = 0x1BFB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFB78u);
        ctx->pc = 0x1BFB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB70u;
        // 0x1bfb74: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFB70u, 0x1BFB78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BFB78u;
label_1bfb78:
    // 0x1bfb78: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1bfb78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1bfb7c:
    // 0x1bfb7c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1bfb7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bfb80:
    // 0x1bfb80: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1bfb80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bfb84:
    // 0x1bfb84: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1bfb84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bfb88:
    // 0x1bfb88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bfb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bfb8c:
    // 0x1bfb8c: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x1bfb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1bfb90:
    // 0x1bfb90: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1bfb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1bfb94:
    // 0x1bfb94: 0x3e00008  jr          $ra
label_1bfb98:
    if (ctx->pc == 0x1BFB98u) {
        ctx->pc = 0x1BFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB94u;
        // 0x1bfb98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB9Cu;
        goto label_1bfb9c;
    }
    ctx->pc = 0x1BFB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB94u;
        // 0x1bfb98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFB9Cu;
label_1bfb9c:
    // 0x1bfb9c: 0x0  nop
    ctx->pc = 0x1bfb9cu;
    // NOP
    ctx->pc = 0x1bfba0u;
}
