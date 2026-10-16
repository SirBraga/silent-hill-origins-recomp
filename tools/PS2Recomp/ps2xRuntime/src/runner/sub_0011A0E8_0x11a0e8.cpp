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

// Function: sub_0011A0E8
// Address: 0x11a0e8 - 0x11a530
void sub_0011A0E8_0x11a0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A0E8_0x11a0e8");
#endif

    switch (ctx->pc) {
        case 0x11a140u: goto label_11a140;
        case 0x11a160u: goto label_11a160;
        case 0x11a190u: goto label_11a190;
        case 0x11a1b8u: goto label_11a1b8;
        case 0x11a250u: goto label_11a250;
        case 0x11a2f8u: goto label_11a2f8;
        case 0x11a350u: goto label_11a350;
        case 0x11a3ccu: goto label_11a3cc;
        case 0x11a494u: goto label_11a494;
        default: break;
    }

    ctx->pc = 0x11a0e8u;

    // 0x11a0e8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x11a0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x11a0ec: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x11a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x11a0f0: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x11a0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x11a0f4: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x11a0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x11a0f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11a0f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0fc: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x11a0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x11a100: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x11a100u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a104: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x11a104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x11a108: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x11a108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x11a10c: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x11a10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x11a110: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x11a110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
    // 0x11a114: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x11a114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x11a118: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x11a118u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x11a11c: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x11a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x11a120: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x11a120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x11a124: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A124u;
    {
        const bool branch_taken_0x11a124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x11A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A124u;
        // 0x11a128: 0xafa400d0  sw          $a0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a124) {
            ctx->pc = 0x11A140u;
            goto label_11a140;
        }
    }
    ctx->pc = 0x11A12Cu;
    // 0x11a12c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11a130: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A130u;
    {
        const bool branch_taken_0x11a130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A130u;
        // 0x11a134: 0x8fa300d4  lw          $v1, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a130) {
            ctx->pc = 0x11A144u;
            goto label_11a144;
        }
    }
    ctx->pc = 0x11A138u;
    // 0x11a138: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x11A138u;
    SET_GPR_U32(ctx, 31, 0x11A140u);
    ctx->pc = 0x11A13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A138u;
    // 0x11a13c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x11A138u, 0x11A140u)) {
        return;
    }
    ctx->pc = 0x11A140u;
label_11a140:
    // 0x11a140: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x11a140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_11a144:
    // 0x11a144: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x11A144u;
    {
        const bool branch_taken_0x11a144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A144u;
        // 0x11a148: 0x2aa20032  slti        $v0, $s5, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a144) {
            ctx->pc = 0x11A1A4u;
            goto label_11a1a4;
        }
    }
    ctx->pc = 0x11A14Cu;
    // 0x11a14c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11A14Cu;
    {
        const bool branch_taken_0x11a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A14Cu;
        // 0x11a150: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a14c) {
            ctx->pc = 0x11A1A4u;
            goto label_11a1a4;
        }
    }
    ctx->pc = 0x11A154u;
    // 0x11a154: 0x5d8021  addu        $s0, $v0, $sp
    ctx->pc = 0x11a154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x11a158: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x11a158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x11a15c: 0x0  nop
    ctx->pc = 0x11a15cu;
    // NOP
label_11a160:
    // 0x11a160: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x11a160u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x11a164: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x11a164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x11a168: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x11a168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x11a16c: 0x8e221a70  lw          $v0, 0x1A70($s1)
    ctx->pc = 0x11a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6768)));
    // 0x11a170: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x11a170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x11a174: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A174u;
    {
        const bool branch_taken_0x11a174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A174u;
        // 0x11a178: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a174) {
            ctx->pc = 0x11A190u;
            goto label_11a190;
        }
    }
    ctx->pc = 0x11A17Cu;
    // 0x11a17c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a180: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A180u;
    {
        const bool branch_taken_0x11a180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A180u;
        // 0x11a184: 0x8fa300e4  lw          $v1, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a180) {
            ctx->pc = 0x11A194u;
            goto label_11a194;
        }
    }
    ctx->pc = 0x11A188u;
    // 0x11a188: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x11A188u;
    SET_GPR_U32(ctx, 31, 0x11A190u);
    ctx->pc = 0x11A18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A188u;
    // 0x11a18c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x11A188u, 0x11A190u)) {
        return;
    }
    ctx->pc = 0x11A190u;
