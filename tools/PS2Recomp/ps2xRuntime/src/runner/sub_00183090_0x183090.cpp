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

// Function: sub_00183090
// Address: 0x183090 - 0x183338
void sub_00183090_0x183090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183090_0x183090");
#endif

    switch (ctx->pc) {
        case 0x183090u: goto label_183090;
        case 0x183094u: goto label_183094;
        case 0x183098u: goto label_183098;
        case 0x18309cu: goto label_18309c;
        case 0x1830a0u: goto label_1830a0;
        case 0x1830a4u: goto label_1830a4;
        case 0x1830a8u: goto label_1830a8;
        case 0x1830acu: goto label_1830ac;
        case 0x1830b0u: goto label_1830b0;
        case 0x1830b4u: goto label_1830b4;
        case 0x1830b8u: goto label_1830b8;
        case 0x1830bcu: goto label_1830bc;
        case 0x1830c0u: goto label_1830c0;
        case 0x1830c4u: goto label_1830c4;
        case 0x1830c8u: goto label_1830c8;
        case 0x1830ccu: goto label_1830cc;
        case 0x1830d0u: goto label_1830d0;
        case 0x1830d4u: goto label_1830d4;
        case 0x1830d8u: goto label_1830d8;
        case 0x1830dcu: goto label_1830dc;
        case 0x1830e0u: goto label_1830e0;
        case 0x1830e4u: goto label_1830e4;
        case 0x1830e8u: goto label_1830e8;
        case 0x1830ecu: goto label_1830ec;
        case 0x1830f0u: goto label_1830f0;
        case 0x1830f4u: goto label_1830f4;
        case 0x1830f8u: goto label_1830f8;
        case 0x1830fcu: goto label_1830fc;
        case 0x183100u: goto label_183100;
        case 0x183104u: goto label_183104;
        case 0x183108u: goto label_183108;
        case 0x18310cu: goto label_18310c;
        case 0x183110u: goto label_183110;
        case 0x183114u: goto label_183114;
        case 0x183118u: goto label_183118;
        case 0x18311cu: goto label_18311c;
        case 0x183120u: goto label_183120;
        case 0x183124u: goto label_183124;
        case 0x183128u: goto label_183128;
        case 0x18312cu: goto label_18312c;
        case 0x183130u: goto label_183130;
        case 0x183134u: goto label_183134;
        case 0x183138u: goto label_183138;
        case 0x18313cu: goto label_18313c;
        case 0x183140u: goto label_183140;
        case 0x183144u: goto label_183144;
        case 0x183148u: goto label_183148;
        case 0x18314cu: goto label_18314c;
        case 0x183150u: goto label_183150;
        case 0x183154u: goto label_183154;
        case 0x183158u: goto label_183158;
        case 0x18315cu: goto label_18315c;
        case 0x183160u: goto label_183160;
        case 0x183164u: goto label_183164;
        case 0x183168u: goto label_183168;
        case 0x18316cu: goto label_18316c;
        case 0x183170u: goto label_183170;
        case 0x183174u: goto label_183174;
        case 0x183178u: goto label_183178;
        case 0x18317cu: goto label_18317c;
        case 0x183180u: goto label_183180;
        case 0x183184u: goto label_183184;
        case 0x183188u: goto label_183188;
        case 0x18318cu: goto label_18318c;
        case 0x183190u: goto label_183190;
        case 0x183194u: goto label_183194;
        case 0x183198u: goto label_183198;
        case 0x18319cu: goto label_18319c;
        case 0x1831a0u: goto label_1831a0;
        case 0x1831a4u: goto label_1831a4;
        case 0x1831a8u: goto label_1831a8;
        case 0x1831acu: goto label_1831ac;
        case 0x1831b0u: goto label_1831b0;
        case 0x1831b4u: goto label_1831b4;
        case 0x1831b8u: goto label_1831b8;
        case 0x1831bcu: goto label_1831bc;
        case 0x1831c0u: goto label_1831c0;
        case 0x1831c4u: goto label_1831c4;
        case 0x1831c8u: goto label_1831c8;
        case 0x1831ccu: goto label_1831cc;
        case 0x1831d0u: goto label_1831d0;
        case 0x1831d4u: goto label_1831d4;
        case 0x1831d8u: goto label_1831d8;
        case 0x1831dcu: goto label_1831dc;
        case 0x1831e0u: goto label_1831e0;
        case 0x1831e4u: goto label_1831e4;
        case 0x1831e8u: goto label_1831e8;
        case 0x1831ecu: goto label_1831ec;
        case 0x1831f0u: goto label_1831f0;
        case 0x1831f4u: goto label_1831f4;
        case 0x1831f8u: goto label_1831f8;
        case 0x1831fcu: goto label_1831fc;
        case 0x183200u: goto label_183200;
        case 0x183204u: goto label_183204;
        case 0x183208u: goto label_183208;
        case 0x18320cu: goto label_18320c;
        case 0x183210u: goto label_183210;
        case 0x183214u: goto label_183214;
        case 0x183218u: goto label_183218;
        case 0x18321cu: goto label_18321c;
        case 0x183220u: goto label_183220;
        case 0x183224u: goto label_183224;
        case 0x183228u: goto label_183228;
        case 0x18322cu: goto label_18322c;
        case 0x183230u: goto label_183230;
        case 0x183234u: goto label_183234;
        case 0x183238u: goto label_183238;
        case 0x18323cu: goto label_18323c;
        case 0x183240u: goto label_183240;
        case 0x183244u: goto label_183244;
        case 0x183248u: goto label_183248;
        case 0x18324cu: goto label_18324c;
        case 0x183250u: goto label_183250;
        case 0x183254u: goto label_183254;
        case 0x183258u: goto label_183258;
        case 0x18325cu: goto label_18325c;
        case 0x183260u: goto label_183260;
        case 0x183264u: goto label_183264;
        case 0x183268u: goto label_183268;
        case 0x18326cu: goto label_18326c;
        case 0x183270u: goto label_183270;
        case 0x183274u: goto label_183274;
        case 0x183278u: goto label_183278;
        case 0x18327cu: goto label_18327c;
        case 0x183280u: goto label_183280;
        case 0x183284u: goto label_183284;
        case 0x183288u: goto label_183288;
        case 0x18328cu: goto label_18328c;
        case 0x183290u: goto label_183290;
        case 0x183294u: goto label_183294;
        case 0x183298u: goto label_183298;
        case 0x18329cu: goto label_18329c;
        case 0x1832a0u: goto label_1832a0;
        case 0x1832a4u: goto label_1832a4;
        case 0x1832a8u: goto label_1832a8;
        case 0x1832acu: goto label_1832ac;
        case 0x1832b0u: goto label_1832b0;
        case 0x1832b4u: goto label_1832b4;
        case 0x1832b8u: goto label_1832b8;
        case 0x1832bcu: goto label_1832bc;
        case 0x1832c0u: goto label_1832c0;
        case 0x1832c4u: goto label_1832c4;
        case 0x1832c8u: goto label_1832c8;
        case 0x1832ccu: goto label_1832cc;
        case 0x1832d0u: goto label_1832d0;
        case 0x1832d4u: goto label_1832d4;
        case 0x1832d8u: goto label_1832d8;
        case 0x1832dcu: goto label_1832dc;
        case 0x1832e0u: goto label_1832e0;
        case 0x1832e4u: goto label_1832e4;
        case 0x1832e8u: goto label_1832e8;
        case 0x1832ecu: goto label_1832ec;
        case 0x1832f0u: goto label_1832f0;
        case 0x1832f4u: goto label_1832f4;
        case 0x1832f8u: goto label_1832f8;
        case 0x1832fcu: goto label_1832fc;
        case 0x183300u: goto label_183300;
        case 0x183304u: goto label_183304;
        case 0x183308u: goto label_183308;
        case 0x18330cu: goto label_18330c;
        case 0x183310u: goto label_183310;
        case 0x183314u: goto label_183314;
        case 0x183318u: goto label_183318;
        case 0x18331cu: goto label_18331c;
        case 0x183320u: goto label_183320;
        case 0x183324u: goto label_183324;
        case 0x183328u: goto label_183328;
        case 0x18332cu: goto label_18332c;
        case 0x183330u: goto label_183330;
        case 0x183334u: goto label_183334;
        default: break;
    }

    ctx->pc = 0x183090u;

