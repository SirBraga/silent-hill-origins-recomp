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

// Function: sub_00152B60
// Address: 0x152b60 - 0x152c98
void sub_00152B60_0x152b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152B60_0x152b60");
#endif

    switch (ctx->pc) {
        case 0x152b90u: goto label_152b90;
        case 0x152ba8u: goto label_152ba8;
        case 0x152bc0u: goto label_152bc0;
        case 0x152bc8u: goto label_152bc8;
        case 0x152c38u: goto label_152c38;
        case 0x152c44u: goto label_152c44;
        case 0x152c5cu: goto label_152c5c;
        case 0x152c74u: goto label_152c74;
        default: break;
    }

    ctx->pc = 0x152b60u;

    // 0x152b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x152b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x152b64: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x152b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x152b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152b6c: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x152b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x152b70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x152b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x152b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x152b78: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x152b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x152b7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b88: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x152B88u;
    SET_GPR_U32(ctx, 31, 0x152B90u);
    ctx->pc = 0x152B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152B88u;
    // 0x152b8c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x152B88u, 0x152B90u)) {
        return;
    }
    ctx->pc = 0x152B90u;
label_152b90:
    // 0x152b90: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x152b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x152b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b98: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x152b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    // 0x152b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152ba0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x152BA0u;
    SET_GPR_U32(ctx, 31, 0x152BA8u);
    ctx->pc = 0x152BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152BA0u;
    // 0x152ba4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x152BA0u, 0x152BA8u)) {
        return;
    }
    ctx->pc = 0x152BA8u;
label_152ba8:
    // 0x152ba8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x152ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x152bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bb0: 0x24a58918  addiu       $a1, $a1, -0x76E8
    ctx->pc = 0x152bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    // 0x152bb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bb8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x152BB8u;
    SET_GPR_U32(ctx, 31, 0x152BC0u);
    ctx->pc = 0x152BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152BB8u;
    // 0x152bbc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x152BB8u, 0x152BC0u)) {
        return;
    }
    ctx->pc = 0x152BC0u;
label_152bc0:
    // 0x152bc0: 0xc085bc2  jal         func_216F08
    ctx->pc = 0x152BC0u;
    SET_GPR_U32(ctx, 31, 0x152BC8u);
    ctx->pc = 0x216F08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216F08u, 0x152BC0u, 0x152BC8u)) {
        return;
    }
    ctx->pc = 0x152BC8u;
label_152bc8:
    // 0x152bc8: 0xc62100a8  lwc1        $f1, 0xA8($s1)
    ctx->pc = 0x152bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152bcc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x152bccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x152bd0: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x152bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x152bd4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x152bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x152bd8: 0x3c0143d0  lui         $at, 0x43D0
    ctx->pc = 0x152bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17360 << 16));
    // 0x152bdc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x152bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x152be0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x152be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x152be4: 0x3c0143aa  lui         $at, 0x43AA
    ctx->pc = 0x152be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17322 << 16));
    // 0x152be8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x152be8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x152bec: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x152becu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x152bf0: 0x3c0142ac  lui         $at, 0x42AC
    ctx->pc = 0x152bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17068 << 16));
    // 0x152bf4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x152bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x152bf8: 0xe62400b4  swc1        $f4, 0xB4($s1)
    ctx->pc = 0x152bf8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
    // 0x152bfc: 0xe62200ac  swc1        $f2, 0xAC($s1)
    ctx->pc = 0x152bfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
    // 0x152c00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x152c00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x152c04: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x152c04u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x152c08: 0xe62100b8  swc1        $f1, 0xB8($s1)
    ctx->pc = 0x152c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
    // 0x152c0c: 0xe62300b0  swc1        $f3, 0xB0($s1)
    ctx->pc = 0x152c0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
    // 0x152c10: 0x8c82830c  lw          $v0, -0x7CF4($a0)
    ctx->pc = 0x152c10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33830Cu));
    // 0x152c14: 0x8c430198  lw          $v1, 0x198($v0)
    ctx->pc = 0x152c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 408)));
    // 0x152c18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x152C18u;
    {
        const bool branch_taken_0x152c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x152c18) {
            ctx->pc = 0x152C30u;
            goto label_152c30;
        }
    }
    ctx->pc = 0x152C20u;
    // 0x152c20: 0x3c01422c  lui         $at, 0x422C
    ctx->pc = 0x152c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16940 << 16));
    // 0x152c24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x152c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152c28: 0x0  nop
    ctx->pc = 0x152c28u;
    // NOP
    // 0x152c2c: 0xe62000ac  swc1        $f0, 0xAC($s1)
    ctx->pc = 0x152c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
label_152c30:
    // 0x152c30: 0xc085ba8  jal         func_216EA0
    ctx->pc = 0x152C30u;
    SET_GPR_U32(ctx, 31, 0x152C38u);
    ctx->pc = 0x152C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C30u;
    // 0x152c34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216EA0u, 0x152C30u, 0x152C38u)) {
        return;
    }
    ctx->pc = 0x152C38u;
label_152c38:
    // 0x152c38: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x152c38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x152c3c: 0xc054e66  jal         func_153998
    ctx->pc = 0x152C3Cu;
    SET_GPR_U32(ctx, 31, 0x152C44u);
    ctx->pc = 0x152C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C3Cu;
    // 0x152c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153998u, 0x152C3Cu, 0x152C44u)) {
        return;
    }
    ctx->pc = 0x152C44u;
label_152c44:
    // 0x152c44: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x152c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x152c48: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x152C48u;
    {
        const bool branch_taken_0x152c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C48u;
        // 0x152c4c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c48) {
            ctx->pc = 0x152C7Cu;
            goto label_152c7c;
        }
    }
    ctx->pc = 0x152C50u;
    // 0x152c50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c54: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x152C54u;
    SET_GPR_U32(ctx, 31, 0x152C5Cu);
    ctx->pc = 0x152C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C54u;
    // 0x152c58: 0x8c4485cc  lw          $a0, -0x7A34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936012)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x152C54u, 0x152C5Cu)) {
        return;
    }
    ctx->pc = 0x152C5Cu;
label_152c5c:
    // 0x152c5c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x152c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x152c60: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x152c60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x152c64: 0x8c6485d0  lw          $a0, -0x7A30($v1)
    ctx->pc = 0x152c64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3385D0u));
    // 0x152c68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c6c: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x152C6Cu;
    SET_GPR_U32(ctx, 31, 0x152C74u);
    ctx->pc = 0x152C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C6Cu;
    // 0x152c70: 0xacc285ec  sw          $v0, -0x7A14($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294936044), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x152C6Cu, 0x152C74u)) {
        return;
    }
    ctx->pc = 0x152C74u;
label_152c74:
    // 0x152c74: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x152c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x152c78: 0xac6285f0  sw          $v0, -0x7A10($v1)
    ctx->pc = 0x152c78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3385F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3385F0u, _value); } while (0);
label_152c7c:
    // 0x152c7c: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x152c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x152c80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x152c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152c84: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x152c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x152c88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152c90: 0x3e00008  jr          $ra
    ctx->pc = 0x152C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C90u;
        // 0x152c94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152C98u;
}
