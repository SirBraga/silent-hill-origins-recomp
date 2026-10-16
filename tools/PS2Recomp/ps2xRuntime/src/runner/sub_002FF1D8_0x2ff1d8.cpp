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

// Function: sub_002FF1D8
// Address: 0x2ff1d8 - 0x2ff508
void sub_002FF1D8_0x2ff1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF1D8_0x2ff1d8");
#endif

    switch (ctx->pc) {
        case 0x2ff21cu: goto label_2ff21c;
        case 0x2ff228u: goto label_2ff228;
        case 0x2ff25cu: goto label_2ff25c;
        case 0x2ff2a8u: goto label_2ff2a8;
        case 0x2ff2ccu: goto label_2ff2cc;
        case 0x2ff340u: goto label_2ff340;
        case 0x2ff370u: goto label_2ff370;
        case 0x2ff3a4u: goto label_2ff3a4;
        case 0x2ff3ccu: goto label_2ff3cc;
        case 0x2ff3f8u: goto label_2ff3f8;
        case 0x2ff430u: goto label_2ff430;
        case 0x2ff45cu: goto label_2ff45c;
        case 0x2ff488u: goto label_2ff488;
        case 0x2ff4b4u: goto label_2ff4b4;
        default: break;
    }

    ctx->pc = 0x2ff1d8u;

    // 0x2ff1d8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2ff1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2ff1dc: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2ff1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2ff1e0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2ff1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ff1e4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2ff1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2ff1e8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2ff1e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff1ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ff1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff1f0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2ff1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2ff1f4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2ff1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2ff1f8: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x2ff1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2ff1fc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2ff1fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff200: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2ff200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2ff204: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x2ff204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x2ff208: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x2ff208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x2ff20c: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x2ff20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x2ff210: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2ff210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2ff214: 0xc0c0616  jal         func_301858
    ctx->pc = 0x2FF214u;
    SET_GPR_U32(ctx, 31, 0x2FF21Cu);
    ctx->pc = 0x2FF218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF214u;
    // 0x2ff218: 0xffb10070  sd          $s1, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x301858u, 0x2FF214u, 0x2FF21Cu)) {
        return;
    }
    ctx->pc = 0x2FF21Cu;
label_2ff21c:
    // 0x2ff21c: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2FF21Cu;
    {
        const bool branch_taken_0x2ff21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF21Cu;
        // 0x2ff220: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff21c) {
            ctx->pc = 0x2FF4E0u;
            goto label_2ff4e0;
        }
    }
    ctx->pc = 0x2FF224u;
    // 0x2ff224: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x2ff224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_2ff228:
    // 0x2ff228: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2ff228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ff22c: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x2ff22cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2ff230: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF230u;
    {
        const bool branch_taken_0x2ff230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff230) {
            ctx->pc = 0x2FF234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF230u;
            // 0x2ff234: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF240u;
            goto label_2ff240;
        }
    }
    ctx->pc = 0x2FF238u;
    // 0x2ff238: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x2FF238u;
    {
        const bool branch_taken_0x2ff238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF238u;
        // 0x2ff23c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff238) {
            ctx->pc = 0x2FF4DCu;
            goto label_2ff4dc;
        }
    }
    ctx->pc = 0x2FF240u;
label_2ff240:
    // 0x2ff240: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x2ff240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2ff244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff248: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2ff248u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff24c: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x2ff24cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2ff250: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x2ff250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2ff254: 0xc0c01a6  jal         func_300698
    ctx->pc = 0x2FF254u;
    SET_GPR_U32(ctx, 31, 0x2FF25Cu);
    ctx->pc = 0x2FF258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF254u;
    // 0x2ff258: 0xac4006dc  sw          $zero, 0x6DC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300698u, 0x2FF254u, 0x2FF25Cu)) {
        return;
    }
    ctx->pc = 0x2FF25Cu;