label_183090:
    // 0x183090: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x183090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_183094:
    // 0x183094: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x183094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_183098:
    // 0x183098: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x183098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
label_18309c:
    // 0x18309c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x18309cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1830a0:
    // 0x1830a0: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x1830a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
label_1830a4:
    // 0x1830a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1830a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1830a8:
    // 0x1830a8: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x1830a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
label_1830ac:
    // 0x1830ac: 0x24530fd8  addiu       $s3, $v0, 0xFD8
    ctx->pc = 0x1830acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4056));
label_1830b0:
    // 0x1830b0: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x1830b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
label_1830b4:
    // 0x1830b4: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1830b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
label_1830b8:
    // 0x1830b8: 0xe7b801a0  swc1        $f24, 0x1A0($sp)
    ctx->pc = 0x1830b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_1830bc:
    // 0x1830bc: 0xe7b70198  swc1        $f23, 0x198($sp)
    ctx->pc = 0x1830bcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_1830c0:
    // 0x1830c0: 0xe7b60190  swc1        $f22, 0x190($sp)
    ctx->pc = 0x1830c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_1830c4:
    // 0x1830c4: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x1830c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_1830c8:
    // 0x1830c8: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x1830c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_1830cc:
    // 0x1830cc: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1830ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1830d0:
    // 0x1830d0: 0x40f809  jalr        $v0
