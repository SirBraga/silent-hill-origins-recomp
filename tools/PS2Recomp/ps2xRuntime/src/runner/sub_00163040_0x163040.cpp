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

// Function: sub_00163040
// Address: 0x163040 - 0x163568
void sub_00163040_0x163040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163040_0x163040");
#endif

    switch (ctx->pc) {
        case 0x163090u: goto label_163090;
        case 0x163108u: goto label_163108;
        case 0x163130u: goto label_163130;
        case 0x16314cu: goto label_16314c;
        case 0x163168u: goto label_163168;
        case 0x163190u: goto label_163190;
        case 0x1631ccu: goto label_1631cc;
        case 0x163210u: goto label_163210;
        case 0x163254u: goto label_163254;
        case 0x16327cu: goto label_16327c;
        case 0x16328cu: goto label_16328c;
        case 0x1632a8u: goto label_1632a8;
        case 0x1632c0u: goto label_1632c0;
        case 0x1632d4u: goto label_1632d4;
        case 0x16333cu: goto label_16333c;
        case 0x1633a8u: goto label_1633a8;
        case 0x16346cu: goto label_16346c;
        case 0x163480u: goto label_163480;
        case 0x1634c8u: goto label_1634c8;
        default: break;
    }

    ctx->pc = 0x163040u;

    // 0x163040: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x163040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x163044: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x163044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x163048: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x163048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x16304c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16304cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163050: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x163050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x163054: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x163054u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163058: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x163058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x16305c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x16305cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163060: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x163060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x163064: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x163064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x163068: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x163068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x16306c: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x16306cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x163070: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x163070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x163074: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x163074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x163078: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x163078u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x16307c: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x16307cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x163080: 0x1040012d  beqz        $v0, . + 4 + (0x12D << 2)
    ctx->pc = 0x163080u;
    {
        const bool branch_taken_0x163080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163080u;
        // 0x163084: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163080) {
            ctx->pc = 0x163538u;
            goto label_163538;
        }
    }
    ctx->pc = 0x163088u;
    // 0x163088: 0x2961021  addu        $v0, $s4, $s6
    ctx->pc = 0x163088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    // 0x16308c: 0x0  nop
    ctx->pc = 0x16308cu;
    // NOP
label_163090:
    // 0x163090: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x163090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x163094: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x163094u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x163098: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x163098u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16309c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x16309cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1630a0: 0x10850004  beq         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1630A0u;
    {
        const bool branch_taken_0x1630a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1630A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630A0u;
        // 0x1630a4: 0xafa30064  sw          $v1, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1630a0) {
            ctx->pc = 0x1630B4u;
            goto label_1630b4;
        }
    }
    ctx->pc = 0x1630A8u;
    // 0x1630a8: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1630a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1630ac: 0x1060011d  beqz        $v1, . + 4 + (0x11D << 2)
    ctx->pc = 0x1630ACu;
    {
        const bool branch_taken_0x1630ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1630B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630ACu;
        // 0x1630b0: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1630ac) {
            ctx->pc = 0x163524u;
            goto label_163524;
        }
    }
    ctx->pc = 0x1630B4u;
label_1630b4:
    // 0x1630b4: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x1630b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1630b8: 0x2c61021  addu        $v0, $s6, $a2
    ctx->pc = 0x1630b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x1630bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1630bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1630c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1630c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1630c4: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x1630c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1630c8: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x1630c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x1630cc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1630ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1630d0: 0x27a20025  addiu       $v0, $sp, 0x25
    ctx->pc = 0x1630d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 37));
    // 0x1630d4: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1630d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x1630d8: 0x27a20026  addiu       $v0, $sp, 0x26
    ctx->pc = 0x1630d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 38));
    // 0x1630dc: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1630dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1630e0: 0x27a20027  addiu       $v0, $sp, 0x27
    ctx->pc = 0x1630e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 39));
    // 0x1630e4: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x1630e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x1630e8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1630e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1630ec: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1630ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x1630f0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1630f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1630f4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1630F4u;
    {
        const bool branch_taken_0x1630f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1630F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630F4u;
        // 0x1630f8: 0x27b50024  addiu       $s5, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1630f4) {
            ctx->pc = 0x163120u;
            goto label_163120;
        }
    }
    ctx->pc = 0x1630FCu;
    // 0x1630fc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1630fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x163100: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x163100u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x163104: 0x0  nop
    ctx->pc = 0x163104u;
    // NOP