label_2ff25c:
    // 0x2ff25c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ff25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff260: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x2ff260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x2ff264: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ff264u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x1000b020
    // 0x2ff268: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2FF268u;
    {
        const bool branch_taken_0x2ff268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF268u;
        // 0x2ff26c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff268) {
            ctx->pc = 0x2FF2F4u;
            goto label_2ff2f4;
        }
    }
    ctx->pc = 0x2FF270u;
    // 0x2ff270: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x2ff270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x2ff274: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ff274u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002010
    // 0x2ff278: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x2ff278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2ff27c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2FF27Cu;
    {
        const bool branch_taken_0x2ff27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF27Cu;
        // 0x2ff280: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff27c) {
            ctx->pc = 0x2FF2F8u;
            goto label_2ff2f8;
        }
    }
    ctx->pc = 0x2FF284u;
    // 0x2ff284: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x2ff284u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff288: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x2ff288u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff28c: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x2ff28cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff290: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x2ff290u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff294: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x2ff294u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x2ff298: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x2ff298u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46080);
    // 0x2ff29c: 0x3652b020  ori         $s2, $s2, 0xB020
    ctx->pc = 0x2ff29cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45088);
    // 0x2ff2a0: 0x36312010  ori         $s1, $s1, 0x2010
    ctx->pc = 0x2ff2a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8208);
    // 0x2ff2a4: 0x0  nop
    ctx->pc = 0x2ff2a4u;
    // NOP
label_2ff2a8:
    // 0x2ff2a8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2ff2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 20), 0))); // MMIO: 0x1000b420
    // 0x2ff2ac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FF2ACu;
    {
        const bool branch_taken_0x2ff2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff2ac) {
            ctx->pc = 0x2FF2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF2ACu;
            // 0x2ff2b0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF2D0u;
            goto label_2ff2d0;
        }
    }
    ctx->pc = 0x2FF2B4u;
    // 0x2ff2b4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2ff2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ff2b8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2ff2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2ff2bc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF2BCu;
    {
        const bool branch_taken_0x2ff2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff2bc) {
            ctx->pc = 0x2FF2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF2BCu;
            // 0x2ff2c0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF2D0u;
            goto label_2ff2d0;
        }
    }
    ctx->pc = 0x2FF2C4u;
    // 0x2ff2c4: 0xc0be688  jal         func_2F9A20
    ctx->pc = 0x2FF2C4u;
    SET_GPR_U32(ctx, 31, 0x2FF2CCu);
    ctx->pc = 0x2FF2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF2C4u;
    // 0x2ff2c8: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9A20u, 0x2FF2C4u, 0x2FF2CCu)) {
        return;
    }
    ctx->pc = 0x2FF2CCu;
label_2ff2cc:
    // 0x2ff2cc: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x2ff2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_2ff2d0:
    // 0x2ff2d0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FF2D0u;
    {
        const bool branch_taken_0x2ff2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff2d0) {
            ctx->pc = 0x2FF338u;
            goto label_2ff338;
        }
    }
    ctx->pc = 0x2FF2D8u;
    // 0x2ff2d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ff2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ff2dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF2DCu;
    {
        const bool branch_taken_0x2ff2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF2DCu;
        // 0x2ff2e0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff2dc) {
            ctx->pc = 0x2FF2F8u;
            goto label_2ff2f8;
        }
    }
    ctx->pc = 0x2FF2E4u;
    // 0x2ff2e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ff2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ff2e8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2ff2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2ff2ec: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2FF2ECu;
    {
        const bool branch_taken_0x2ff2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff2ec) {
            ctx->pc = 0x2FF2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff2a8;
        }
    }
    ctx->pc = 0x2FF2F4u;
label_2ff2f4:
    // 0x2ff2f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ff2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_2ff2f8:
    // 0x2ff2f8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2ff2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff2fc: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x2ff2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x2ff300: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x2ff300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x2ff304: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ff304u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002020
    // 0x2ff308: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2ff308u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x2ff30c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2ff30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff310: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ff310u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ff314: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FF314u;
    {
        const bool branch_taken_0x2ff314 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2FF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF314u;
        // 0x2ff318: 0xae020848  sw          $v0, 0x848($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff314) {
            ctx->pc = 0x2FF348u;
            goto label_2ff348;
        }
    }
    ctx->pc = 0x2FF31Cu;
    // 0x2ff31c: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x2ff31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2ff320: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF320u;
    {
        const bool branch_taken_0x2ff320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF320u;
        // 0x2ff324: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff320) {
            ctx->pc = 0x2FF330u;
            goto label_2ff330;
        }
    }
    ctx->pc = 0x2FF328u;
    // 0x2ff328: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FF328u;
    {
        const bool branch_taken_0x2ff328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF328u;
        // 0x2ff32c: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff328) {
            ctx->pc = 0x2FF34Cu;
            goto label_2ff34c;
        }
    }
    ctx->pc = 0x2FF330u;