label_11a190:
    // 0x11a190: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x11a190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_11a194:
    // 0x11a194: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A194u;
    {
        const bool branch_taken_0x11a194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A194u;
        // 0x11a198: 0x2aa20032  slti        $v0, $s5, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a194) {
            ctx->pc = 0x11A1A4u;
            goto label_11a1a4;
        }
    }
    ctx->pc = 0x11A19Cu;
    // 0x11a19c: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11A19Cu;
    {
        const bool branch_taken_0x11a19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a19c) {
            ctx->pc = 0x11A1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A19Cu;
            // 0x11a1a0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a160;
        }
    }
    ctx->pc = 0x11A1A4u;
label_11a1a4:
    // 0x11a1a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x11a1a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1a8: 0x1aa00065  blez        $s5, . + 4 + (0x65 << 2)
    ctx->pc = 0x11A1A8u;
    {
        const bool branch_taken_0x11a1a8 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x11A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1A8u;
        // 0x11a1ac: 0x26b6ffff  addiu       $s6, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1a8) {
            ctx->pc = 0x11A340u;
            goto label_11a340;
        }
    }
    ctx->pc = 0x11A1B0u;
    // 0x11a1b0: 0x27b400f0  addiu       $s4, $sp, 0xF0
    ctx->pc = 0x11a1b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x11a1b4: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x11a1b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11a1b8:
    // 0x11a1b8: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x11a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x11a1bc: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x11a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x11a1c0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x11a1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11a1c4: 0x55282a  slt         $a1, $v0, $s5
    ctx->pc = 0x11a1c4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x11a1c8: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x11a1c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11a1cc: 0x2c5100a  movz        $v0, $s6, $a1
    ctx->pc = 0x11a1ccu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22));
    // 0x11a1d0: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x11a1d0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x11a1d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11a1d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11a1dc: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x11a1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11a1e0: 0x3a38821  addu        $s1, $sp, $v1
    ctx->pc = 0x11a1e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x11a1e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a1e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a1ec: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x11a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11a1f0: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x11a1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11a1f4: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x11a1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a1f8: 0xc4a10040  lwc1        $f1, 0x40($a1)
    ctx->pc = 0x11a1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a1fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11a1fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11a200: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x11a200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x11a204: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11a204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a208: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11a208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a20c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x11a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11a210: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x11a210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11a214: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x11a214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a218: 0xc4a10044  lwc1        $f1, 0x44($a1)
    ctx->pc = 0x11a218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a21c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11a21cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11a220: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x11a220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x11a224: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a228: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11a228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a22c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x11a22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11a230: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x11a230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11a234: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x11a234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a238: 0xc4a10048  lwc1        $f1, 0x48($a1)
    ctx->pc = 0x11a238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a23c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11a23cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11a240: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x11a240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x11a244: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11a244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a248: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11A248u;
    SET_GPR_U32(ctx, 31, 0x11A250u);
    ctx->pc = 0x11A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A248u;
    // 0x11a24c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11A248u, 0x11A250u)) {
        return;
    }
    ctx->pc = 0x11A250u;
label_11a250:
    // 0x11a250: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11a250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11a254: 0x6ba300f7  ldl         $v1, 0xF7($sp)
    ctx->pc = 0x11a254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x11a258: 0x6fa300f0  ldr         $v1, 0xF0($sp)
    ctx->pc = 0x11a258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11a25c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x11a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x11a260: 0xb043006f  sdl         $v1, 0x6F($v0)
    ctx->pc = 0x11a260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a264: 0xb4430068  sdr         $v1, 0x68($v0)
    ctx->pc = 0x11a264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a268: 0xac440070  sw          $a0, 0x70($v0)
    ctx->pc = 0x11a268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 4));
    // 0x11a26c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11a270: 0x6ba700f7  ldl         $a3, 0xF7($sp)
    ctx->pc = 0x11a270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11a274: 0x6fa700f0  ldr         $a3, 0xF0($sp)
    ctx->pc = 0x11a274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11a278: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x11a278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x11a27c: 0xb067007b  sdl         $a3, 0x7B($v1)
    ctx->pc = 0x11a27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a280: 0xb4670074  sdr         $a3, 0x74($v1)
    ctx->pc = 0x11a280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a284: 0xac62007c  sw          $v0, 0x7C($v1)
    ctx->pc = 0x11a284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
    // 0x11a288: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11a288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a28c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a290: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x11a290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11a294: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x11a294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11a298: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x11a298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a29c: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x11a29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a2a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11a2a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11a2a4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x11a2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x11a2a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a2ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a2b0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x11a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11a2b4: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x11a2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11a2b8: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x11a2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a2bc: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x11a2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a2c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11a2c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11a2c4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x11a2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x11a2c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a2cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a2d0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x11a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11a2d4: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x11a2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11a2d8: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x11a2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a2dc: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x11a2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a2e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11a2e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11a2e4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x11a2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x11a2e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11a2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11a2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2f0: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x11A2F0u;
    SET_GPR_U32(ctx, 31, 0x11A2F8u);
    ctx->pc = 0x11A2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A2F0u;
    // 0x11a2f4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x11A2F0u, 0x11A2F8u)) {
        return;
    }
    ctx->pc = 0x11A2F8u;