label_163108:
    // 0x163108: 0x2d21021  addu        $v0, $s6, $s2
    ctx->pc = 0x163108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x16310c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x16310cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163110: 0x0  nop
    ctx->pc = 0x163110u;
    // NOP
    // 0x163114: 0x0  nop
    ctx->pc = 0x163114u;
    // NOP
    // 0x163118: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x163118u;
    {
        const bool branch_taken_0x163118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x163118) {
            ctx->pc = 0x16311Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163118u;
            // 0x16311c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163108;
        }
    }
    ctx->pc = 0x163120u;
label_163120:
    // 0x163120: 0x2468823  subu        $s1, $s2, $a2
    ctx->pc = 0x163120u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x163124: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x163124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163128: 0xc0c4bea  jal         func_312FA8
    ctx->pc = 0x163128u;
    SET_GPR_U32(ctx, 31, 0x163130u);
    ctx->pc = 0x16312Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163128u;
    // 0x16312c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x163128u, 0x163130u)) {
        return;
    }
    ctx->pc = 0x163130u;
label_163130:
    // 0x163130: 0x3b11021  addu        $v0, $sp, $s1
    ctx->pc = 0x163130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x163134: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x163134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x163138: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x163138u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16313c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x16313cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x163140: 0x26053e50  addiu       $a1, $s0, 0x3E50
    ctx->pc = 0x163140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15952));
    // 0x163144: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x163144u;
    SET_GPR_U32(ctx, 31, 0x16314Cu);
    ctx->pc = 0x163148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163144u;
    // 0x163148: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x163144u, 0x16314Cu)) {
        return;
    }
    ctx->pc = 0x16314Cu;
label_16314c:
    // 0x16314c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16314cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163150: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x163150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x163154: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x163154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x163158: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x163158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x16315c: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x16315cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x163160: 0x265e0001  addiu       $fp, $s2, 0x1
    ctx->pc = 0x163160u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x163164: 0x0  nop
    ctx->pc = 0x163164u;
    // NOP
label_163168:
    // 0x163168: 0x8ee26af4  lw          $v0, 0x6AF4($s7)
    ctx->pc = 0x163168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 27380)));
    // 0x16316c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x16316cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x163170: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x163170u;
    {
        const bool branch_taken_0x163170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163170u;
        // 0x163174: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163170) {
            ctx->pc = 0x16319Cu;
            goto label_16319c;
        }
    }
    ctx->pc = 0x163178u;
    // 0x163178: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x163178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16317c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x16317cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x163180: 0x24426494  addiu       $v0, $v0, 0x6494
    ctx->pc = 0x163180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25748));
    // 0x163184: 0x2e28021  addu        $s0, $s7, $v0
    ctx->pc = 0x163184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x163188: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x163188u;
    SET_GPR_U32(ctx, 31, 0x163190u);
    ctx->pc = 0x16318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163188u;
    // 0x16318c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x163188u, 0x163190u)) {
        return;
    }
    ctx->pc = 0x163190u;
label_163190:
    // 0x163190: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x163190u;
    {
        const bool branch_taken_0x163190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163190) {
            ctx->pc = 0x163194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163190u;
            // 0x163194: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163168;
        }
    }
    ctx->pc = 0x163198u;
    // 0x163198: 0xafb0006c  sw          $s0, 0x6C($sp)
    ctx->pc = 0x163198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 16));