label_2ff330:
    // 0x2ff330: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF330u;
    {
        const bool branch_taken_0x2ff330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF330u;
        // 0x2ff334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff330) {
            ctx->pc = 0x2FF34Cu;
            goto label_2ff34c;
        }
    }
    ctx->pc = 0x2FF338u;
label_2ff338:
    // 0x2ff338: 0xc0bf702  jal         func_2FDC08
    ctx->pc = 0x2FF338u;
    SET_GPR_U32(ctx, 31, 0x2FF340u);
    ctx->pc = 0x2FDC08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDC08u, 0x2FF338u, 0x2FF340u)) {
        return;
    }
    ctx->pc = 0x2FF340u;
label_2ff340:
    // 0x2ff340: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2FF340u;
    {
        const bool branch_taken_0x2ff340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF340u;
        // 0x2ff344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff340) {
            ctx->pc = 0x2FF374u;
            goto label_2ff374;
        }
    }
    ctx->pc = 0x2FF348u;
label_2ff348:
    // 0x2ff348: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2ff348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2ff34c:
    // 0x2ff34c: 0xae02084c  sw          $v0, 0x84C($s0)
    ctx->pc = 0x2ff34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    // 0x2ff350: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ff350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff354: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x2ff354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x2ff358: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ff358u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x2ff35c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x2ff35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2ff360: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF360u;
    {
        const bool branch_taken_0x2ff360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF360u;
        // 0x2ff364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff360) {
            ctx->pc = 0x2FF370u;
            goto label_2ff370;
        }
    }
    ctx->pc = 0x2FF368u;
    // 0x2ff368: 0xc0bf72a  jal         func_2FDCA8
    ctx->pc = 0x2FF368u;
    SET_GPR_U32(ctx, 31, 0x2FF370u);
    ctx->pc = 0x2FF36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF368u;
    // 0x2ff36c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDCA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDCA8u, 0x2FF368u, 0x2FF370u)) {
        return;
    }
    ctx->pc = 0x2FF370u;
label_2ff370:
    // 0x2ff370: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2ff370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ff374:
    // 0x2ff374: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF374u;
    {
        const bool branch_taken_0x2ff374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff374) {
            ctx->pc = 0x2FF378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF374u;
            // 0x2ff378: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF390u;
            goto label_2ff390;
        }
    }
    ctx->pc = 0x2FF37Cu;
    // 0x2ff37c: 0x8e040878  lw          $a0, 0x878($s0)
    ctx->pc = 0x2ff37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x2ff380: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ff380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ff384: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ff384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ff388: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2FF388u;
    {
        const bool branch_taken_0x2ff388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF388u;
        // 0x2ff38c: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff388) {
            ctx->pc = 0x2FF4DCu;
            goto label_2ff4dc;
        }
    }
    ctx->pc = 0x2FF390u;
label_2ff390:
    // 0x2ff390: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FF390u;
    {
        const bool branch_taken_0x2ff390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF390u;
        // 0x2ff394: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff390) {
            ctx->pc = 0x2FF3DCu;
            goto label_2ff3dc;
        }
    }
    ctx->pc = 0x2FF398u;
    // 0x2ff398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff39c: 0xc0c015c  jal         func_300570
    ctx->pc = 0x2FF39Cu;
    SET_GPR_U32(ctx, 31, 0x2FF3A4u);
    ctx->pc = 0x2FF3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF39Cu;
    // 0x2ff3a0: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300570u, 0x2FF39Cu, 0x2FF3A4u)) {
        return;
    }
    ctx->pc = 0x2FF3A4u;
label_2ff3a4:
    // 0x2ff3a4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF3A4u;
    {
        const bool branch_taken_0x2ff3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff3a4) {
            ctx->pc = 0x2FF3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF3A4u;
            // 0x2ff3a8: 0xae00012c  sw          $zero, 0x12C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF3BCu;
            goto label_2ff3bc;
        }
    }
    ctx->pc = 0x2FF3ACu;
    // 0x2ff3ac: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x2ff3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x2ff3b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF3B0u;
    {
        const bool branch_taken_0x2ff3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff3b0) {
            ctx->pc = 0x2FF3C4u;
            goto label_2ff3c4;
        }
    }
    ctx->pc = 0x2FF3B8u;
    // 0x2ff3b8: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x2ff3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_2ff3bc:
    // 0x2ff3bc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2FF3BCu;
    {
        const bool branch_taken_0x2ff3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3BCu;
        // 0x2ff3c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff3bc) {
            ctx->pc = 0x2FF4DCu;
            goto label_2ff4dc;
        }
    }
    ctx->pc = 0x2FF3C4u;
