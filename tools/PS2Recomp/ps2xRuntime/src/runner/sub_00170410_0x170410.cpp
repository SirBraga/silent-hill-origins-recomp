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

// Function: sub_00170410
// Address: 0x170410 - 0x170540
void sub_00170410_0x170410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170410_0x170410");
#endif

    switch (ctx->pc) {
        case 0x170428u: goto label_170428;
        case 0x17044cu: goto label_17044c;
        case 0x170454u: goto label_170454;
        case 0x17050cu: goto label_17050c;
        case 0x170524u: goto label_170524;
        default: break;
    }

    ctx->pc = 0x170410u;

    // 0x170410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x170414: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x170414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x170418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17041c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17041cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170420: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x170420u;
    SET_GPR_U32(ctx, 31, 0x170428u);
    ctx->pc = 0x170424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170420u;
    // 0x170424: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x170420u, 0x170428u)) {
        return;
    }
    ctx->pc = 0x170428u;
label_170428:
    // 0x170428: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x170428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17042c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17042cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x170430: 0x24635328  addiu       $v1, $v1, 0x5328
    ctx->pc = 0x170430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21288));
    // 0x170434: 0x24425348  addiu       $v0, $v0, 0x5348
    ctx->pc = 0x170434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21320));
    // 0x170438: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x170438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x17043c: 0x260400d4  addiu       $a0, $s0, 0xD4
    ctx->pc = 0x17043cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
    // 0x170440: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x170440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x170444: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x170444u;
    SET_GPR_U32(ctx, 31, 0x17044Cu);
    ctx->pc = 0x170448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170444u;
    // 0x170448: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x170444u, 0x17044Cu)) {
        return;
    }
    ctx->pc = 0x17044Cu;
label_17044c:
    // 0x17044c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x17044Cu;
    SET_GPR_U32(ctx, 31, 0x170454u);
    ctx->pc = 0x170450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17044Cu;
    // 0x170450: 0x260400dc  addiu       $a0, $s0, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x17044Cu, 0x170454u)) {
        return;
    }
    ctx->pc = 0x170454u;
label_170454:
    // 0x170454: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x170454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x170458: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x170458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x17045c: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x17045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x170460: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x170460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x170464: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x170464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170468: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x170468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x17046c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17046cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170470: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x170470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x170474: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x170474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x170478: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x170478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x17047c: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x17047cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x170480: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x170480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x170484: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x170484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x170488: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x170488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x17048c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x17048cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x170490: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x170490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x170494: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x170494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x170498: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x170498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x17049c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x17049cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1704a0: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1704a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1704a4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x1704a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1704a8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1704a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1704ac: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1704acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1704b0: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x1704b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1704b4: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x1704b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1704b8: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x1704b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1704bc: 0xe6010090  swc1        $f1, 0x90($s0)
    ctx->pc = 0x1704bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x1704c0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1704c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1704c4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1704c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1704c8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x1704c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x1704cc: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1704ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1704d0: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1704d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1704d4: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x1704d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x1704d8: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x1704d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x1704dc: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x1704dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x1704e0: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1704e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1704e4: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1704e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1704e8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1704e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1704ec: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x1704ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x1704f0: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x1704f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1704f4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1704f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x1704f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1704f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704fc: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x1704fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    // 0x170500: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170504: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x170504u;
    SET_GPR_U32(ctx, 31, 0x17050Cu);
    ctx->pc = 0x170508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170504u;
    // 0x170508: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x170504u, 0x17050Cu)) {
        return;
    }
    ctx->pc = 0x17050Cu;
label_17050c:
    // 0x17050c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x17050cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x170510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170514: 0x24a5f888  addiu       $a1, $a1, -0x778
    ctx->pc = 0x170514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    // 0x170518: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17051c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17051Cu;
    SET_GPR_U32(ctx, 31, 0x170524u);
    ctx->pc = 0x170520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17051Cu;
    // 0x170520: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17051Cu, 0x170524u)) {
        return;
    }
    ctx->pc = 0x170524u;
label_170524:
    // 0x170524: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x170524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x170528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17052c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17052cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170534: 0x3e00008  jr          $ra
    ctx->pc = 0x170534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170534u;
        // 0x170538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17053Cu;
    // 0x17053c: 0x0  nop
    ctx->pc = 0x17053cu;
    // NOP
    ctx->pc = 0x170540u;
}