label_1830d4:
    if (ctx->pc == 0x1830D4u) {
        ctx->pc = 0x1830D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1830D0u;
        // 0x1830d4: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1830D8u;
        goto label_1830d8;
    }
    ctx->pc = 0x1830D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1830D8u);
        ctx->pc = 0x1830D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1830D0u;
        // 0x1830d4: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1830D0u, 0x1830D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1830D8u;
label_1830d8:
    // 0x1830d8: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1830d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1830dc:
    // 0x1830dc: 0x27a50114  addiu       $a1, $sp, 0x114
    ctx->pc = 0x1830dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_1830e0:
    // 0x1830e0: 0x40f809  jalr        $v0
label_1830e4:
    if (ctx->pc == 0x1830E4u) {
        ctx->pc = 0x1830E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1830E0u;
        // 0x1830e4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1830E8u;
        goto label_1830e8;
    }
    ctx->pc = 0x1830E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1830E8u);
        ctx->pc = 0x1830E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1830E0u;
        // 0x1830e4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1830E0u, 0x1830E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1830E8u;
label_1830e8:
    // 0x1830e8: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1830e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1830ec:
    // 0x1830ec: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x1830ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_1830f0:
    // 0x1830f0: 0x40f809  jalr        $v0
label_1830f4:
    if (ctx->pc == 0x1830F4u) {
        ctx->pc = 0x1830F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1830F0u;
        // 0x1830f4: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1830F8u;
        goto label_1830f8;
    }
    ctx->pc = 0x1830F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1830F8u);
        ctx->pc = 0x1830F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1830F0u;
        // 0x1830f4: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1830F0u, 0x1830F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1830F8u;
label_1830f8:
    // 0x1830f8: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1830f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1830fc:
    // 0x1830fc: 0x27a5011c  addiu       $a1, $sp, 0x11C
    ctx->pc = 0x1830fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_183100:
    // 0x183100: 0x40f809  jalr        $v0
label_183104:
    if (ctx->pc == 0x183104u) {
        ctx->pc = 0x183104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183100u;
        // 0x183104: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183108u;
        goto label_183108;
    }
    ctx->pc = 0x183100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183108u);
        ctx->pc = 0x183104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183100u;
        // 0x183104: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183100u, 0x183108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183108u;
label_183108:
    // 0x183108: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x183108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_18310c:
    // 0x18310c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x18310cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_183110:
    // 0x183110: 0x40f809  jalr        $v0
label_183114:
    if (ctx->pc == 0x183114u) {
        ctx->pc = 0x183114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183110u;
        // 0x183114: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183118u;
        goto label_183118;
    }
    ctx->pc = 0x183110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183118u);
        ctx->pc = 0x183114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183110u;
        // 0x183114: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183110u, 0x183118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183118u;
label_183118:
    // 0x183118: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x183118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_18311c:
    // 0x18311c: 0x27a50124  addiu       $a1, $sp, 0x124
    ctx->pc = 0x18311cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_183120:
    // 0x183120: 0x40f809  jalr        $v0