label_16319c:
    // 0x16319c: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x16319cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1631a0: 0x14c0000e  bnez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1631A0u;
    {
        const bool branch_taken_0x1631a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1631A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631A0u;
        // 0x1631a4: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631a0) {
            ctx->pc = 0x1631DCu;
            goto label_1631dc;
        }
    }
    ctx->pc = 0x1631A8u;
    // 0x1631a8: 0x8ee26af4  lw          $v0, 0x6AF4($s7)
    ctx->pc = 0x1631a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 27380)));
    // 0x1631ac: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1631acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1631b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1631b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1631b4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1631b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1631b8: 0x24426494  addiu       $v0, $v0, 0x6494
    ctx->pc = 0x1631b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25748));
    // 0x1631bc: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1631bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1631c0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1631c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1631c4: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x1631C4u;
    SET_GPR_U32(ctx, 31, 0x1631CCu);
    ctx->pc = 0x1631C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1631C4u;
    // 0x1631c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x1631C4u, 0x1631CCu)) {
        return;
    }
    ctx->pc = 0x1631CCu;
label_1631cc:
    // 0x1631cc: 0x8ee36af4  lw          $v1, 0x6AF4($s7)
    ctx->pc = 0x1631ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 27380)));
    // 0x1631d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1631d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1631d4: 0xaee36af4  sw          $v1, 0x6AF4($s7)
    ctx->pc = 0x1631d4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 27380), GPR_U32(ctx, 3));
    // 0x1631d8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1631d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1631dc:
    // 0x1631dc: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x1631dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1631e0: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1631e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1631e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1631e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1631e8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1631e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1631ec: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x1631ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1631f0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1631F0u;
    {
        const bool branch_taken_0x1631f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1631F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631F0u;
        // 0x1631f4: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631f0) {
            ctx->pc = 0x163230u;
            goto label_163230;
        }
    }
    ctx->pc = 0x1631F8u;
    // 0x1631f8: 0x2d01021  addu        $v0, $s6, $s0
    ctx->pc = 0x1631f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x1631fc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1631fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x163200: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x163200u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163204: 0x5066000a  beql        $v1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x163204u;
    {
        const bool branch_taken_0x163204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x163204) {
            ctx->pc = 0x163208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163204u;
            // 0x163208: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163230u;
            goto label_163230;
        }
    }
    ctx->pc = 0x16320Cu;
    // 0x16320c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16320cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_163210:
    // 0x163210: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x163210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x163214: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x163214u;
    {
        const bool branch_taken_0x163214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163214u;
        // 0x163218: 0x2d01021  addu        $v0, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163214) {
            ctx->pc = 0x163230u;
            goto label_163230;
        }
    }
    ctx->pc = 0x16321Cu;
    // 0x16321c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x16321cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163220: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x163220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x163224: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x163224u;
    {
        const bool branch_taken_0x163224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163224) {
            ctx->pc = 0x163228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163224u;
            // 0x163228: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163210;
        }
    }
    ctx->pc = 0x16322Cu;
    // 0x16322c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x16322cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163230:
    // 0x163230: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x163230u;
    {
        const bool branch_taken_0x163230 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x163234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163230u;
        // 0x163234: 0x2121023  subu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163230) {
            ctx->pc = 0x16323Cu;
            goto label_16323c;
        }
    }
    ctx->pc = 0x163238u;
    // 0x163238: 0x2921023  subu        $v0, $s4, $s2
    ctx->pc = 0x163238u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_16323c:
    // 0x16323c: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x16323cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x163240: 0x2de2821  addu        $a1, $s6, $fp
    ctx->pc = 0x163240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x163244: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x163244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163248: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x163248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16324c: 0xc0c4bea  jal         func_312FA8
    ctx->pc = 0x16324Cu;
    SET_GPR_U32(ctx, 31, 0x163254u);
    ctx->pc = 0x163250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16324Cu;
    // 0x163250: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312FA8u, 0x16324Cu, 0x163254u)) {
        return;
    }
    ctx->pc = 0x163254u;