label_2ff3c4:
    // 0x2ff3c4: 0xc0c000a  jal         func_300028
    ctx->pc = 0x2FF3C4u;
    SET_GPR_U32(ctx, 31, 0x2FF3CCu);
    ctx->pc = 0x2FF3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF3C4u;
    // 0x2ff3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300028u, 0x2FF3C4u, 0x2FF3CCu)) {
        return;
    }
    ctx->pc = 0x2FF3CCu;
label_2ff3cc:
    // 0x2ff3cc: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x2ff3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x2ff3d0: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FF3D0u;
    {
        const bool branch_taken_0x2ff3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3D0u;
        // 0x2ff3d4: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff3d0) {
            ctx->pc = 0x2FF438u;
            goto label_2ff438;
        }
    }
    ctx->pc = 0x2FF3D8u;
    // 0x2ff3d8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2ff3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2ff3dc:
    // 0x2ff3dc: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x2ff3dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2ff3e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF3E0u;
    {
        const bool branch_taken_0x2ff3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3E0u;
        // 0x2ff3e4: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff3e0) {
            ctx->pc = 0x2FF400u;
            goto label_2ff400;
        }
    }
    ctx->pc = 0x2FF3E8u;
    // 0x2ff3e8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2ff3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2ff3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff3f0: 0xc0bf75c  jal         func_2FDD70
    ctx->pc = 0x2FF3F0u;
    SET_GPR_U32(ctx, 31, 0x2FF3F8u);
    ctx->pc = 0x2FF3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF3F0u;
    // 0x2ff3f4: 0x24a50870  addiu       $a1, $a1, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x2FF3F0u, 0x2FF3F8u)) {
        return;
    }
    ctx->pc = 0x2FF3F8u;
label_2ff3f8:
    // 0x2ff3f8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2FF3F8u;
    {
        const bool branch_taken_0x2ff3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3F8u;
        // 0x2ff3fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff3f8) {
            ctx->pc = 0x2FF4DCu;
            goto label_2ff4dc;
        }
    }
    ctx->pc = 0x2FF400u;
label_2ff400:
    // 0x2ff400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ff400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff404: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FF404u;
    {
        const bool branch_taken_0x2ff404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FF408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF404u;
        // 0x2ff408: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff404) {
            ctx->pc = 0x2FF444u;
            goto label_2ff444;
        }
    }
    ctx->pc = 0x2FF40Cu;
    // 0x2ff40c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2ff40cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ff410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff414: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x2ff414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2ff418: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x2ff418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2ff41c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2ff41cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ff420: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2ff420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff424: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2ff424u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff428: 0xc0bfeb4  jal         func_2FFAD0
    ctx->pc = 0x2FF428u;
    SET_GPR_U32(ctx, 31, 0x2FF430u);
    ctx->pc = 0x2FF42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF428u;
    // 0x2ff42c: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFAD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FFAD0u, 0x2FF428u, 0x2FF430u)) {
        return;
    }
    ctx->pc = 0x2FF430u;
label_2ff430:
    // 0x2ff430: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FF430u;
    {
        const bool branch_taken_0x2ff430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF430u;
        // 0x2ff434: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff430) {
            ctx->pc = 0x2FF468u;
            goto label_2ff468;
        }
    }
    ctx->pc = 0x2FF438u;
label_2ff438:
    // 0x2ff438: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x2ff438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x2ff43c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2FF43Cu;
    {
        const bool branch_taken_0x2ff43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF43Cu;
        // 0x2ff440: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff43c) {
            ctx->pc = 0x2FF4DCu;
            goto label_2ff4dc;
        }
    }
    ctx->pc = 0x2FF444u;