label_183124:
    if (ctx->pc == 0x183124u) {
        ctx->pc = 0x183124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183120u;
        // 0x183124: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183128u;
        goto label_183128;
    }
    ctx->pc = 0x183120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183128u);
        ctx->pc = 0x183124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183120u;
        // 0x183124: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183120u, 0x183128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183128u;
label_183128:
    // 0x183128: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x183128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_18312c:
    // 0x18312c: 0x27a50128  addiu       $a1, $sp, 0x128
    ctx->pc = 0x18312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_183130:
    // 0x183130: 0x40f809  jalr        $v0
label_183134:
    if (ctx->pc == 0x183134u) {
        ctx->pc = 0x183134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183130u;
        // 0x183134: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183138u;
        goto label_183138;
    }
    ctx->pc = 0x183130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183138u);
        ctx->pc = 0x183134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183130u;
        // 0x183134: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183130u, 0x183138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183138u;
label_183138:
    // 0x183138: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x183138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_18313c:
    // 0x18313c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x18313cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_183140:
    // 0x183140: 0x40f809  jalr        $v0
label_183144:
    if (ctx->pc == 0x183144u) {
        ctx->pc = 0x183144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183140u;
        // 0x183144: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183148u;
        goto label_183148;
    }
    ctx->pc = 0x183140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183148u);
        ctx->pc = 0x183144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183140u;
        // 0x183144: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183140u, 0x183148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183148u;
label_183148:
    // 0x183148: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x183148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_18314c:
    // 0x18314c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18314cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_183150:
    // 0x183150: 0x40f809  jalr        $v0
label_183154:
    if (ctx->pc == 0x183154u) {
        ctx->pc = 0x183154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183150u;
        // 0x183154: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183158u;
        goto label_183158;
    }
    ctx->pc = 0x183150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183158u);
        ctx->pc = 0x183154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183150u;
        // 0x183154: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183150u, 0x183158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183158u;
label_183158:
    // 0x183158: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x183158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_18315c:
    // 0x18315c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x18315cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_183160:
    // 0x183160: 0x40f809  jalr        $v0
label_183164:
    if (ctx->pc == 0x183164u) {
        ctx->pc = 0x183164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183160u;
        // 0x183164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183168u;
        goto label_183168;
    }
    ctx->pc = 0x183160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183168u);
        ctx->pc = 0x183164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183160u;
        // 0x183164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183160u, 0x183168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183168u;
label_183168:
    // 0x183168: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x183168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_18316c:
    // 0x18316c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x18316cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_183170:
    // 0x183170: 0x40f809  jalr        $v0
label_183174:
    if (ctx->pc == 0x183174u) {
        ctx->pc = 0x183174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183170u;
        // 0x183174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183178u;
        goto label_183178;
    }
    ctx->pc = 0x183170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183178u);
        ctx->pc = 0x183174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183170u;
        // 0x183174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183170u, 0x183178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183178u;
label_183178:
    // 0x183178: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x183178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_18317c:
    // 0x18317c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x18317cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_183180:
    // 0x183180: 0x40f809  jalr        $v0
label_183184:
    if (ctx->pc == 0x183184u) {
        ctx->pc = 0x183184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183180u;
        // 0x183184: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183188u;
        goto label_183188;
    }
    ctx->pc = 0x183180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183188u);
        ctx->pc = 0x183184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183180u;
        // 0x183184: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183180u, 0x183188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183188u;
label_183188:
    // 0x183188: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x183188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_18318c:
    // 0x18318c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x18318cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_183190:
    // 0x183190: 0x40f809  jalr        $v0
label_183194:
    if (ctx->pc == 0x183194u) {
        ctx->pc = 0x183194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183190u;
        // 0x183194: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183198u;
        goto label_183198;
    }
    ctx->pc = 0x183190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183198u);
        ctx->pc = 0x183194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183190u;
        // 0x183194: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183190u, 0x183198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183198u;
label_183198:
    // 0x183198: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x183198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_18319c:
    // 0x18319c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x18319cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1831a0:
    // 0x1831a0: 0x40f809  jalr        $v0
label_1831a4:
    if (ctx->pc == 0x1831A4u) {
        ctx->pc = 0x1831A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831A0u;
        // 0x1831a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1831A8u;
        goto label_1831a8;
    }
    ctx->pc = 0x1831A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1831A8u);
        ctx->pc = 0x1831A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831A0u;
        // 0x1831a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1831A0u, 0x1831A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1831A8u;