label_163254:
    // 0x163254: 0x3b11821  addu        $v1, $sp, $s1
    ctx->pc = 0x163254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x163258: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x163258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16325c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x16325Cu;
    {
        const bool branch_taken_0x16325c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x163260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16325Cu;
        // 0x163260: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16325c) {
            ctx->pc = 0x163280u;
            goto label_163280;
        }
    }
    ctx->pc = 0x163264u;
    // 0x163264: 0x2161021  addu        $v0, $s0, $s6
    ctx->pc = 0x163264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x163268: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x163268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16326c: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x16326cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x163270: 0xa3a00051  sb          $zero, 0x51($sp)
    ctx->pc = 0x163270u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 81), (uint8_t)GPR_U32(ctx, 0));
    // 0x163274: 0xc0c53de  jal         func_314F78
    ctx->pc = 0x163274u;
    SET_GPR_U32(ctx, 31, 0x16327Cu);
    ctx->pc = 0x163278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163274u;
    // 0x163278: 0xa3a30050  sb          $v1, 0x50($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314F78u, 0x163274u, 0x16327Cu)) {
        return;
    }
    ctx->pc = 0x16327Cu;
label_16327c:
    // 0x16327c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x16327cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163280:
    // 0x163280: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x163280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163284: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x163284u;
    SET_GPR_U32(ctx, 31, 0x16328Cu);
    ctx->pc = 0x163288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163284u;
    // 0x163288: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x163284u, 0x16328Cu)) {
        return;
    }
    ctx->pc = 0x16328Cu;
label_16328c:
    // 0x16328c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16328cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163290: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x163290u;
    {
        const bool branch_taken_0x163290 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x163294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163290u;
        // 0x163294: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163290) {
            ctx->pc = 0x1633A0u;
            goto label_1633a0;
        }
    }
    ctx->pc = 0x163298u;
    // 0x163298: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x163298u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x16329c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16329Cu;
    {
        const bool branch_taken_0x16329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1632A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16329Cu;
        // 0x1632a0: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16329c) {
            ctx->pc = 0x1632B8u;
            goto label_1632b8;
        }
    }
    ctx->pc = 0x1632A4u;
    // 0x1632a4: 0x0  nop
    ctx->pc = 0x1632a4u;
    // NOP
label_1632a8:
    // 0x1632a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1632a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1632ac: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1632acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1632b0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1632B0u;
    {
        const bool branch_taken_0x1632b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1632b0) {
            ctx->pc = 0x163334u;
            goto label_163334;
        }
    }
    ctx->pc = 0x1632B8u;
label_1632b8:
    // 0x1632b8: 0xc0c53de  jal         func_314F78
    ctx->pc = 0x1632B8u;
    SET_GPR_U32(ctx, 31, 0x1632C0u);
    ctx->pc = 0x1632BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1632B8u;
    // 0x1632bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314F78u, 0x1632B8u, 0x1632C0u)) {
        return;
    }
    ctx->pc = 0x1632C0u;
label_1632c0:
    // 0x1632c0: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x1632c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1632c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1632c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1632c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1632c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1632cc: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x1632CCu;
    SET_GPR_U32(ctx, 31, 0x1632D4u);
    ctx->pc = 0x1632D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1632CCu;
    // 0x1632d0: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x1632CCu, 0x1632D4u)) {
        return;
    }
    ctx->pc = 0x1632D4u;