label_11a2f8:
    // 0x11a2f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11a2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11a2fc: 0x275202a  slt         $a0, $s3, $s5
    ctx->pc = 0x11a2fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x11a300: 0x6ba600f7  ldl         $a2, 0xF7($sp)
    ctx->pc = 0x11a300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11a304: 0x6fa600f0  ldr         $a2, 0xF0($sp)
    ctx->pc = 0x11a304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11a308: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x11a308u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x11a30c: 0xb0460087  sdl         $a2, 0x87($v0)
    ctx->pc = 0x11a30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a310: 0xb4460080  sdr         $a2, 0x80($v0)
    ctx->pc = 0x11a310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a314: 0xac470088  sw          $a3, 0x88($v0)
    ctx->pc = 0x11a314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 7));
    // 0x11a318: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11a318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11a31c: 0x6ba600f7  ldl         $a2, 0xF7($sp)
    ctx->pc = 0x11a31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11a320: 0x6fa600f0  ldr         $a2, 0xF0($sp)
    ctx->pc = 0x11a320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11a324: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x11a324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x11a328: 0xb0660093  sdl         $a2, 0x93($v1)
    ctx->pc = 0x11a328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 147); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a32c: 0xb466008c  sdr         $a2, 0x8C($v1)
    ctx->pc = 0x11a32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 140); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11a330: 0xac670094  sw          $a3, 0x94($v1)
    ctx->pc = 0x11a330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 7));
    // 0x11a334: 0x1480ffa0  bnez        $a0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x11A334u;
    {
        const bool branch_taken_0x11a334 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A334u;
        // 0x11a338: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a334) {
            ctx->pc = 0x11A1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a1b8;
        }
    }
    ctx->pc = 0x11A33Cu;
    // 0x11a33c: 0x0  nop
    ctx->pc = 0x11a33cu;
    // NOP
label_11a340:
    // 0x11a340: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11a340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a344: 0x18800070  blez        $a0, . + 4 + (0x70 << 2)
    ctx->pc = 0x11A344u;
    {
        const bool branch_taken_0x11a344 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x11A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A344u;
        // 0x11a348: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a344) {
            ctx->pc = 0x11A508u;
            goto label_11a508;
        }
    }
    ctx->pc = 0x11A34Cu;
    // 0x11a34c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x11a34cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11a350:
    // 0x11a350: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x11a350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x11a354: 0x55182a  slt         $v1, $v0, $s5
    ctx->pc = 0x11a354u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x11a358: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x11a358u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x11a35c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11a360: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x11a360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11a364: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11a364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a368: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11a368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a36c: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x11a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11a370: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x11a370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11a374: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x11a374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a378: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x11a378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a37c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11a37cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11a380: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x11a380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x11a384: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11a384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a388: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11a388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a38c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x11a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11a390: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x11a390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11a394: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x11a394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a398: 0xc4a10044  lwc1        $f1, 0x44($a1)
    ctx->pc = 0x11a398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a39c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11a39cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11a3a0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x11a3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x11a3a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a3a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11a3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a3ac: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x11a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11a3b0: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x11a3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11a3b4: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x11a3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a3b8: 0xc4a10048  lwc1        $f1, 0x48($a1)
    ctx->pc = 0x11a3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a3bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11a3bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11a3c0: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x11a3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x11a3c4: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x11A3C4u;
    SET_GPR_U32(ctx, 31, 0x11A3CCu);
    ctx->pc = 0x11A3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A3C4u;
    // 0x11a3c8: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x11A3C4u, 0x11A3CCu)) {
        return;
    }
    ctx->pc = 0x11A3CCu;
