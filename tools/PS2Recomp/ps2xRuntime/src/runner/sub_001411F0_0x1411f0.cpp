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

// Function: sub_001411F0
// Address: 0x1411f0 - 0x141328
void sub_001411F0_0x1411f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001411F0_0x1411f0");
#endif

    switch (ctx->pc) {
        case 0x141204u: goto label_141204;
        case 0x141224u: goto label_141224;
        case 0x14122cu: goto label_14122c;
        case 0x141234u: goto label_141234;
        case 0x141310u: goto label_141310;
        default: break;
    }

    ctx->pc = 0x1411f0u;

    // 0x1411f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1411f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1411f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1411f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1411f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1411f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1411fc: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x1411FCu;
    SET_GPR_U32(ctx, 31, 0x141204u);
    ctx->pc = 0x141200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1411FCu;
    // 0x141200: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x1411FCu, 0x141204u)) {
        return;
    }
    ctx->pc = 0x141204u;
label_141204:
    // 0x141204: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x141204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x141208: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x141208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x14120c: 0x24630bd0  addiu       $v1, $v1, 0xBD0
    ctx->pc = 0x14120cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3024));
    // 0x141210: 0x24420b88  addiu       $v0, $v0, 0xB88
    ctx->pc = 0x141210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2952));
    // 0x141214: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x141214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x141218: 0x260400b8  addiu       $a0, $s0, 0xB8
    ctx->pc = 0x141218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x14121c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14121Cu;
    SET_GPR_U32(ctx, 31, 0x141224u);
    ctx->pc = 0x141220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14121Cu;
    // 0x141220: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14121Cu, 0x141224u)) {
        return;
    }
    ctx->pc = 0x141224u;
label_141224:
    // 0x141224: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x141224u;
    SET_GPR_U32(ctx, 31, 0x14122Cu);
    ctx->pc = 0x141228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141224u;
    // 0x141228: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x141224u, 0x14122Cu)) {
        return;
    }
    ctx->pc = 0x14122Cu;
label_14122c:
    // 0x14122c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14122Cu;
    SET_GPR_U32(ctx, 31, 0x141234u);
    ctx->pc = 0x141230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14122Cu;
    // 0x141230: 0x260400c8  addiu       $a0, $s0, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14122Cu, 0x141234u)) {
        return;
    }
    ctx->pc = 0x141234u;
label_141234:
    // 0x141234: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x141234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x141238: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x141238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14123c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14123cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141240: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x141240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x141244: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x141244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141248: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x141248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x14124c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14124cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x141250: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x141250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x141254: 0xe6020048  swc1        $f2, 0x48($s0)
    ctx->pc = 0x141254u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x141258: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x141258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x14125c: 0xe60100a0  swc1        $f1, 0xA0($s0)
    ctx->pc = 0x14125cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x141260: 0xe60100a4  swc1        $f1, 0xA4($s0)
    ctx->pc = 0x141260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x141264: 0xe60100a8  swc1        $f1, 0xA8($s0)
    ctx->pc = 0x141264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x141268: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x141268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x14126c: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x14126cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x141270: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x141270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x141274: 0xe60100ac  swc1        $f1, 0xAC($s0)
    ctx->pc = 0x141274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x141278: 0xe60100b0  swc1        $f1, 0xB0($s0)
    ctx->pc = 0x141278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x14127c: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x14127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x141280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x141280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x141284: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x141284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x141288: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x141288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x14128c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x14128cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x141290: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x141290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x141294: 0xe6010060  swc1        $f1, 0x60($s0)
    ctx->pc = 0x141294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x141298: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x141298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x14129c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14129cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1412a0: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x1412a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x1412a4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1412a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1412a8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1412a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1412ac: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x1412acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x1412b0: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1412b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1412b4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1412b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1412b8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x1412b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x1412bc: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1412bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1412c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1412c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1412c4: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x1412c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x1412c8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1412c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1412cc: 0x8c628468  lw          $v0, -0x7B98($v1)
    ctx->pc = 0x1412ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338468u));
    // 0x1412d0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1412d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1412d4: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1412d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1412d8: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x1412d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x1412dc: 0xac708468  sw          $s0, -0x7B98($v1)
    ctx->pc = 0x1412dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x338468u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338468u, _value); } while (0);
    // 0x1412e0: 0x8c828470  lw          $v0, -0x7B90($a0)
    ctx->pc = 0x1412e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338470u));
    // 0x1412e4: 0x8cc3846c  lw          $v1, -0x7B94($a2)
    ctx->pc = 0x1412e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33846Cu));
    // 0x1412e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1412e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1412ec: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1412ECu;
    {
        const bool branch_taken_0x1412ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1412F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1412ECu;
        // 0x1412f0: 0xac828470  sw          $v0, -0x7B90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294935664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1412ec) {
            ctx->pc = 0x141310u;
            goto label_141310;
        }
    }
    ctx->pc = 0x1412F4u;
    // 0x1412f4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1412f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1412f8: 0xacd0846c  sw          $s0, -0x7B94($a2)
    ctx->pc = 0x1412f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294935660), GPR_U32(ctx, 16));
    // 0x1412fc: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x1412fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x141300: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x141300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x141304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x141304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141308: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x141308u;
    SET_GPR_U32(ctx, 31, 0x141310u);
    ctx->pc = 0x14130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141308u;
    // 0x14130c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x141308u, 0x141310u)) {
        return;
    }
    ctx->pc = 0x141310u;
label_141310:
    // 0x141310: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x141310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141318: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x141318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14131c: 0x3e00008  jr          $ra
    ctx->pc = 0x14131Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14131Cu;
        // 0x141320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14131Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141324u;
    // 0x141324: 0x0  nop
    ctx->pc = 0x141324u;
    // NOP
    ctx->pc = 0x141328u;
}