label_1632d4:
    // 0x1632d4: 0x93a30044  lbu         $v1, 0x44($sp)
    ctx->pc = 0x1632d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1632d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1632d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1632dc: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1632dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1632e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1632e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1632e4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1632e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1632e8: 0xa0700000  sb          $s0, 0x0($v1)
    ctx->pc = 0x1632e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x1632ec: 0x93a20044  lbu         $v0, 0x44($sp)
    ctx->pc = 0x1632ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1632f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1632f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1632f4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1632f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1632f8: 0xa0540000  sb          $s4, 0x0($v0)
    ctx->pc = 0x1632f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x1632fc: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1632fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x163300: 0x93a30044  lbu         $v1, 0x44($sp)
    ctx->pc = 0x163300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x163304: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163308: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x163308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16330c: 0xa0730000  sb          $s3, 0x0($v1)
    ctx->pc = 0x16330cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x163310: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x163310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x163314: 0x93a20044  lbu         $v0, 0x44($sp)
    ctx->pc = 0x163314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x163318: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16331c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163320: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x163320u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x163324: 0x93a30044  lbu         $v1, 0x44($sp)
    ctx->pc = 0x163324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x163328: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x163328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16332c: 0x1620ffde  bnez        $s1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x16332Cu;
    {
        const bool branch_taken_0x16332c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x163330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16332Cu;
        // 0x163330: 0xa3a20044  sb          $v0, 0x44($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16332c) {
            ctx->pc = 0x1632A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1632a8;
        }
    }
    ctx->pc = 0x163334u;
label_163334:
    // 0x163334: 0xc0c53de  jal         func_314F78
    ctx->pc = 0x163334u;
    SET_GPR_U32(ctx, 31, 0x16333Cu);
    ctx->pc = 0x163338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163334u;
    // 0x163338: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314F78u, 0x163334u, 0x16333Cu)) {
        return;
    }
    ctx->pc = 0x16333Cu;
label_16333c:
    // 0x16333c: 0x93a30044  lbu         $v1, 0x44($sp)
    ctx->pc = 0x16333cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x163340: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x163340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x163344: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x163344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x163348: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x163348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16334c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16334cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163350: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x163350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x163354: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x163354u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x163358: 0x93a20044  lbu         $v0, 0x44($sp)
    ctx->pc = 0x163358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x16335c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16335cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163360: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x163360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x163364: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x163364u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x163368: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x163368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x16336c: 0x93a30044  lbu         $v1, 0x44($sp)
    ctx->pc = 0x16336cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x163370: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163374: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x163374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163378: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x163378u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x16337c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16337cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x163380: 0x93a20044  lbu         $v0, 0x44($sp)
    ctx->pc = 0x163380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x163384: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163388: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x163388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16338c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x16338cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x163390: 0x93a30044  lbu         $v1, 0x44($sp)
    ctx->pc = 0x163390u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x163394: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x163394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x163398: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x163398u;
    {
        const bool branch_taken_0x163398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163398u;
        // 0x16339c: 0xa3a30044  sb          $v1, 0x44($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163398) {
            ctx->pc = 0x163460u;
            goto label_163460;
        }
    }
    ctx->pc = 0x1633A0u;
label_1633a0:
    // 0x1633a0: 0xc0c53de  jal         func_314F78
    ctx->pc = 0x1633A0u;
    SET_GPR_U32(ctx, 31, 0x1633A8u);
    ctx->pc = 0x1633A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1633A0u;
    // 0x1633a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314F78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314F78u, 0x1633A0u, 0x1633A8u)) {
        return;
    }
    ctx->pc = 0x1633A8u;
label_1633a8:
    // 0x1633a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1633a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1633ac: 0x2402270d  addiu       $v0, $zero, 0x270D
    ctx->pc = 0x1633acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9997));
    // 0x1633b0: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1633B0u;
    {
        const bool branch_taken_0x1633b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1633B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633B0u;
        // 0x1633b4: 0x2402270e  addiu       $v0, $zero, 0x270E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9998));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633b0) {
            ctx->pc = 0x1633C8u;
            goto label_1633c8;
        }
    }
    ctx->pc = 0x1633B8u;
    // 0x1633b8: 0x93a20044  lbu         $v0, 0x44($sp)
    ctx->pc = 0x1633b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1633bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1633bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1633c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1633C0u;
    {
        const bool branch_taken_0x1633c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633C0u;
        // 0x1633c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633c0) {
            ctx->pc = 0x1633ECu;
            goto label_1633ec;
        }
    }
    ctx->pc = 0x1633C8u;