label_11a3cc:
    // 0x11a3cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a3d0: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x11a3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a3d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11a3d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11a3d8: 0xe4410074  swc1        $f1, 0x74($v0)
    ctx->pc = 0x11a3d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x11a3dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a3e0: 0xc4610078  lwc1        $f1, 0x78($v1)
    ctx->pc = 0x11a3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a3e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11a3e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11a3e8: 0xe4610078  swc1        $f1, 0x78($v1)
    ctx->pc = 0x11a3e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x11a3ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a3f0: 0xc441007c  lwc1        $f1, 0x7C($v0)
    ctx->pc = 0x11a3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a3f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11a3f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11a3f8: 0xe441007c  swc1        $f1, 0x7C($v0)
    ctx->pc = 0x11a3f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x11a3fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a400: 0xc4610068  lwc1        $f1, 0x68($v1)
    ctx->pc = 0x11a400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a404: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11a404u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11a408: 0xe4610068  swc1        $f1, 0x68($v1)
    ctx->pc = 0x11a408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x11a40c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a410: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x11a410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a414: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11a414u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11a418: 0xe441006c  swc1        $f1, 0x6C($v0)
    ctx->pc = 0x11a418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x11a41c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11a41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a420: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x11a420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a424: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11a424u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11a428: 0xe4610070  swc1        $f1, 0x70($v1)
    ctx->pc = 0x11a428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x11a42c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a430: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11a430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a434: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x11a434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11a438: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x11a438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11a43c: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x11a43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a440: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x11a440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a444: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11a444u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11a448: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x11a448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x11a44c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a450: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11a450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a454: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x11a454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11a458: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x11a458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11a45c: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x11a45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a460: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x11a460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a464: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11a464u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11a468: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x11a468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x11a46c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a470: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11a470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a474: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x11a474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11a478: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x11a478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x11a47c: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x11a47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11a480: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x11a480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a484: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11a484u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11a488: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x11a488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x11a48c: 0xc093aa8  jal         func_24EAA0
    ctx->pc = 0x11A48Cu;
    SET_GPR_U32(ctx, 31, 0x11A494u);
    ctx->pc = 0x11A490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A48Cu;
    // 0x11a490: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x11A48Cu, 0x11A494u)) {
        return;
    }
    ctx->pc = 0x11A494u;
label_11a494:
    // 0x11a494: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11a494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a498: 0xc441008c  lwc1        $f1, 0x8C($v0)
    ctx->pc = 0x11a498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a49c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11a49cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11a4a0: 0xe441008c  swc1        $f1, 0x8C($v0)
    ctx->pc = 0x11a4a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
    // 0x11a4a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a4a8: 0xc4610090  lwc1        $f1, 0x90($v1)
    ctx->pc = 0x11a4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a4ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11a4acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11a4b0: 0xe4610090  swc1        $f1, 0x90($v1)
    ctx->pc = 0x11a4b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x11a4b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a4b8: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x11a4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a4bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11a4bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11a4c0: 0xe4410094  swc1        $f1, 0x94($v0)
    ctx->pc = 0x11a4c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x11a4c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a4c8: 0xc4610080  lwc1        $f1, 0x80($v1)
    ctx->pc = 0x11a4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a4cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11a4ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11a4d0: 0xe4610080  swc1        $f1, 0x80($v1)
    ctx->pc = 0x11a4d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x11a4d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a4d8: 0xc4410084  lwc1        $f1, 0x84($v0)
    ctx->pc = 0x11a4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a4dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11a4dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11a4e0: 0xe4410084  swc1        $f1, 0x84($v0)
    ctx->pc = 0x11a4e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x11a4e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a4e8: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x11a4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11a4ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11a4ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11a4f0: 0xe4610088  swc1        $f1, 0x88($v1)
    ctx->pc = 0x11a4f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x11a4f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11a4f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x11a4f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11a4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4fc: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x11a4fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11a500: 0x1440ff93  bnez        $v0, . + 4 + (-0x6D << 2)
    ctx->pc = 0x11A500u;
    {
        const bool branch_taken_0x11a500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A500u;
        // 0x11a504: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a500) {
            ctx->pc = 0x11A350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a350;
        }
    }
    ctx->pc = 0x11A508u;
label_11a508:
    // 0x11a508: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x11a508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x11a50c: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x11a50cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x11a510: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x11a510u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x11a514: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x11a514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x11a518: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x11a518u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x11a51c: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x11a51cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x11a520: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x11a520u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x11a524: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x11a524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x11a528: 0x3e00008  jr          $ra
    ctx->pc = 0x11A528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A528u;
        // 0x11a52c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A530u;
}