label_2ff444:
    // 0x2ff444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff448: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ff448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff44c: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x2ff44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2ff450: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2ff450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff454: 0xc0c01b6  jal         func_3006D8
    ctx->pc = 0x2FF454u;
    SET_GPR_U32(ctx, 31, 0x2FF45Cu);
    ctx->pc = 0x2FF458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF454u;
    // 0x2ff458: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3006D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3006D8u, 0x2FF454u, 0x2FF45Cu)) {
        return;
    }
    ctx->pc = 0x2FF45Cu;
label_2ff45c:
    // 0x2ff45c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FF45Cu;
    {
        const bool branch_taken_0x2ff45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF45Cu;
        // 0x2ff460: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff45c) {
            ctx->pc = 0x2FF490u;
            goto label_2ff490;
        }
    }
    ctx->pc = 0x2FF464u;
    // 0x2ff464: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2ff464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2ff468:
    // 0x2ff468: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2ff468u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff46c: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x2ff46cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2ff470: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2ff470u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff474: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2ff474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ff478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff47c: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x2ff47cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2ff480: 0xc0bf9a8  jal         func_2FE6A0
    ctx->pc = 0x2FF480u;
    SET_GPR_U32(ctx, 31, 0x2FF488u);
    ctx->pc = 0x2FF484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF480u;
    // 0x2ff484: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE6A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FE6A0u, 0x2FF480u, 0x2FF488u)) {
        return;
    }
    ctx->pc = 0x2FF488u;
label_2ff488:
    // 0x2ff488: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF488u;
    {
        const bool branch_taken_0x2ff488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF488u;
        // 0x2ff48c: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff488) {
            ctx->pc = 0x2FF49Cu;
            goto label_2ff49c;
        }
    }
    ctx->pc = 0x2FF490u;
label_2ff490:
    // 0x2ff490: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x2ff490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x2ff494: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2FF494u;
    {
        const bool branch_taken_0x2ff494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF494u;
        // 0x2ff498: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff494) {
            ctx->pc = 0x2FF4DCu;
            goto label_2ff4dc;
        }
    }
    ctx->pc = 0x2FF49Cu;
label_2ff49c:
    // 0x2ff49c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF49Cu;
    {
        const bool branch_taken_0x2ff49c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff49c) {
            ctx->pc = 0x2FF4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF49Cu;
            // 0x2ff4a0: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF4BCu;
            goto label_2ff4bc;
        }
    }
    ctx->pc = 0x2FF4A4u;
    // 0x2ff4a4: 0x8e050820  lw          $a1, 0x820($s0)
    ctx->pc = 0x2ff4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x2ff4a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff4ac: 0xc0bfb5e  jal         func_2FED78
    ctx->pc = 0x2FF4ACu;
    SET_GPR_U32(ctx, 31, 0x2FF4B4u);
    ctx->pc = 0x2FF4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF4ACu;
    // 0x2ff4b0: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FED78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FED78u, 0x2FF4ACu, 0x2FF4B4u)) {
        return;
    }
    ctx->pc = 0x2FF4B4u;
label_2ff4b4:
    // 0x2ff4b4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2ff4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ff4b8: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x2ff4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_2ff4bc:
    // 0x2ff4bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ff4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ff4c0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2ff4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2ff4c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ff4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ff4c8: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2ff4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2ff4cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ff4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ff4d0: 0xae020820  sw          $v0, 0x820($s0)
    ctx->pc = 0x2ff4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2080), GPR_U32(ctx, 2));
    // 0x2ff4d4: 0x1000ff54  b           . + 4 + (-0xAC << 2)
    ctx->pc = 0x2FF4D4u;
    {
        const bool branch_taken_0x2ff4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF4D4u;
        // 0x2ff4d8: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff4d4) {
            ctx->pc = 0x2FF228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ff228;
        }
    }
    ctx->pc = 0x2FF4DCu;
label_2ff4dc:
    // 0x2ff4dc: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2ff4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2ff4e0:
    // 0x2ff4e0: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x2ff4e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ff4e4: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x2ff4e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ff4e8: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x2ff4e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ff4ec: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x2ff4ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ff4f0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2ff4f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ff4f4: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x2ff4f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ff4f8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2ff4f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ff4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF4FCu;
        // 0x2ff500: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF504u;
    // 0x2ff504: 0x0  nop
    ctx->pc = 0x2ff504u;
    // NOP
    ctx->pc = 0x2ff508u;
}