label_1633c8:
    // 0x1633c8: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1633C8u;
    {
        const bool branch_taken_0x1633c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1633CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633C8u;
        // 0x1633cc: 0x93a20044  lbu         $v0, 0x44($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633c8) {
            ctx->pc = 0x1633D8u;
            goto label_1633d8;
        }
    }
    ctx->pc = 0x1633D0u;
    // 0x1633d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1633D0u;
    {
        const bool branch_taken_0x1633d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633D0u;
        // 0x1633d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633d0) {
            ctx->pc = 0x1633FCu;
            goto label_1633fc;
        }
    }
    ctx->pc = 0x1633D8u;
label_1633d8:
    // 0x1633d8: 0x4a10009  bgez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1633D8u;
    {
        const bool branch_taken_0x1633d8 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1633DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633D8u;
        // 0x1633dc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633d8) {
            ctx->pc = 0x163400u;
            goto label_163400;
        }
    }
    ctx->pc = 0x1633E0u;
    // 0x1633e0: 0x93a20044  lbu         $v0, 0x44($sp)
    ctx->pc = 0x1633e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1633e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1633e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1633e8: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x1633e8u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
label_1633ec:
    // 0x1633ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1633ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1633f0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1633f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1633f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1633F4u;
    {
        const bool branch_taken_0x1633f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633F4u;
        // 0x1633f8: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633f4) {
            ctx->pc = 0x163408u;
            goto label_163408;
        }
    }
    ctx->pc = 0x1633FCu;
label_1633fc:
    // 0x1633fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1633fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_163400:
    // 0x163400: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x163400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x163404: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x163404u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_163408:
    // 0x163408: 0x93a30044  lbu         $v1, 0x44($sp)
    ctx->pc = 0x163408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x16340c: 0x38a2270f  xori        $v0, $a1, 0x270F
    ctx->pc = 0x16340cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)9999);
    // 0x163410: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x163410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x163414: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x163414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x163418: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16341c: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x16341cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4));
    // 0x163420: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x163420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x163424: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x163424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x163428: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x163428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x16342c: 0x93a20044  lbu         $v0, 0x44($sp)
    ctx->pc = 0x16342cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x163430: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163434: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x163434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x163438: 0xa0540000  sb          $s4, 0x0($v0)
    ctx->pc = 0x163438u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x16343c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16343cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x163440: 0x93a30044  lbu         $v1, 0x44($sp)
    ctx->pc = 0x163440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x163444: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x163444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x163448: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16344c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x16344cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x163450: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x163450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x163454: 0x93a20044  lbu         $v0, 0x44($sp)
    ctx->pc = 0x163454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x163458: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16345c: 0xa3a20044  sb          $v0, 0x44($sp)
    ctx->pc = 0x16345cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 2));
label_163460:
    // 0x163460: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x163460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x163464: 0xc058b9e  jal         func_162E78
    ctx->pc = 0x163464u;
    SET_GPR_U32(ctx, 31, 0x16346Cu);
    ctx->pc = 0x163468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163464u;
    // 0x163468: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162E78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x162E78u, 0x163464u, 0x16346Cu)) {
        return;
    }
    ctx->pc = 0x16346Cu;
label_16346c:
    // 0x16346c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16346cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163470: 0x16000028  bnez        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x163470u;
    {
        const bool branch_taken_0x163470 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x163474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163470u;
        // 0x163474: 0x8fa6006c  lw          $a2, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163470) {
            ctx->pc = 0x163514u;
            goto label_163514;
        }
    }
    ctx->pc = 0x163478u;
    // 0x163478: 0xc05951e  jal         func_165478
    ctx->pc = 0x163478u;
    SET_GPR_U32(ctx, 31, 0x163480u);
    ctx->pc = 0x16347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163478u;
    // 0x16347c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165478u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165478u, 0x163478u, 0x163480u)) {
        return;
    }
    ctx->pc = 0x163480u;