label_1831a8:
    // 0x1831a8: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
label_1831ac:
    if (ctx->pc == 0x1831ACu) {
        ctx->pc = 0x1831ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831A8u;
        // 0x1831ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1831B0u;
        goto label_1831b0;
    }
    ctx->pc = 0x1831A8u;
    {
        const bool branch_taken_0x1831a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1831ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831A8u;
        // 0x1831ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1831a8) {
            ctx->pc = 0x183294u;
            goto label_183294;
        }
    }
    ctx->pc = 0x1831B0u;
label_1831b0:
    // 0x1831b0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1831b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1831b4:
    // 0x1831b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1831b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1831b8:
    // 0x1831b8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1831b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1831bc:
    // 0x1831bc: 0x40f809  jalr        $v0
label_1831c0:
    if (ctx->pc == 0x1831C0u) {
        ctx->pc = 0x1831C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831BCu;
        // 0x1831c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1831C4u;
        goto label_1831c4;
    }
    ctx->pc = 0x1831BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1831C4u);
        ctx->pc = 0x1831C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831BCu;
        // 0x1831c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1831BCu, 0x1831C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1831C4u;
label_1831c4:
    // 0x1831c4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1831c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1831c8:
    // 0x1831c8: 0xc6160080  lwc1        $f22, 0x80($s0)
    ctx->pc = 0x1831c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1831cc:
    // 0x1831cc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1831ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1831d0:
    // 0x1831d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1831d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1831d4:
    // 0x1831d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1831d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1831d8:
    // 0x1831d8: 0x0  nop
    ctx->pc = 0x1831d8u;
    // NOP
label_1831dc:
    // 0x1831dc: 0x0  nop
    ctx->pc = 0x1831dcu;
    // NOP
label_1831e0:
    // 0x1831e0: 0x4616ad83  div.s       $f22, $f21, $f22
    ctx->pc = 0x1831e0u;
    ctx->f[22] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[22]);
label_1831e4:
    // 0x1831e4: 0xc0c493d  jal         func_3124F4
label_1831e8:
    if (ctx->pc == 0x1831E8u) {
        ctx->pc = 0x1831E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831E4u;
        // 0x1831e8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1831ECu;
        goto label_1831ec;
    }
    ctx->pc = 0x1831E4u;
    SET_GPR_U32(ctx, 31, 0x1831ECu);
    ctx->pc = 0x1831E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1831E4u;
    // 0x1831e8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1831E4u, 0x1831ECu)) {
        return;
    }
    ctx->pc = 0x1831ECu;
label_1831ec:
    // 0x1831ec: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1831ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
label_1831f0:
    // 0x1831f0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1831f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1831f4:
    // 0x1831f4: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1831f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_1831f8:
    // 0x1831f8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1831f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1831fc:
    // 0x1831fc: 0x2672fff0  addiu       $s2, $s3, -0x10
    ctx->pc = 0x1831fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
label_183200:
    // 0x183200: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x183200u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
label_183204:
    // 0x183204: 0xc6500018  lwc1        $f16, 0x18($s2)
    ctx->pc = 0x183204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_183208:
    // 0x183208: 0x26107f20  addiu       $s0, $s0, 0x7F20
    ctx->pc = 0x183208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32544));
label_18320c:
    // 0x18320c: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x18320cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_183210:
    // 0x183210: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x183210u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_183214:
    // 0x183214: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x183214u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_183218:
    // 0x183218: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x183218u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_18321c:
    // 0x18321c: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x18321cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_183220:
    // 0x183220: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x183220u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_183224:
    // 0x183224: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x183224u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
label_183228:
    // 0x183228: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x183228u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_18322c:
    // 0x18322c: 0x4600a4c6  mov.s       $f19, $f20
    ctx->pc = 0x18322cu;
    ctx->f[19] = FPU_MOV_S(ctx->f[20]);
label_183230:
    // 0x183230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183234:
    // 0x183234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183238:
    // 0x183238: 0xc06ce2a  jal         func_1B38A8
