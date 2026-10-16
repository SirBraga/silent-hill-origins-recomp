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

// Function: sub_00183900
// Address: 0x183900 - 0x183a90
void sub_00183900_0x183900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183900_0x183900");
#endif

    switch (ctx->pc) {
        case 0x183918u: goto label_183918;
        case 0x183930u: goto label_183930;
        case 0x183948u: goto label_183948;
        case 0x183970u: goto label_183970;
        case 0x183a04u: goto label_183a04;
        case 0x183a1cu: goto label_183a1c;
        case 0x183a28u: goto label_183a28;
        case 0x183a50u: goto label_183a50;
        default: break;
    }

    ctx->pc = 0x183900u;

    // 0x183900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183904: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x183904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x183908: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x183908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18390c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18390cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183910: 0xc081be4  jal         func_206F90
    ctx->pc = 0x183910u;
    SET_GPR_U32(ctx, 31, 0x183918u);
    ctx->pc = 0x183914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183910u;
    // 0x183914: 0x8e0400a8  lw          $a0, 0xA8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206F90u, 0x183910u, 0x183918u)) {
        return;
    }
    ctx->pc = 0x183918u;
label_183918:
    // 0x183918: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x183918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x18391c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183920: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x183920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x183924: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x183924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x183928: 0xc09418e  jal         func_250638
    ctx->pc = 0x183928u;
    SET_GPR_U32(ctx, 31, 0x183930u);
    ctx->pc = 0x18392Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183928u;
    // 0x18392c: 0x8e0400a0  lw          $a0, 0xA0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250638u, 0x183928u, 0x183930u)) {
        return;
    }
    ctx->pc = 0x183930u;
label_183930:
    // 0x183930: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x183930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x183934: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x183934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x183938: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x183938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18393c: 0x24a53df0  addiu       $a1, $a1, 0x3DF0
    ctx->pc = 0x18393cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15856));
    // 0x183940: 0xc09d914  jal         func_276450
    ctx->pc = 0x183940u;
    SET_GPR_U32(ctx, 31, 0x183948u);
    ctx->pc = 0x183944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183940u;
    // 0x183944: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276450u, 0x183940u, 0x183948u)) {
        return;
    }
    ctx->pc = 0x183948u;
label_183948:
    // 0x183948: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x183948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x18394c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x18394cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x183950: 0x1840002a  blez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x183950u;
    {
        const bool branch_taken_0x183950 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x183954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183950u;
        // 0x183954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183950) {
            ctx->pc = 0x1839FCu;
            goto label_1839fc;
        }
    }
    ctx->pc = 0x183958u;
    // 0x183958: 0x3c070002  lui         $a3, 0x2
    ctx->pc = 0x183958u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2 << 16));
    // 0x18395c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18395cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x183960: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x183960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183964: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x183964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183968: 0x34e70003  ori         $a3, $a3, 0x3
    ctx->pc = 0x183968u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3);
    // 0x18396c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x18396cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_183970:
    // 0x183970: 0x62980  sll         $a1, $a2, 6
    ctx->pc = 0x183970u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x183974: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x183974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x183978: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x183978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x18397c: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x18397cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x183980: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x183980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x183984: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x183984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x183988: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x183988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x18398c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18398cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x183990: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x183990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x183994: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x183994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x183998: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x183998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x18399c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x18399cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1839a0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1839a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1839a4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1839a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1839a8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1839a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1839ac: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1839acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1839b0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1839b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1839b4: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x1839b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1839b8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1839b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1839bc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1839bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1839c0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x1839c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1839c4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1839c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1839c8: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1839c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1839cc: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x1839ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1839d0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1839d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1839d4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1839d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1839d8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1839d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1839dc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1839dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1839e0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1839e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x1839e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1839e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1839e8: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x1839e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1839ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1839ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1839f0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1839f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1839f4: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1839F4u;
    {
        const bool branch_taken_0x1839f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1839f4) {
            ctx->pc = 0x1839F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1839F4u;
            // 0x1839f8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183970;
        }
    }
    ctx->pc = 0x1839FCu;
label_1839fc:
    // 0x1839fc: 0xc09d8ce  jal         func_276338
    ctx->pc = 0x1839FCu;
    SET_GPR_U32(ctx, 31, 0x183A04u);
    ctx->pc = 0x183A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1839FCu;
    // 0x183a00: 0x8e0400a4  lw          $a0, 0xA4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276338u, 0x1839FCu, 0x183A04u)) {
        return;
    }
    ctx->pc = 0x183A04u;
label_183a04:
    // 0x183a04: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x183a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x183a08: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x183a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x183a0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x183a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a10: 0x24a53dd0  addiu       $a1, $a1, 0x3DD0
    ctx->pc = 0x183a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15824));
    // 0x183a14: 0xc095478  jal         func_2551E0
    ctx->pc = 0x183A14u;
    SET_GPR_U32(ctx, 31, 0x183A1Cu);
    ctx->pc = 0x183A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A14u;
    // 0x183a18: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2551E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2551E0u, 0x183A14u, 0x183A1Cu)) {
        return;
    }
    ctx->pc = 0x183A1Cu;
label_183a1c:
    // 0x183a1c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x183a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183a20: 0xc08994a  jal         func_226528
    ctx->pc = 0x183A20u;
    SET_GPR_U32(ctx, 31, 0x183A28u);
    ctx->pc = 0x183A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183A20u;
    // 0x183a24: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x183A20u, 0x183A28u)) {
        return;
    }
    ctx->pc = 0x183A28u;
label_183a28:
    // 0x183a28: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x183a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x183a2c: 0x2406270e  addiu       $a2, $zero, 0x270E
    ctx->pc = 0x183a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9998));
    // 0x183a30: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x183a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x183a34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x183a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a38: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x183a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x183a3c: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x183A3Cu;
    {
        const bool branch_taken_0x183a3c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x183A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A3Cu;
        // 0x183a40: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a3c) {
            ctx->pc = 0x183A74u;
            goto label_183a74;
        }
    }
    ctx->pc = 0x183A44u;
    // 0x183a44: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x183a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x183a48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a4c: 0x0  nop
    ctx->pc = 0x183a4cu;
    // NOP
label_183a50:
    // 0x183a50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x183a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183a54: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183A54u;
    {
        const bool branch_taken_0x183a54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x183a54) {
            ctx->pc = 0x183A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183A54u;
            // 0x183a58: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183A68u;
            goto label_183a68;
        }
    }
    ctx->pc = 0x183A5Cu;
    // 0x183a5c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x183a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x183a60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x183A60u;
    {
        const bool branch_taken_0x183a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A60u;
        // 0x183a64: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a60) {
            ctx->pc = 0x183A78u;
            goto label_183a78;
        }
    }
    ctx->pc = 0x183A68u;
label_183a68:
    // 0x183a68: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x183a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x183a6c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x183A6Cu;
    {
        const bool branch_taken_0x183a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A6Cu;
        // 0x183a70: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a6c) {
            ctx->pc = 0x183A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183a50;
        }
    }
    ctx->pc = 0x183A74u;
label_183a74:
    // 0x183a74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x183a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183a78:
    // 0x183a78: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x183a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x183a7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x183a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183a80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x183a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183a84: 0x3e00008  jr          $ra
    ctx->pc = 0x183A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183A84u;
        // 0x183a88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183A8Cu;
    // 0x183a8c: 0x0  nop
    ctx->pc = 0x183a8cu;
    // NOP
    ctx->pc = 0x183a90u;
}