label_163480:
    // 0x163480: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x163480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x163484: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x163484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163488: 0xac650040  sw          $a1, 0x40($v1)
    ctx->pc = 0x163488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 5));
    // 0x16348c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x16348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x163490: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x163490u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x163494: 0x93a30044  lbu         $v1, 0x44($sp)
    ctx->pc = 0x163494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x163498: 0xa0a30024  sb          $v1, 0x24($a1)
    ctx->pc = 0x163498u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 36), (uint8_t)GPR_U32(ctx, 3));
    // 0x16349c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16349cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1634a0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1634a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1634a4: 0x93a20044  lbu         $v0, 0x44($sp)
    ctx->pc = 0x1634a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1634a8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1634a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1634ac: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1634ACu;
    {
        const bool branch_taken_0x1634ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1634B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634ACu;
        // 0x1634b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634ac) {
            ctx->pc = 0x163518u;
            goto label_163518;
        }
    }
    ctx->pc = 0x1634B4u;
    // 0x1634b4: 0x24a40005  addiu       $a0, $a1, 0x5
    ctx->pc = 0x1634b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x1634b8: 0x8fa80078  lw          $t0, 0x78($sp)
    ctx->pc = 0x1634b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1634bc: 0x8fa7007c  lw          $a3, 0x7C($sp)
    ctx->pc = 0x1634bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1634c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1634c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1634c4: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1634c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1634c8:
    // 0x1634c8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1634c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1634cc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1634ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1634d0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1634d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1634d4: 0xa083ffff  sb          $v1, -0x1($a0)
    ctx->pc = 0x1634d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 3));
    // 0x1634d8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1634d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1634dc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1634dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1634e0: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x1634e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1634e4: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1634e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1634e8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1634e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1634ec: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1634ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1634f0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1634f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1634f4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1634f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1634f8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1634f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1634fc: 0x93a20044  lbu         $v0, 0x44($sp)
    ctx->pc = 0x1634fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x163500: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x163500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x163504: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x163504u;
    {
        const bool branch_taken_0x163504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163504u;
        // 0x163508: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163504) {
            ctx->pc = 0x1634C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1634c8;
        }
    }
    ctx->pc = 0x16350Cu;
    // 0x16350c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16350Cu;
    {
        const bool branch_taken_0x16350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16350Cu;
        // 0x163510: 0x8fa20064  lw          $v0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16350c) {
            ctx->pc = 0x16351Cu;
            goto label_16351c;
        }
    }
    ctx->pc = 0x163514u;
label_163514:
    // 0x163514: 0xacd00040  sw          $s0, 0x40($a2)
    ctx->pc = 0x163514u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 16));
label_163518:
    // 0x163518: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x163518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_16351c:
    // 0x16351c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16351Cu;
    {
        const bool branch_taken_0x16351c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16351Cu;
        // 0x163520: 0x8fa60070  lw          $a2, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16351c) {
            ctx->pc = 0x163538u;
            goto label_163538;
        }
    }
    ctx->pc = 0x163524u;
label_163524:
    // 0x163524: 0x8fb40070  lw          $s4, 0x70($sp)
    ctx->pc = 0x163524u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x163528: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x163528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x16352c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x16352cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163530: 0x1460fed7  bnez        $v1, . + 4 + (-0x129 << 2)
    ctx->pc = 0x163530u;
    {
        const bool branch_taken_0x163530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163530u;
        // 0x163534: 0x2961021  addu        $v0, $s4, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163530) {
            ctx->pc = 0x163090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163090;
        }
    }
    ctx->pc = 0x163538u;
label_163538:
    // 0x163538: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x163538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x16353c: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x16353cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x163540: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x163540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x163544: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x163544u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x163548: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x163548u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16354c: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x16354cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x163550: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x163550u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x163554: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x163554u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x163558: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x163558u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16355c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x16355cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x163560: 0x3e00008  jr          $ra
    ctx->pc = 0x163560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163560u;
        // 0x163564: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163568u;
}