label_18323c:
    if (ctx->pc == 0x18323Cu) {
        ctx->pc = 0x18323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183238u;
        // 0x18323c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183240u;
        goto label_183240;
    }
    ctx->pc = 0x183238u;
    SET_GPR_U32(ctx, 31, 0x183240u);
    ctx->pc = 0x18323Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183238u;
    // 0x18323c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x183238u, 0x183240u)) {
        return;
    }
    ctx->pc = 0x183240u;
label_183240:
    // 0x183240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183244:
    // 0x183244: 0xc06cff8  jal         func_1B3FE0
label_183248:
    if (ctx->pc == 0x183248u) {
        ctx->pc = 0x183248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183244u;
        // 0x183248: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18324Cu;
        goto label_18324c;
    }
    ctx->pc = 0x183244u;
    SET_GPR_U32(ctx, 31, 0x18324Cu);
    ctx->pc = 0x183248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183244u;
    // 0x183248: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x183244u, 0x18324Cu)) {
        return;
    }
    ctx->pc = 0x18324Cu;
label_18324c:
    // 0x18324c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18324cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_183250:
    // 0x183250: 0xc6500018  lwc1        $f16, 0x18($s2)
    ctx->pc = 0x183250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_183254:
    // 0x183254: 0x3c0143cc  lui         $at, 0x43CC
    ctx->pc = 0x183254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17356 << 16));
label_183258:
    // 0x183258: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x183258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18325c:
    // 0x18325c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18325cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_183260:
    // 0x183260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183264:
    // 0x183264: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x183264u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_183268:
    // 0x183268: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x183268u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_18326c:
    // 0x18326c: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x18326cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_183270:
    // 0x183270: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x183270u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
label_183274:
    // 0x183274: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x183274u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_183278:
    // 0x183278: 0x46006486  mov.s       $f18, $f12
    ctx->pc = 0x183278u;
    ctx->f[18] = FPU_MOV_S(ctx->f[12]);
label_18327c:
    // 0x18327c: 0x460064c6  mov.s       $f19, $f12
    ctx->pc = 0x18327cu;
    ctx->f[19] = FPU_MOV_S(ctx->f[12]);
label_183280:
    // 0x183280: 0xc06ce2a  jal         func_1B38A8
label_183284:
    if (ctx->pc == 0x183284u) {
        ctx->pc = 0x183284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183280u;
        // 0x183284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183288u;
        goto label_183288;
    }
    ctx->pc = 0x183280u;
    SET_GPR_U32(ctx, 31, 0x183288u);
    ctx->pc = 0x183284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183280u;
    // 0x183284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x183280u, 0x183288u)) {
        return;
    }
    ctx->pc = 0x183288u;
label_183288:
    // 0x183288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18328c:
    // 0x18328c: 0xc06cff8  jal         func_1B3FE0
label_183290:
    if (ctx->pc == 0x183290u) {
        ctx->pc = 0x183290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18328Cu;
        // 0x183290: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183294u;
        goto label_183294;
    }
    ctx->pc = 0x18328Cu;
    SET_GPR_U32(ctx, 31, 0x183294u);
    ctx->pc = 0x183290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18328Cu;
    // 0x183290: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x18328Cu, 0x183294u)) {
        return;
    }
    ctx->pc = 0x183294u;
label_183294:
    // 0x183294: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x183294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_183298:
    // 0x183298: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x183298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_18329c:
    // 0x18329c: 0x40f809  jalr        $v0
label_1832a0:
    if (ctx->pc == 0x1832A0u) {
        ctx->pc = 0x1832A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18329Cu;
        // 0x1832a0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1832A4u;
        goto label_1832a4;
    }
    ctx->pc = 0x18329Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1832A4u);
        ctx->pc = 0x1832A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18329Cu;
        // 0x1832a0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18329Cu, 0x1832A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1832A4u;
label_1832a4:
    // 0x1832a4: 0x8fa50114  lw          $a1, 0x114($sp)
    ctx->pc = 0x1832a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_1832a8:
    // 0x1832a8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1832a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1832ac:
    // 0x1832ac: 0x40f809  jalr        $v0
label_1832b0:
    if (ctx->pc == 0x1832B0u) {
        ctx->pc = 0x1832B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832ACu;
        // 0x1832b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1832B4u;
        goto label_1832b4;
    }
    ctx->pc = 0x1832ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1832B4u);
        ctx->pc = 0x1832B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832ACu;
        // 0x1832b0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1832ACu, 0x1832B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1832B4u;
label_1832b4:
    // 0x1832b4: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x1832b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_1832b8:
    // 0x1832b8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1832b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1832bc:
    // 0x1832bc: 0x40f809  jalr        $v0
label_1832c0:
    if (ctx->pc == 0x1832C0u) {
        ctx->pc = 0x1832C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832BCu;
        // 0x1832c0: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1832C4u;
        goto label_1832c4;
    }
    ctx->pc = 0x1832BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1832C4u);
        ctx->pc = 0x1832C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832BCu;
        // 0x1832c0: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1832BCu, 0x1832C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1832C4u;
label_1832c4:
    // 0x1832c4: 0x8fa5011c  lw          $a1, 0x11C($sp)
    ctx->pc = 0x1832c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_1832c8:
    // 0x1832c8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1832c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1832cc:
    // 0x1832cc: 0x40f809  jalr        $v0
label_1832d0:
    if (ctx->pc == 0x1832D0u) {
        ctx->pc = 0x1832D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832CCu;
        // 0x1832d0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1832D4u;
        goto label_1832d4;
    }
    ctx->pc = 0x1832CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1832D4u);
        ctx->pc = 0x1832D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832CCu;
        // 0x1832d0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1832CCu, 0x1832D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1832D4u;
label_1832d4:
    // 0x1832d4: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x1832d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1832d8:
    // 0x1832d8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1832d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1832dc:
    // 0x1832dc: 0x40f809  jalr        $v0
label_1832e0:
    if (ctx->pc == 0x1832E0u) {
        ctx->pc = 0x1832E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832DCu;
        // 0x1832e0: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1832E4u;
        goto label_1832e4;
    }
    ctx->pc = 0x1832DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1832E4u);
        ctx->pc = 0x1832E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832DCu;
        // 0x1832e0: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1832DCu, 0x1832E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1832E4u;
label_1832e4:
    // 0x1832e4: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x1832e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_1832e8:
    // 0x1832e8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1832e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1832ec:
    // 0x1832ec: 0x40f809  jalr        $v0
label_1832f0:
    if (ctx->pc == 0x1832F0u) {
        ctx->pc = 0x1832F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832ECu;
        // 0x1832f0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1832F4u;
        goto label_1832f4;
    }
    ctx->pc = 0x1832ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1832F4u);
        ctx->pc = 0x1832F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832ECu;
        // 0x1832f0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1832ECu, 0x1832F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1832F4u;
label_1832f4:
    // 0x1832f4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1832f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1832f8:
    // 0x1832f8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1832f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1832fc:
    // 0x1832fc: 0x40f809  jalr        $v0
label_183300:
    if (ctx->pc == 0x183300u) {
        ctx->pc = 0x183300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832FCu;
        // 0x183300: 0x8fa50128  lw          $a1, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183304u;
        goto label_183304;
    }
    ctx->pc = 0x1832FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x183304u);
        ctx->pc = 0x183300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832FCu;
        // 0x183300: 0x8fa50128  lw          $a1, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1832FCu, 0x183304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x183304u;
label_183304:
    // 0x183304: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x183304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_183308:
    // 0x183308: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x183308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_18330c:
    // 0x18330c: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x18330cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_183310:
    // 0x183310: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x183310u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_183314:
    // 0x183314: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x183314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_183318:
    // 0x183318: 0xc7b801a0  lwc1        $f24, 0x1A0($sp)
    ctx->pc = 0x183318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_18331c:
    // 0x18331c: 0xc7b70198  lwc1        $f23, 0x198($sp)
    ctx->pc = 0x18331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_183320:
    // 0x183320: 0xc7b60190  lwc1        $f22, 0x190($sp)
    ctx->pc = 0x183320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_183324:
    // 0x183324: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x183324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_183328:
    // 0x183328: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x183328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18332c:
    // 0x18332c: 0x3e00008  jr          $ra
label_183330:
    if (ctx->pc == 0x183330u) {
        ctx->pc = 0x183330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18332Cu;
        // 0x183330: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183334u;
        goto label_183334;
    }
    ctx->pc = 0x18332Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18332Cu;
        // 0x183330: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18332Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183334u;
label_183334:
    // 0x183334: 0x0  nop
    ctx->pc = 0x183334u;
    // NOP
    ctx->pc = 0x183338u;
}
